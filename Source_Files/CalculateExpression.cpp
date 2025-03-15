#include "CalculateExpression.h"
#include <QString>
#include <QVector>
#include <stack>
#include <queue>
#include <unordered_map>
#include <cmath>

using namespace std;

bool isOperator(QChar c) {
    return ((c == '*') || (c == '/') || (c == '+') || (c == '-') || (c == '^') || c == '!');
}

bool isIncompleteExpression(const QString& input, const int bracketCounter) {
    if (input.isEmpty()) {
        return false;
    }
    QChar lastChar = input.back();
    return ((isOperator(lastChar) && lastChar != "!") || (bracketCounter % 2 != 0) || (lastChar == '('));
}

bool isFunction(QString str) {
    return ((str == "sin") || (str == "cos") || (str == "tan") || (str == "cot") ||
            (str == "asin") || (str == "acos") || (str == "atan") || (str == "acot") ||
            (str == "ln")  || (str == "log") || (str == "√"));
}



double calculateExpression(const QString &input, const int bracketCounter, const QString Deg_Rad) {
    if (input.isEmpty()) {
        return 0;
    }
    if (isIncompleteExpression(input, bracketCounter)) {
        return numeric_limits<double>::quiet_NaN();
    }

    //Tokenization
    QVector<QVector<QString>> tokens;
    for (size_t i = 0; i < input.size(); i++) {
        QChar c = input[i];
        if (c == ' ') {
            continue;
        } else if (c.isDigit() or (c == '-' and (i == 0 or input[i - 1] == '('))) { // check if the number is negative
            int numberLength = 0;
            int dotCounter = 0;
            QString number = QString(c);

            for (size_t j = i + 1; j < input.size(); j++) { //Checking for multi-digit numbers
                if (input[j].isDigit()) {
                    number += input[j];
                    numberLength++;
                } else if (input[j] == '.') { // Checking for floating point
                    if (dotCounter == 0) {
                        number += input[j];
                        dotCounter++;
                        numberLength++;
                    } else { // error if multiple dots are found
                        return numeric_limits<double>::quiet_NaN();
                        break;
                    }
                } else {
                    break; //Number has ended
                }
            }
            i += numberLength;
            tokens.push_back({number, "number"});
        } else if (isOperator(c)) {
            if (!tokens.empty() && ((tokens.back()[1] == "operator" && tokens.back()[0] != "!") || tokens.back()[0] == "(")) {
                return numeric_limits<double>::quiet_NaN(); //NaN for consecutive operators (not counting !) or "(+", "(/", "(*"
            }
            tokens.push_back({QString(c), "operator"});
        } else if ((c == '(') or (c == ')')) {
            tokens.push_back({QString(c), "bracket"});
        } else if (c == u'√') { //square root
            tokens.push_back({QString(c), "function"});
        } else if ((c == 'm') && (input[i+1] == 'o') && (input[i+2] == 'd')) {
            tokens.push_back({QString(c) + QString(input[i+1]) + QString(input[i+2]), "operator"});
            i += 2;
        } else if (((c == 'l') && (input[i+1] == 'n'))) {  //ln
            tokens.push_back({QString(c) + QString(input[i+1]), "function"});
            i += 1;
        } else if (((c == 's') && (input[i+1] == 'i') && (input[i+2] == 'n')) ||  //sin
                   ((c == 'c') && (input[i+1] == 'o') && (input[i+2] == 's')) ||  //cos
                   ((c == 't') && (input[i+1] == 'a') && (input[i+2] == 'n')) ||  //tan
                   ((c == 'c') && (input[i+1] == 'o') && (input[i+2] == 't')) ||  //cot
                   ((c == 'l') && (input[i+1] == 'o') && (input[i+2] == 'g'))) {  //log
            tokens.push_back({QString(c) + QString(input[i+1]) + QString(input[i+2]), "function"});
            i += 2;
        } else if (((c == 'a') && (input[i+1] == 's') && (input[i+2] == 'i') && (input[i+3] == 'n')) ||  //asin
                   ((c == 'a') && (input[i+1] == 'c') && (input[i+2] == 'o') && (input[i+3] == 's')) ||  //acos
                   ((c == 'a') && (input[i+1] == 't') && (input[i+2] == 'a') && (input[i+3] == 'n')) ||  //atan
                   ((c == 'a') && (input[i+1] == 'c') && (input[i+2] == 'o') && (input[i+3] == 't'))) {  //acot
            tokens.push_back({QString(c) + QString(input[i+1]) + QString(input[i+2]) + QString(input[i+3]), "function"});
            i += 3;
        } else if (c == 'e') {
            tokens.push_back({"2.71828182846", "number"});
        } else if (c == u'π') {
            tokens.push_back({"3.14159265358979323846", "number"});
        } else {
            return numeric_limits<double>::quiet_NaN();
        }
    }

    struct Operator {
        int precedence;
    };

    unordered_map<QString, Operator> operatorPrecedence = {
        {"+", {1}},
        {"-", {1}},
        {"*", {2}},
        {"/", {2}},
        {"mod", {2}},
        {"^", {3}},
        {"!", {3}},
        {"√", {4}},
        {"ln", {4}},
        {"log", {4}},
        {"sin", {4}},
        {"cos", {4}},
        {"tan", {4}},
        {"cot", {4}},
        {"asin", {4}},
        {"acos", {4}},
        {"atan", {4}},
        {"acot", {4}},
    };

    queue<QVector<QString>> RPN;
    stack<QString> operators;

    //Shunting Algorithm
    for (size_t i = 0; i < tokens.size(); i++) {
        if (tokens[i][1] == "number") {
            RPN.push(tokens[i]);
        } else if (tokens[i][1] == "function") {
            operators.push(tokens[i][0]);
        } else if (tokens[i][1] == "operator") {
            if (operators.empty() || operators.top() == "(") {
                operators.push(tokens[i][0]);
            } else {  //Comparing precedences
                while (!operators.empty() && operatorPrecedence[operators.top()].precedence >=
                       operatorPrecedence[tokens[i][0]].precedence) {
                    RPN.push({ operators.top(), "operator" });
                    operators.pop();
                }
                operators.push(tokens[i][0]);
            }
        } else if (tokens[i][0] == '(') {
            operators.push(tokens[i][0]);
        } else if (tokens[i][0] == ')') {
            if (tokens[i-1][0] == '(') {
                return numeric_limits<double>::quiet_NaN();  // Return NaN if "()"
            } else {
                while (!operators.empty() && operators.top() != '(') {
                    RPN.push({ operators.top(), "operator" });
                    operators.pop();
                }
                operators.pop(); // Pop the "("

                if (!operators.empty() && isFunction(operators.top())) {
                    RPN.push({ operators.top(), "function" });
                    operators.pop();
                }
            }
        }
    }
    while (!operators.empty()) {
        RPN.push({ operators.top(), "operator" });
        operators.pop();
    }

    //Calculating RPN
    stack<double> output;
    while (!RPN.empty()) {
        QString token = RPN.front()[0];
        RPN.pop();
        if ((token[0].isDigit()) || (token[0] == '-' && token.size() > 1)) {
            output.push(token.toDouble());
        } else if (isOperator(token[0]) || token == "mod") {
            if (token == "!") {
                if (output.empty()) {
                    return numeric_limits<double>::quiet_NaN();
                }
                double operand = output.top();
                output.pop();
                if (operand < 0 || floor(operand) != operand) {
                    return numeric_limits<double>::quiet_NaN();
                }
                double result = 1;
                for (int i = 1; i <= static_cast<int>(operand); i++) {
                    result *= i;
                }
                output.push(result);
            } else {
                double first = output.top();
                output.pop();
                double second = output.top();
                output.pop();

                if (isnan(first) or (isnan(second))){
                    return numeric_limits<double>::quiet_NaN();
                }
                else if (token == '+')  { output.push(first + second); }
                else if (token == '-')  { output.push(second - first); }
                else if (token == '*')  { output.push(first * second); }
                else if (token == '/')  {
                    if (first == 0) {
                        return numeric_limits<double>::quiet_NaN();
                    } else {
                        output.push(second / first);
                    }
                }
                else if (token == "mod") {
                    if (first == 0) {
                        return numeric_limits<double>::quiet_NaN();
                    } else {
                        output.push(fmod(second, first));
                    }
                }
                else if (token == '^') { output.push(pow(second, first)); }
            }
        } else if (isFunction(token)) {
            if (output.empty()) {
                return numeric_limits<double>::quiet_NaN(); //Function has no value to count: "sin()"
            }
            double value = output.top();
            output.pop();

            if (token == "log") { output.push(log10(value)); }
            else if (token == "ln") { output.push(log(value)); }
            else if (token == "√") { output.push(sqrt(value)); }

            else { //Trigonometric functions
                if (Deg_Rad == "DEG") {
                value = value * M_PI/180.0; //Convert to Degrees
                }

                if (token == "sin") { output.push(sin(value)); }
                else if (token == "cos") { output.push(cos(value)); }
                else if (token == "tan") { output.push(tan(value)); }
                else if (token == "cot") {
                    if (tan(value) == 0) {
                        return numeric_limits<double>::quiet_NaN();
                    }
                    output.push(1.0 / tan(value));
                }
                else if (token == "asin") { output.push(asin(value)); }
                else if (token == "acos") { output.push(acos(value)); }
                else if (token == "atan") { output.push(atan(value)); }
                else if (token == "acot") {
                    if (tan(value) == 0) {
                        return numeric_limits<double>::quiet_NaN();
                    }
                    output.push(atan(1.0/value));
                }
            }
        }
    }
    if (!output.empty()) {
        double result = output.top();
        return result;
    }

    return numeric_limits<double>::quiet_NaN();
}

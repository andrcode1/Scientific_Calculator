#ifndef CALCULATEEXPRESSION_H
#define CALCULATEEXPRESSION_H

#include <QString>

bool isOperator(QChar c);
bool isIncompleteExpression(const QString& input, const int bracketCounter);
double calculateExpression(const QString &input, const int bracketCounter, const QString Deg_Rad);
bool isFunction(QString str);

#endif // CALCULATEEXPRESSION_H

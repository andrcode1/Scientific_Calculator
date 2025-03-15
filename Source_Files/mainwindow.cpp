#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "CalculateExpression.h"
#include <QRegularExpression>
#include <QListWidget>

const QString& darkTheme();
const QString& lightTheme();

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , menuVisible(false)
    , historyVisible(false)
    , INV_Counter(0)
{
    ui->setupUi(this);
    setWindowTitle("Calculator");
    this->resize(435, 600); // Make Calculator minimum size at launch

    ui->Menu_Section->setMaximumWidth(0); //Hide Menu Widget
    menuAnimation = new QPropertyAnimation(ui->Menu_Section, "maximumWidth");
    menuAnimation->setDuration(150);

    ui->History_Section->setMaximumWidth(0); // Hide History Widget
    historyAnimation = new QPropertyAnimation(ui->History_Section, "maximumWidth");
    historyAnimation->setDuration(150);
    connect(ui->listHistory, &QListWidget::itemClicked, this, &MainWindow::listHistory_itemClicked);

    QList<QPushButton*> OutputTextButtons = { // Buttons which only need to output their text
        //Standard Calculator
        ui->Button_0, ui->Button_1, ui->Button_2, ui->Button_3,
        ui->Button_4, ui->Button_5, ui->Button_6, ui->Button_7,
        ui->Button_8, ui->Button_9, ui->Button_00, ui->Button_Division,
        ui->Button_Multiplication, ui->Button_Sum, ui->Button_Subtract,
        ui->Button_FloatPoint,
        //Scientific Calculator
        ui->Button_0_SC, ui->Button_1_SC, ui->Button_2_SC, ui->Button_3_SC,
        ui->Button_4_SC, ui->Button_5_SC, ui->Button_6_SC, ui->Button_7_SC,
        ui->Button_8_SC, ui->Button_9_SC, ui->Button_00_SC, ui->Button_Division_SC,
        ui->Button_Multiplication_SC, ui->Button_Sum_SC, ui->Button_Subtract_SC,
        ui->Button_FloatPoint_SC, ui->Button_mod_SC, ui->Button_e_SC, ui->Button_pi_SC,
        ui->Button_factorial_SC, ui->Button_power_SC,
    };

    QList<QPushButton*> OutputTextButtons_withBrackets = { // Buttons with "()" at end: "sin()"
        ui->Button_sqrt_SC, ui->Button_sin_SC, ui->Button_cos_SC,
        ui->Button_tan_SC, ui->Button_cot_SC, ui->Button_ln_SC,
        ui->Button_log_SC
    };

    QList<QPushButton*> ST_Style_Number_or_Operator_Buttons = { //Style for Standard calculator
        ui->Button_0, ui->Button_1, ui->Button_2, ui->Button_3,
        ui->Button_4, ui->Button_5, ui->Button_6, ui->Button_7,
        ui->Button_8, ui->Button_9, ui->Button_00, ui->Button_Division,
        ui->Button_Multiplication, ui->Button_Sum, ui->Button_Subtract,
        ui->Button_FloatPoint, ui->Button_Equal, ui->Button_AC, ui->Button_C,
        ui->Button_Brackets, ui->Button_Menu, ui->Button_History
    };

    QList<QPushButton*> SC_Style_Number_or_Operator_Buttons = { //Style for Scientific calculator
        ui->Button_0_SC, ui->Button_1_SC, ui->Button_2_SC, ui->Button_3_SC,
        ui->Button_4_SC, ui->Button_5_SC, ui->Button_6_SC, ui->Button_7_SC,
        ui->Button_8_SC, ui->Button_9_SC, ui->Button_00_SC, ui->Button_Division_SC,
        ui->Button_Multiplication_SC, ui->Button_Sum_SC, ui->Button_Subtract_SC,
        ui->Button_FloatPoint_SC, ui->Button_mod_SC, ui->Button_e_SC, ui->Button_pi_SC,
        ui->Button_factorial_SC, ui->Button_power_SC, ui->Button_sqrt_SC,
        ui->Button_sin_SC, ui->Button_cos_SC, ui->Button_tan_SC, ui->Button_cot_SC,
        ui->Button_ln_SC, ui->Button_log_SC, ui->Button_INV_SC, ui->Button_RAD_DEG_SC,
        ui->Button_AC_SC, ui->Button_C_SC, ui->Button_Brackets_SC, ui->Button_Equal_SC
    };

    for (QPushButton* btn : ST_Style_Number_or_Operator_Buttons) {
        btn->setProperty("calcType", "ST"); //Later used in setStyleSheet();
    }
    for (QPushButton* btn : SC_Style_Number_or_Operator_Buttons) {
        btn->setProperty("calcType", "SC"); //Later used in setStyleSheet();
    }
    for (QPushButton* button : OutputTextButtons) {
        connect(button, &QPushButton::clicked, this, &MainWindow::OutputTextButtons_clicked);
    }
    for (QPushButton* button : OutputTextButtons_withBrackets) {
        connect(button, &QPushButton::clicked, this, &MainWindow::OutputTextButtons_withBrackets_clicked);
    }

    //Connect _SC Buttons with same functionality as _ST buttons to the same function
    connect(ui->Button_BackSpace_SC, &QPushButton::clicked, this, &MainWindow::on_Button_BackSpace_clicked);
    connect(ui->Button_Equal_SC, &QPushButton::clicked, this, &MainWindow::on_Button_Equal_clicked);
    connect(ui->Button_C_SC, &QPushButton::clicked, this, &MainWindow::on_Button_C_clicked);
    connect(ui->Button_AC_SC, &QPushButton::clicked, this, &MainWindow::on_Button_AC_clicked);
    connect(ui->Button_Brackets_SC, &QPushButton::clicked, this, &MainWindow::on_Button_Brackets_clicked);

    //Images for buttons
    QPixmap pixmap_style_light(":/images/sunImage.png");
    QIcon Sun_Icon(pixmap_style_light);
    ui->Button_Style->setIcon(Sun_Icon);
    ui->Button_Style->setIconSize(QSize(50,50));

    QPixmap pixmap_history(":/images/historyimage.png");
    QIcon History_Icon(pixmap_history);
    ui->Button_History->setIcon(History_Icon);
    ui->Button_History->setIconSize(QSize(35,35));

    QPixmap pixmap_backspace(":/images/backspace.png");
    QIcon Backspace_Icon(pixmap_backspace);
    ui->Button_BackSpace->setIcon(Backspace_Icon);
    ui->Button_BackSpace->setIconSize(QSize(70,70));
    ui->Button_BackSpace_SC->setIcon(Backspace_Icon);
    ui->Button_BackSpace_SC->setIconSize(QSize(50,50));

    QPixmap pixmap_menu(":/images/menuimage.png");
    QIcon Menu_Icon(pixmap_menu);
    ui->Button_Menu->setIcon(Menu_Icon);
    ui->Button_Menu->setIconSize(QSize(35,35));

    //Dark Theme by default:
    ui->centralwidget->setStyleSheet(darkTheme());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::OutputTextButtons_clicked() {
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    int cursorPosition = ui->Input_Box->cursorPosition();

    QString currentText = ui->Input_Box->text();
    currentText.insert(cursorPosition, button->text());

    ui->Input_Box->setText(currentText);
    ui->Input_Box->setCursorPosition(cursorPosition + button->text().length());
}

void MainWindow::OutputTextButtons_withBrackets_clicked() {
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    int cursorPosition = ui->Input_Box->cursorPosition();

    QString currentText = ui->Input_Box->text();
    QString addedText = button->text() + "()";
    currentText.insert(cursorPosition, addedText);

    ui->Input_Box->setText(currentText);
    ui->Input_Box->setCursorPosition(cursorPosition + button->text().length() + 1);
}

void MainWindow::on_Button_BackSpace_clicked()
{
    QString text = ui->Input_Box->text();
    int cursorPosition = ui->Input_Box->cursorPosition();
    if ((!text.isEmpty()) && (cursorPosition > 0)) {
        if ((text.at(cursorPosition - 1) == "(") or (text.at(cursorPosition - 1) == ")")) {
            bracketCounter--;
        }
        ui->Input_Box->setText(text.remove(cursorPosition - 1, 1));
        ui->Input_Box->setCursorPosition(cursorPosition - 1);
    }
}

void MainWindow::on_Button_C_clicked()
{
    ui->Input_Box->clear();
    bracketCounter = 0;
}

void MainWindow::on_Button_AC_clicked()
{
    ui->Input_Box->clear();
    ui->Output_Box->clear();
    bracketCounter = 0;
}

void MainWindow::on_Button_Brackets_clicked()
{
    int cursorPosition = ui->Input_Box->cursorPosition();
    QString currentText = ui->Input_Box->text();
    QString addedText;
    if (bracketCounter % 2 == 0) {
        addedText = "(";
        bracketCounter++;
    } else {
        addedText = ")";
        bracketCounter++;
    }
    currentText.insert(cursorPosition, addedText);
    ui->Input_Box->setText(currentText);
    ui->Input_Box->setCursorPosition(cursorPosition + 1);
}

void MainWindow::on_Button_Equal_clicked() //Calculate Expression
{
    QString Deg_Rad = ui->Button_RAD_DEG_SC->text();
    QString input = ui->Input_Box->text();
    double result = calculateExpression(input, bracketCounter, Deg_Rad);
    bracketCounter = 0;

    QString resultStr = QString::number(result, 'f', 10);

    static const QRegularExpression trailingZerosRegex("0+$");
    static const QRegularExpression trailingDotRegex("\\.$");

    resultStr.remove(trailingZerosRegex);  // Remove trailing zeros
    resultStr.remove(trailingDotRegex); // Remove trailing decimal point

    ui->Input_Box->setText(resultStr);
    ui->Output_Box->setText(input + " = ");
    ui->listHistory->addItem(input + " = " + resultStr);
}

void MainWindow::on_Button_Menu_clicked()
{
    if (menuVisible) {
        menuAnimation->setStartValue(150);
        menuAnimation->setEndValue(0);
    } else {
        menuAnimation->setStartValue(0);
        menuAnimation->setEndValue(150);
    }

    menuAnimation->start();
    menuVisible = !menuVisible;
}

void MainWindow::on_Button_History_clicked()
{
    if (historyVisible) {
        historyAnimation->setStartValue(150);
        historyAnimation->setEndValue(0);
    } else {
        historyAnimation->setStartValue(0);
        historyAnimation->setEndValue(150);
    }

    historyAnimation->start();
    historyVisible = !historyVisible;
}

void MainWindow::listHistory_itemClicked(QListWidgetItem *item)
{
    ui->Input_Box->clear();
    ui->Output_Box->clear();
    const QString text = item->text();
    bool foundEqualSign = false;
    for (QChar c : text) {
        if (c == "=") {
            foundEqualSign = true;
            continue;
        } else if (!foundEqualSign) {
            ui->Output_Box->setText(ui->Output_Box->text() + c);
        } else {
            ui->Input_Box->setText(ui->Input_Box->text() + c);
        }
    }
}

void MainWindow::on_Button_ClearHistory_clicked()
{
    ui->listHistory->clear();
}

void MainWindow::on_Button_Scientific_clicked()
{
    QStackedWidget* Buttons_Grid = ui->Button_Options_StackedWidget;
    Buttons_Grid->setCurrentIndex(1);
    ui->Calculator_Type->setHtml(
        "<p align='center' \
        style='margin:0px; \
        font-family:Segoe UI; \
        font-size:22pt; \
        font-weight:700;'>\
        Scientific</p>"
    );
}

void MainWindow::on_Button_Standard_clicked()
{
    QStackedWidget* Buttons_Grid = ui->Button_Options_StackedWidget;
    Buttons_Grid->setCurrentIndex(0);
    ui->Calculator_Type->setHtml(
        "<p align='center' \
        style='margin:0px; \
        font-family:Segoe UI; \
        font-size:22pt; \
        font-weight:700;'>\
        Standard</p>"
    );
}


void MainWindow::on_Button_RAD_DEG_SC_clicked()
{
    if(ui->Button_RAD_DEG_SC->text() == "RAD") {
        ui->Button_RAD_DEG_SC->setText("DEG");
    } else {
        ui->Button_RAD_DEG_SC->setText("RAD");
    }
}


void MainWindow::on_Button_INV_SC_clicked()
{
    if(INV_Counter % 2 == 0) {
        ui->Button_sin_SC->setText("asin");
        ui->Button_cos_SC->setText("acos");
        ui->Button_tan_SC->setText("atan");
        ui->Button_cot_SC->setText("acot");
    } else {
        ui->Button_sin_SC->setText("sin");
        ui->Button_cos_SC->setText("cos");
        ui->Button_tan_SC->setText("tan");
        ui->Button_cot_SC->setText("cot");
    }
    INV_Counter++;
}


void MainWindow::on_Button_Style_clicked()
{
    if (ui->Button_Style->text() == "Light") { //Dark -> Light
        QPixmap pixmap_style_dark(":/images/moonImage.png");
        QIcon Moon_Icon(pixmap_style_dark);
        ui->Button_Style->setIcon(Moon_Icon);
        ui->Button_Style->setIconSize(QSize(50,50));
        ui->Button_Style->setText("Dark");

        ui->centralwidget->setStyleSheet(lightTheme());
    }
    else if (ui->Button_Style->text() == "Dark") { //Light -> Dark
        QPixmap pixmap_style_light(":/images/sunImage.png");
        QIcon Sun_Icon(pixmap_style_light);
        ui->Button_Style->setIcon(Sun_Icon);
        ui->Button_Style->setIconSize(QSize(50,50));
        ui->Button_Style->setText("Light");

        ui->centralwidget->setStyleSheet(darkTheme());
    }
}

//Dark/Light Themes
const QString& darkTheme() {
static const QString s = R"(
    /* Main background */
    QWidget#centralwidget {
        background-color: #1E1E1E;
    }

    /* ST style buttons */
    QPushButton[calcType="ST"] {
        background-color: #D2691E;
        color: #ffffff;
        font-weight: bold;
        font-size: 23px;
        border-radius: 5px;
        border: 2px solid #A0522D;
        padding: 5px;
    }
    QPushButton[calcType="ST"]:hover {
        background-color: #E07B39;
        border: 2px solid #FF8C40;
    }
    QPushButton[calcType="ST"]:pressed {
        background-color: #B5561D;
        border: 2px solid #8B4513;
    }

    /* SC style buttons */
    QPushButton[calcType="SC"] {
        background-color: #D2691E;
        color: #ffffff;
        font-weight: bold;
        font-size: 18px;
        border-radius: 5px;
        border: 2px solid #A0522D;
        padding: 5px;
    }
    QPushButton[calcType="SC"]:hover {
        background-color: #E07B39;
        border: 2px solid #FF8C40;
    }
    QPushButton[calcType="SC"]:pressed {
        background-color: #B5561D;
        border: 2px solid #8B4513;
    }

    /* Input/Output QLineEdits */
    QLineEdit#Input_Box {
        border-bottom-left-radius: 10px;
        border-bottom-right-radius: 10px;
        border-top-left-radius: 0px;
        border-top-right-radius: 0px;
        background-color: #2D2D2D;
        padding: 5px;
        font-size: 30px;
        font-weight: bold;
        color: #FFFFFF;
    }
    QLineEdit#Output_Box {
        border-top-left-radius: 10px;
        border-top-right-radius: 10px;
        border-bottom-left-radius: 0px;
        border-bottom-right-radius: 0px;
        background-color: #2D2D2D;
        padding: 5px;
        font-size: 25px;
        font-weight: bold;
        color: #FFFFFF;
    }

    /* Button_Standard and Button_Scientific */
    QPushButton#Button_Standard, QPushButton#Button_Scientific {
        background-color: #1E1E1E;
        color: #F0F0F0;
        font-weight: bold;
        font-size: 16px;
        border: 1px solid #666666;
        border-radius: 5px;
        padding: 5px;
    }
    QPushButton#Button_Standard:hover, QPushButton#Button_Scientific:hover {
        background-color: #2C2C2C;
        border: 1px solid #777777;
    }
    QPushButton#Button_Standard:pressed, QPushButton#Button_Scientific:pressed {
        background-color: #141414;
        border: 1px solid #555555;
    }

    /* Button_ClearHistory */
    QPushButton#Button_ClearHistory {
        background-color: #1E1E1E;
        color: #F0F0F0;
        font-weight: bold;
        font-size: 14px;
        border: 1px solid #666666;
        border-radius: 5px;
        padding: 5px;
    }
    QPushButton#Button_ClearHistory:hover {
        background-color: #2C2C2C;
        border: 1px solid #777777;
    }
    QPushButton#Button_ClearHistory:pressed {
        background-color: #141414;
        border: 1px solid #555555;
    }

    /* listHistory */
    QListWidget#listHistory {
        background-color: #2D2D2D;
        color: #ffffff;
        font-size: 14px;
        font-weight: bold;
        border: 1px solid #444444;
        border-radius: 5px;
        padding: 5px;
    }
    QListWidget#listHistory::item:hover {
        background-color: #3A3A3A;
        color: #ffffff;
    }

    /* Calculator_Type and Calculator_Text */
    QTextEdit#Calculator_Type {
        background-color: #2D2D2D;
        color: #ffffff;
        font-size: 22px;
        border: none;
        padding: 0px;
        margin: 0px;
    }
    QTextEdit#Calculator_Text {
        background-color: #1E1E1E;
        color: #ffffff;
        font-size: 12px;
        border: none;
        padding: 0px;
        margin: 0px;
    }

    /* Theme Button */
    QPushButton#Button_Style {
        background-color: #1E1E1E;
        color: #F0F0F0;
        font-weight: bold;
        font-size: 18px;
        border: 1px solid #666666;
        border-radius: 5px;
        padding: 5px;
    }
    QPushButton#Button_Style:hover {
        background-color: #2C2C2C;
        border: 1px solid #777777;
    }
    QPushButton#Button_Style:pressed {
        background-color: #141414;
        border: 2px solid #555555;
    }

    /* Backspace buttons */
    QPushButton#Button_BackSpace, QPushButton#Button_BackSpace_SC {
        background-color: #1E1E1E;
        color: #F0F0F0;
        border: 0px solid;
        border-radius: 5px;
    }
    QPushButton#Button_BackSpace:hover, QPushButton#Button_BackSpace_SC:hover {
        background-color: #2C2C2C;
    }
    QPushButton#Button_BackSpace:pressed, QPushButton#Button_BackSpace_SC:pressed {
        background-color: #141414;
    }
    )";
return s;
}

const QString& lightTheme() {
    //Light Theme
    const static QString s = R"(
    /* Main background */
    QWidget#centralwidget {
        background-color: #ECE8E7;
    }

    /* ST style buttons */
    QPushButton[calcType="ST"] {
        background-color: #DE8955;
        color: #FFFFFF;
        font-weight: bold;
        font-size: 23px;
        border-radius: 5px;
        border: 2px solid #D98946;
        padding: 5px;
    }
    QPushButton[calcType="ST"]:hover {
        background-color: #F5B078;
        border: 2px solid #F19C58;
    }
    QPushButton[calcType="ST"]:pressed {
        background-color: #E38F4A;
        border: 2px solid #C77B35;
    }

    /* SC style buttons */
    QPushButton[calcType="SC"] {
        background-color: #DE8955;
        color: #FFFFFF;
        font-weight: bold;
        font-size: 18px;
        border-radius: 5px;
        border: 2px solid #D98946;
        padding: 5px;
    }
    QPushButton[calcType="SC"]:hover {
        background-color: #F5B078;
        border: 2px solid #F19C58;
    }
    QPushButton[calcType="SC"]:pressed {
        background-color: #E38F4A;
        border: 2px solid #C77B35;
    }

    /* Input/Output */
    QLineEdit#Input_Box {
        border-bottom-left-radius: 10px;
        border-bottom-right-radius: 10px;
        border-top-left-radius: 0px;
        border-top-right-radius: 0px;
        background-color: #D8D8D8;
        padding: 5px;
        font-size: 30px;
        font-weight: bold;
        color: #000000;
    }

    QLineEdit#Output_Box {
        border-top-left-radius: 10px;
        border-top-right-radius: 10px;
        border-bottom-left-radius: 0px;
        border-bottom-right-radius: 0px;
        background-color: #D8D8D8;
        padding: 5px;
        font-size: 25px;
        font-weight: bold;
        color: #000000;
    }

    /* Button_Standard and Button_Scientific */
    QPushButton#Button_Standard, QPushButton#Button_Scientific {
        background-color: #ECE8E7;
        color: #333333;
        font-weight: bold;
        font-size: 16px;
        border: 1px solid #999999;
        border-radius: 5px;
        padding: 5px;
    }
    QPushButton#Button_Standard:hover, QPushButton#Button_Scientific:hover {
        background-color: #E0DDD9;
        border: 1px solid #888888;
    }
    QPushButton#Button_Standard:pressed, QPushButton#Button_Scientific:pressed {
        background-color: #D3CFCC;
        border: 1px solid #777777;
    }

    /* Button_ClearHistory*/
    QPushButton#Button_ClearHistory {
        background-color: #ECE8E7;
        color: #333333;
        font-weight: bold;
        font-size: 14px;
        border: 2px solid #999999;
        border-radius: 5px;
        padding: 5px;
    }
    QPushButton#Button_ClearHistory:hover {
        background-color: #E0DDD9;
        border: 2px solid #888888;
    }
    QPushButton#Button_ClearHistory:pressed {
        background-color: #D3CFCC;
        border: 2px solid #777777;
    }

    /* listHistory */
    QListWidget#listHistory {
        background-color: #D8D8D8;
        color: #000000;
        font-size: 14px;
        font-weight: bold;
        border: 1px solid #CCCCCC;
        border-radius: 5px;
        padding: 5px;
    }

    QListWidget#listHistory::item:hover {
        background-color: #C8C8C8;
        color: #000000;
    }

    /* Calculator_Type and Calculator_Text */
    QTextEdit#Calculator_Type {
        background-color: #D8D8D8;
        color: #000000;
        font-size: 22px;
        border: none;
        padding: 0px;
        margin: 0px;
    }

    QTextEdit#Calculator_Text {
        background-color: #ECE8E7;
        color: #000000;
        font-size: 12px;
        border: none;
        padding: 0px;
        margin: 0px;
    }

    /* Theme Button */
    QPushButton#Button_Style {
        background-color: #ECE8E7;
        color: #333333;
        font-weight: bold;
        font-size: 18px;
        border: 1px solid #999999;
        border-radius: 5px;
        padding: 5px;
    }

    QPushButton#Button_Style:hover {
        background-color: #E0DDD9;
        border: 1px solid #888888;
    }

    QPushButton#Button_Style:pressed {
        background-color: #D3CFCC;
        border: 2px solid #777777;
    }

    /* Backspace */
    QPushButton#Button_BackSpace, QPushButton#Button_BackSpace_SC {
        background-color: #ECE8E7;
        border-radius: 5px;
        border: 0px;
    }

    QPushButton#Button_BackSpace:hover, QPushButton#Button_BackSpace_SC:hover {
        background-color: #E0DDD9;
        border: 1px solid #888888;
    }

    QPushButton#Button_BackSpace:pressed, QPushButton#Button_BackSpace_SC:pressed {
        background-color: #D3CFCC;
        border: 2px solid #777777;
    }

    )";
    return s;
}

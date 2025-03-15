/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionScientific_Calculator;
    QAction *actionFinance_Calculator;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *MainUi;
    QWidget *Menu_Section;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *Calculator_Text;
    QPushButton *Button_Standard;
    QPushButton *Button_Scientific;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_Style;
    QVBoxLayout *CalculatorSection;
    QHBoxLayout *Menu_Tab_Horizontal;
    QPushButton *Button_Menu;
    QTextEdit *Calculator_Type;
    QPushButton *Button_History;
    QVBoxLayout *Input_Output_Vertical;
    QLineEdit *Output_Box;
    QLineEdit *Input_Box;
    QStackedWidget *Button_Options_StackedWidget;
    QWidget *ST_gridButtons;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_2;
    QPushButton *Button_4;
    QPushButton *Button_2;
    QPushButton *Button_Division;
    QPushButton *Button_1;
    QPushButton *Button_FloatPoint;
    QPushButton *Button_8;
    QPushButton *Button_Brackets;
    QPushButton *Button_6;
    QPushButton *Button_9;
    QPushButton *Button_00;
    QPushButton *Button_Subtract;
    QPushButton *Button_C;
    QPushButton *Button_AC;
    QPushButton *Button_7;
    QPushButton *Button_Sum;
    QPushButton *Button_BackSpace;
    QPushButton *Button_5;
    QPushButton *Button_3;
    QPushButton *Button_0;
    QPushButton *Button_Equal;
    QPushButton *Button_Multiplication;
    QWidget *SC_gridButtons;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_3;
    QPushButton *Button_sin_SC;
    QPushButton *Button_7_SC;
    QPushButton *Button_tan_SC;
    QPushButton *Button_1_SC;
    QPushButton *Button_power_SC;
    QPushButton *Button_AC_SC;
    QPushButton *Button_Sum_SC;
    QPushButton *Button_pi_SC;
    QPushButton *Button_log_SC;
    QPushButton *Button_RAD_DEG_SC;
    QPushButton *Button_e_SC;
    QPushButton *Button_6_SC;
    QPushButton *Button_Equal_SC;
    QPushButton *Button_cot_SC;
    QPushButton *Button_mod_SC;
    QPushButton *Button_Brackets_SC;
    QPushButton *Button_INV_SC;
    QPushButton *Button_C_SC;
    QPushButton *Button_BackSpace_SC;
    QPushButton *Button_8_SC;
    QPushButton *Button_FloatPoint_SC;
    QPushButton *Button_9_SC;
    QPushButton *Button_00_SC;
    QPushButton *Button_Multiplication_SC;
    QPushButton *Button_4_SC;
    QPushButton *Button_ln_SC;
    QPushButton *Button_3_SC;
    QPushButton *Button_0_SC;
    QPushButton *Button_2_SC;
    QPushButton *Button_sqrt_SC;
    QPushButton *Button_5_SC;
    QPushButton *Button_factorial_SC;
    QPushButton *Button_Division_SC;
    QPushButton *Button_Subtract_SC;
    QPushButton *Button_cos_SC;
    QWidget *History_Section;
    QVBoxLayout *verticalLayout_4;
    QListWidget *listHistory;
    QPushButton *Button_ClearHistory;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(697, 620);
        MainWindow->setMinimumSize(QSize(435, 600));
        actionScientific_Calculator = new QAction(MainWindow);
        actionScientific_Calculator->setObjectName("actionScientific_Calculator");
        actionFinance_Calculator = new QAction(MainWindow);
        actionFinance_Calculator->setObjectName("actionFinance_Calculator");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMouseTracking(false);
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        MainUi = new QHBoxLayout();
        MainUi->setSpacing(0);
        MainUi->setObjectName("MainUi");
        MainUi->setContentsMargins(-1, 0, -1, -1);
        Menu_Section = new QWidget(centralwidget);
        Menu_Section->setObjectName("Menu_Section");
        verticalLayout_3 = new QVBoxLayout(Menu_Section);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 3, 0);
        Calculator_Text = new QTextEdit(Menu_Section);
        Calculator_Text->setObjectName("Calculator_Text");
        Calculator_Text->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Calculator_Text->sizePolicy().hasHeightForWidth());
        Calculator_Text->setSizePolicy(sizePolicy1);
        Calculator_Text->setMinimumSize(QSize(25, 15));
        Calculator_Text->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        Calculator_Text->setFont(font);
        Calculator_Text->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        Calculator_Text->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        Calculator_Text->setReadOnly(true);
        Calculator_Text->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

        verticalLayout_3->addWidget(Calculator_Text);

        Button_Standard = new QPushButton(Menu_Section);
        Button_Standard->setObjectName("Button_Standard");
        Button_Standard->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(Button_Standard);

        Button_Scientific = new QPushButton(Menu_Section);
        Button_Scientific->setObjectName("Button_Scientific");
        Button_Scientific->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(Button_Scientific);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        Button_Style = new QPushButton(Menu_Section);
        Button_Style->setObjectName("Button_Style");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Button_Style->sizePolicy().hasHeightForWidth());
        Button_Style->setSizePolicy(sizePolicy2);
        Button_Style->setMinimumSize(QSize(100, 40));

        horizontalLayout->addWidget(Button_Style);


        verticalLayout_3->addLayout(horizontalLayout);


        MainUi->addWidget(Menu_Section);

        CalculatorSection = new QVBoxLayout();
        CalculatorSection->setObjectName("CalculatorSection");
        CalculatorSection->setContentsMargins(-1, 0, -1, -1);
        Menu_Tab_Horizontal = new QHBoxLayout();
        Menu_Tab_Horizontal->setSpacing(5);
        Menu_Tab_Horizontal->setObjectName("Menu_Tab_Horizontal");
        Menu_Tab_Horizontal->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        Menu_Tab_Horizontal->setContentsMargins(0, 3, 0, 3);
        Button_Menu = new QPushButton(centralwidget);
        Button_Menu->setObjectName("Button_Menu");
        Button_Menu->setMinimumSize(QSize(0, 40));

        Menu_Tab_Horizontal->addWidget(Button_Menu);

        Calculator_Type = new QTextEdit(centralwidget);
        Calculator_Type->setObjectName("Calculator_Type");
        Calculator_Type->setEnabled(true);
        sizePolicy2.setHeightForWidth(Calculator_Type->sizePolicy().hasHeightForWidth());
        Calculator_Type->setSizePolicy(sizePolicy2);
        Calculator_Type->setMinimumSize(QSize(100, 40));
        QFont font1;
        font1.setPointSize(36);
        font1.setBold(true);
        Calculator_Type->setFont(font1);
        Calculator_Type->setStyleSheet(QString::fromUtf8(""));
        Calculator_Type->setFrameShadow(QFrame::Shadow::Sunken);
        Calculator_Type->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        Calculator_Type->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        Calculator_Type->setReadOnly(true);
        Calculator_Type->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

        Menu_Tab_Horizontal->addWidget(Calculator_Type, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        Button_History = new QPushButton(centralwidget);
        Button_History->setObjectName("Button_History");
        Button_History->setMinimumSize(QSize(0, 40));

        Menu_Tab_Horizontal->addWidget(Button_History);


        CalculatorSection->addLayout(Menu_Tab_Horizontal);

        Input_Output_Vertical = new QVBoxLayout();
        Input_Output_Vertical->setSpacing(0);
        Input_Output_Vertical->setObjectName("Input_Output_Vertical");
        Output_Box = new QLineEdit(centralwidget);
        Output_Box->setObjectName("Output_Box");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Output_Box->sizePolicy().hasHeightForWidth());
        Output_Box->setSizePolicy(sizePolicy3);
        Output_Box->setMinimumSize(QSize(200, 60));
        Output_Box->setStyleSheet(QString::fromUtf8(""));
        Output_Box->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        Output_Box->setReadOnly(true);

        Input_Output_Vertical->addWidget(Output_Box);

        Input_Box = new QLineEdit(centralwidget);
        Input_Box->setObjectName("Input_Box");
        sizePolicy3.setHeightForWidth(Input_Box->sizePolicy().hasHeightForWidth());
        Input_Box->setSizePolicy(sizePolicy3);
        Input_Box->setMinimumSize(QSize(200, 140));
        Input_Box->setMaximumSize(QSize(16777215, 16777215));
        Input_Box->setStyleSheet(QString::fromUtf8(""));
        Input_Box->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        Input_Output_Vertical->addWidget(Input_Box);


        CalculatorSection->addLayout(Input_Output_Vertical);

        Button_Options_StackedWidget = new QStackedWidget(centralwidget);
        Button_Options_StackedWidget->setObjectName("Button_Options_StackedWidget");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Button_Options_StackedWidget->sizePolicy().hasHeightForWidth());
        Button_Options_StackedWidget->setSizePolicy(sizePolicy4);
        Button_Options_StackedWidget->setMinimumSize(QSize(0, 325));
        ST_gridButtons = new QWidget();
        ST_gridButtons->setObjectName("ST_gridButtons");
        verticalLayout_5 = new QVBoxLayout(ST_gridButtons);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(3);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        Button_4 = new QPushButton(ST_gridButtons);
        Button_4->setObjectName("Button_4");
        sizePolicy.setHeightForWidth(Button_4->sizePolicy().hasHeightForWidth());
        Button_4->setSizePolicy(sizePolicy);
        Button_4->setMinimumSize(QSize(50, 50));
        Button_4->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_4, 3, 0, 1, 1);

        Button_2 = new QPushButton(ST_gridButtons);
        Button_2->setObjectName("Button_2");
        sizePolicy.setHeightForWidth(Button_2->sizePolicy().hasHeightForWidth());
        Button_2->setSizePolicy(sizePolicy);
        Button_2->setMinimumSize(QSize(50, 50));
        Button_2->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_2, 4, 1, 1, 1);

        Button_Division = new QPushButton(ST_gridButtons);
        Button_Division->setObjectName("Button_Division");
        sizePolicy.setHeightForWidth(Button_Division->sizePolicy().hasHeightForWidth());
        Button_Division->setSizePolicy(sizePolicy);
        Button_Division->setMinimumSize(QSize(50, 50));
        Button_Division->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_Division, 1, 3, 1, 1);

        Button_1 = new QPushButton(ST_gridButtons);
        Button_1->setObjectName("Button_1");
        sizePolicy.setHeightForWidth(Button_1->sizePolicy().hasHeightForWidth());
        Button_1->setSizePolicy(sizePolicy);
        Button_1->setMinimumSize(QSize(50, 50));
        Button_1->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_1, 4, 0, 1, 1);

        Button_FloatPoint = new QPushButton(ST_gridButtons);
        Button_FloatPoint->setObjectName("Button_FloatPoint");
        sizePolicy.setHeightForWidth(Button_FloatPoint->sizePolicy().hasHeightForWidth());
        Button_FloatPoint->setSizePolicy(sizePolicy);
        Button_FloatPoint->setMinimumSize(QSize(50, 50));
        Button_FloatPoint->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_FloatPoint, 5, 2, 1, 1);

        Button_8 = new QPushButton(ST_gridButtons);
        Button_8->setObjectName("Button_8");
        sizePolicy.setHeightForWidth(Button_8->sizePolicy().hasHeightForWidth());
        Button_8->setSizePolicy(sizePolicy);
        Button_8->setMinimumSize(QSize(50, 50));
        Button_8->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_8, 2, 1, 1, 1);

        Button_Brackets = new QPushButton(ST_gridButtons);
        Button_Brackets->setObjectName("Button_Brackets");
        sizePolicy.setHeightForWidth(Button_Brackets->sizePolicy().hasHeightForWidth());
        Button_Brackets->setSizePolicy(sizePolicy);
        Button_Brackets->setMinimumSize(QSize(50, 50));
        Button_Brackets->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_Brackets, 1, 1, 1, 1);

        Button_6 = new QPushButton(ST_gridButtons);
        Button_6->setObjectName("Button_6");
        sizePolicy.setHeightForWidth(Button_6->sizePolicy().hasHeightForWidth());
        Button_6->setSizePolicy(sizePolicy);
        Button_6->setMinimumSize(QSize(50, 50));
        Button_6->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_6, 3, 2, 1, 1);

        Button_9 = new QPushButton(ST_gridButtons);
        Button_9->setObjectName("Button_9");
        sizePolicy.setHeightForWidth(Button_9->sizePolicy().hasHeightForWidth());
        Button_9->setSizePolicy(sizePolicy);
        Button_9->setMinimumSize(QSize(50, 50));
        Button_9->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_9, 2, 2, 1, 1);

        Button_00 = new QPushButton(ST_gridButtons);
        Button_00->setObjectName("Button_00");
        sizePolicy.setHeightForWidth(Button_00->sizePolicy().hasHeightForWidth());
        Button_00->setSizePolicy(sizePolicy);
        Button_00->setMinimumSize(QSize(50, 50));
        Button_00->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_00, 5, 0, 1, 1);

        Button_Subtract = new QPushButton(ST_gridButtons);
        Button_Subtract->setObjectName("Button_Subtract");
        sizePolicy.setHeightForWidth(Button_Subtract->sizePolicy().hasHeightForWidth());
        Button_Subtract->setSizePolicy(sizePolicy);
        Button_Subtract->setMinimumSize(QSize(50, 50));
        Button_Subtract->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_Subtract, 3, 3, 1, 1);

        Button_C = new QPushButton(ST_gridButtons);
        Button_C->setObjectName("Button_C");
        sizePolicy.setHeightForWidth(Button_C->sizePolicy().hasHeightForWidth());
        Button_C->setSizePolicy(sizePolicy);
        Button_C->setMinimumSize(QSize(50, 50));
        Button_C->setAutoFillBackground(false);
        Button_C->setIconSize(QSize(16, 32));

        gridLayout_2->addWidget(Button_C, 1, 0, 1, 1);

        Button_AC = new QPushButton(ST_gridButtons);
        Button_AC->setObjectName("Button_AC");
        sizePolicy.setHeightForWidth(Button_AC->sizePolicy().hasHeightForWidth());
        Button_AC->setSizePolicy(sizePolicy);
        Button_AC->setMinimumSize(QSize(50, 50));
        Button_AC->setAutoFillBackground(false);
        Button_AC->setCheckable(false);

        gridLayout_2->addWidget(Button_AC, 1, 2, 1, 1);

        Button_7 = new QPushButton(ST_gridButtons);
        Button_7->setObjectName("Button_7");
        sizePolicy.setHeightForWidth(Button_7->sizePolicy().hasHeightForWidth());
        Button_7->setSizePolicy(sizePolicy);
        Button_7->setMinimumSize(QSize(50, 50));
        Button_7->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_7, 2, 0, 1, 1);

        Button_Sum = new QPushButton(ST_gridButtons);
        Button_Sum->setObjectName("Button_Sum");
        sizePolicy.setHeightForWidth(Button_Sum->sizePolicy().hasHeightForWidth());
        Button_Sum->setSizePolicy(sizePolicy);
        Button_Sum->setMinimumSize(QSize(50, 50));
        Button_Sum->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_Sum, 4, 3, 1, 1);

        Button_BackSpace = new QPushButton(ST_gridButtons);
        Button_BackSpace->setObjectName("Button_BackSpace");
        sizePolicy.setHeightForWidth(Button_BackSpace->sizePolicy().hasHeightForWidth());
        Button_BackSpace->setSizePolicy(sizePolicy);
        Button_BackSpace->setMinimumSize(QSize(50, 50));
        Button_BackSpace->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_BackSpace, 0, 3, 1, 1);

        Button_5 = new QPushButton(ST_gridButtons);
        Button_5->setObjectName("Button_5");
        sizePolicy.setHeightForWidth(Button_5->sizePolicy().hasHeightForWidth());
        Button_5->setSizePolicy(sizePolicy);
        Button_5->setMinimumSize(QSize(50, 50));
        Button_5->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_5, 3, 1, 1, 1);

        Button_3 = new QPushButton(ST_gridButtons);
        Button_3->setObjectName("Button_3");
        sizePolicy.setHeightForWidth(Button_3->sizePolicy().hasHeightForWidth());
        Button_3->setSizePolicy(sizePolicy);
        Button_3->setMinimumSize(QSize(50, 50));
        Button_3->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_3, 4, 2, 1, 1);

        Button_0 = new QPushButton(ST_gridButtons);
        Button_0->setObjectName("Button_0");
        sizePolicy.setHeightForWidth(Button_0->sizePolicy().hasHeightForWidth());
        Button_0->setSizePolicy(sizePolicy);
        Button_0->setMinimumSize(QSize(50, 50));
        Button_0->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_0, 5, 1, 1, 1);

        Button_Equal = new QPushButton(ST_gridButtons);
        Button_Equal->setObjectName("Button_Equal");
        sizePolicy.setHeightForWidth(Button_Equal->sizePolicy().hasHeightForWidth());
        Button_Equal->setSizePolicy(sizePolicy);
        Button_Equal->setMinimumSize(QSize(50, 50));
        Button_Equal->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_Equal, 5, 3, 1, 1);

        Button_Multiplication = new QPushButton(ST_gridButtons);
        Button_Multiplication->setObjectName("Button_Multiplication");
        sizePolicy.setHeightForWidth(Button_Multiplication->sizePolicy().hasHeightForWidth());
        Button_Multiplication->setSizePolicy(sizePolicy);
        Button_Multiplication->setMinimumSize(QSize(50, 50));
        Button_Multiplication->setAutoFillBackground(false);

        gridLayout_2->addWidget(Button_Multiplication, 2, 3, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setRowStretch(2, 1);
        gridLayout_2->setRowStretch(3, 1);
        gridLayout_2->setRowStretch(4, 1);
        gridLayout_2->setRowStretch(5, 1);
        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(2, 1);
        gridLayout_2->setColumnStretch(3, 1);

        verticalLayout_5->addLayout(gridLayout_2);

        Button_Options_StackedWidget->addWidget(ST_gridButtons);
        SC_gridButtons = new QWidget();
        SC_gridButtons->setObjectName("SC_gridButtons");
        verticalLayout_6 = new QVBoxLayout(SC_gridButtons);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        Button_sin_SC = new QPushButton(SC_gridButtons);
        Button_sin_SC->setObjectName("Button_sin_SC");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(Button_sin_SC->sizePolicy().hasHeightForWidth());
        Button_sin_SC->setSizePolicy(sizePolicy5);
        Button_sin_SC->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(Button_sin_SC, 1, 1, 1, 1);

        Button_7_SC = new QPushButton(SC_gridButtons);
        Button_7_SC->setObjectName("Button_7_SC");
        sizePolicy4.setHeightForWidth(Button_7_SC->sizePolicy().hasHeightForWidth());
        Button_7_SC->setSizePolicy(sizePolicy4);
        Button_7_SC->setMinimumSize(QSize(40, 40));
        Button_7_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_7_SC, 3, 1, 1, 1);

        Button_tan_SC = new QPushButton(SC_gridButtons);
        Button_tan_SC->setObjectName("Button_tan_SC");
        sizePolicy5.setHeightForWidth(Button_tan_SC->sizePolicy().hasHeightForWidth());
        Button_tan_SC->setSizePolicy(sizePolicy5);
        Button_tan_SC->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(Button_tan_SC, 1, 3, 1, 1);

        Button_1_SC = new QPushButton(SC_gridButtons);
        Button_1_SC->setObjectName("Button_1_SC");
        sizePolicy4.setHeightForWidth(Button_1_SC->sizePolicy().hasHeightForWidth());
        Button_1_SC->setSizePolicy(sizePolicy4);
        Button_1_SC->setMinimumSize(QSize(40, 40));
        Button_1_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_1_SC, 5, 1, 1, 1);

        Button_power_SC = new QPushButton(SC_gridButtons);
        Button_power_SC->setObjectName("Button_power_SC");
        sizePolicy5.setHeightForWidth(Button_power_SC->sizePolicy().hasHeightForWidth());
        Button_power_SC->setSizePolicy(sizePolicy5);
        Button_power_SC->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(Button_power_SC, 0, 3, 1, 1);

        Button_AC_SC = new QPushButton(SC_gridButtons);
        Button_AC_SC->setObjectName("Button_AC_SC");
        sizePolicy4.setHeightForWidth(Button_AC_SC->sizePolicy().hasHeightForWidth());
        Button_AC_SC->setSizePolicy(sizePolicy4);
        Button_AC_SC->setMinimumSize(QSize(40, 40));
        Button_AC_SC->setAutoFillBackground(false);
        Button_AC_SC->setCheckable(false);

        gridLayout_3->addWidget(Button_AC_SC, 2, 3, 1, 1);

        Button_Sum_SC = new QPushButton(SC_gridButtons);
        Button_Sum_SC->setObjectName("Button_Sum_SC");
        sizePolicy4.setHeightForWidth(Button_Sum_SC->sizePolicy().hasHeightForWidth());
        Button_Sum_SC->setSizePolicy(sizePolicy4);
        Button_Sum_SC->setMinimumSize(QSize(40, 40));
        Button_Sum_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_Sum_SC, 5, 4, 1, 1);

        Button_pi_SC = new QPushButton(SC_gridButtons);
        Button_pi_SC->setObjectName("Button_pi_SC");
        sizePolicy5.setHeightForWidth(Button_pi_SC->sizePolicy().hasHeightForWidth());
        Button_pi_SC->setSizePolicy(sizePolicy5);
        Button_pi_SC->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(Button_pi_SC, 6, 0, 1, 1);

        Button_log_SC = new QPushButton(SC_gridButtons);
        Button_log_SC->setObjectName("Button_log_SC");
        sizePolicy5.setHeightForWidth(Button_log_SC->sizePolicy().hasHeightForWidth());
        Button_log_SC->setSizePolicy(sizePolicy5);
        Button_log_SC->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(Button_log_SC, 0, 2, 1, 1);

        Button_RAD_DEG_SC = new QPushButton(SC_gridButtons);
        Button_RAD_DEG_SC->setObjectName("Button_RAD_DEG_SC");
        sizePolicy5.setHeightForWidth(Button_RAD_DEG_SC->sizePolicy().hasHeightForWidth());
        Button_RAD_DEG_SC->setSizePolicy(sizePolicy5);
        Button_RAD_DEG_SC->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(Button_RAD_DEG_SC, 0, 0, 1, 1);

        Button_e_SC = new QPushButton(SC_gridButtons);
        Button_e_SC->setObjectName("Button_e_SC");
        sizePolicy5.setHeightForWidth(Button_e_SC->sizePolicy().hasHeightForWidth());
        Button_e_SC->setSizePolicy(sizePolicy5);
        Button_e_SC->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(Button_e_SC, 5, 0, 1, 1);

        Button_6_SC = new QPushButton(SC_gridButtons);
        Button_6_SC->setObjectName("Button_6_SC");
        sizePolicy4.setHeightForWidth(Button_6_SC->sizePolicy().hasHeightForWidth());
        Button_6_SC->setSizePolicy(sizePolicy4);
        Button_6_SC->setMinimumSize(QSize(40, 40));
        Button_6_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_6_SC, 4, 3, 1, 1);

        Button_Equal_SC = new QPushButton(SC_gridButtons);
        Button_Equal_SC->setObjectName("Button_Equal_SC");
        sizePolicy4.setHeightForWidth(Button_Equal_SC->sizePolicy().hasHeightForWidth());
        Button_Equal_SC->setSizePolicy(sizePolicy4);
        Button_Equal_SC->setMinimumSize(QSize(40, 40));
        Button_Equal_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_Equal_SC, 6, 4, 1, 1);

        Button_cot_SC = new QPushButton(SC_gridButtons);
        Button_cot_SC->setObjectName("Button_cot_SC");
        sizePolicy5.setHeightForWidth(Button_cot_SC->sizePolicy().hasHeightForWidth());
        Button_cot_SC->setSizePolicy(sizePolicy5);
        Button_cot_SC->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(Button_cot_SC, 1, 4, 1, 1);

        Button_mod_SC = new QPushButton(SC_gridButtons);
        Button_mod_SC->setObjectName("Button_mod_SC");
        sizePolicy5.setHeightForWidth(Button_mod_SC->sizePolicy().hasHeightForWidth());
        Button_mod_SC->setSizePolicy(sizePolicy5);
        Button_mod_SC->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(Button_mod_SC, 4, 0, 1, 1);

        Button_Brackets_SC = new QPushButton(SC_gridButtons);
        Button_Brackets_SC->setObjectName("Button_Brackets_SC");
        sizePolicy4.setHeightForWidth(Button_Brackets_SC->sizePolicy().hasHeightForWidth());
        Button_Brackets_SC->setSizePolicy(sizePolicy4);
        Button_Brackets_SC->setMinimumSize(QSize(40, 40));
        Button_Brackets_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_Brackets_SC, 2, 2, 1, 1);

        Button_INV_SC = new QPushButton(SC_gridButtons);
        Button_INV_SC->setObjectName("Button_INV_SC");
        sizePolicy5.setHeightForWidth(Button_INV_SC->sizePolicy().hasHeightForWidth());
        Button_INV_SC->setSizePolicy(sizePolicy5);
        Button_INV_SC->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(Button_INV_SC, 1, 0, 1, 1);

        Button_C_SC = new QPushButton(SC_gridButtons);
        Button_C_SC->setObjectName("Button_C_SC");
        sizePolicy4.setHeightForWidth(Button_C_SC->sizePolicy().hasHeightForWidth());
        Button_C_SC->setSizePolicy(sizePolicy4);
        Button_C_SC->setMinimumSize(QSize(40, 40));
        Button_C_SC->setAutoFillBackground(false);
        Button_C_SC->setIconSize(QSize(16, 32));

        gridLayout_3->addWidget(Button_C_SC, 2, 1, 1, 1);

        Button_BackSpace_SC = new QPushButton(SC_gridButtons);
        Button_BackSpace_SC->setObjectName("Button_BackSpace_SC");
        sizePolicy4.setHeightForWidth(Button_BackSpace_SC->sizePolicy().hasHeightForWidth());
        Button_BackSpace_SC->setSizePolicy(sizePolicy4);
        Button_BackSpace_SC->setMinimumSize(QSize(40, 40));
        Button_BackSpace_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_BackSpace_SC, 0, 4, 1, 1);

        Button_8_SC = new QPushButton(SC_gridButtons);
        Button_8_SC->setObjectName("Button_8_SC");
        sizePolicy4.setHeightForWidth(Button_8_SC->sizePolicy().hasHeightForWidth());
        Button_8_SC->setSizePolicy(sizePolicy4);
        Button_8_SC->setMinimumSize(QSize(40, 40));
        Button_8_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_8_SC, 3, 2, 1, 1);

        Button_FloatPoint_SC = new QPushButton(SC_gridButtons);
        Button_FloatPoint_SC->setObjectName("Button_FloatPoint_SC");
        sizePolicy4.setHeightForWidth(Button_FloatPoint_SC->sizePolicy().hasHeightForWidth());
        Button_FloatPoint_SC->setSizePolicy(sizePolicy4);
        Button_FloatPoint_SC->setMinimumSize(QSize(40, 40));
        Button_FloatPoint_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_FloatPoint_SC, 6, 3, 1, 1);

        Button_9_SC = new QPushButton(SC_gridButtons);
        Button_9_SC->setObjectName("Button_9_SC");
        sizePolicy4.setHeightForWidth(Button_9_SC->sizePolicy().hasHeightForWidth());
        Button_9_SC->setSizePolicy(sizePolicy4);
        Button_9_SC->setMinimumSize(QSize(40, 40));
        Button_9_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_9_SC, 3, 3, 1, 1);

        Button_00_SC = new QPushButton(SC_gridButtons);
        Button_00_SC->setObjectName("Button_00_SC");
        sizePolicy4.setHeightForWidth(Button_00_SC->sizePolicy().hasHeightForWidth());
        Button_00_SC->setSizePolicy(sizePolicy4);
        Button_00_SC->setMinimumSize(QSize(40, 40));
        Button_00_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_00_SC, 6, 1, 1, 1);

        Button_Multiplication_SC = new QPushButton(SC_gridButtons);
        Button_Multiplication_SC->setObjectName("Button_Multiplication_SC");
        sizePolicy4.setHeightForWidth(Button_Multiplication_SC->sizePolicy().hasHeightForWidth());
        Button_Multiplication_SC->setSizePolicy(sizePolicy4);
        Button_Multiplication_SC->setMinimumSize(QSize(40, 40));
        Button_Multiplication_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_Multiplication_SC, 3, 4, 1, 1);

        Button_4_SC = new QPushButton(SC_gridButtons);
        Button_4_SC->setObjectName("Button_4_SC");
        sizePolicy4.setHeightForWidth(Button_4_SC->sizePolicy().hasHeightForWidth());
        Button_4_SC->setSizePolicy(sizePolicy4);
        Button_4_SC->setMinimumSize(QSize(40, 40));
        Button_4_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_4_SC, 4, 1, 1, 1);

        Button_ln_SC = new QPushButton(SC_gridButtons);
        Button_ln_SC->setObjectName("Button_ln_SC");
        sizePolicy5.setHeightForWidth(Button_ln_SC->sizePolicy().hasHeightForWidth());
        Button_ln_SC->setSizePolicy(sizePolicy5);
        Button_ln_SC->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(Button_ln_SC, 0, 1, 1, 1);

        Button_3_SC = new QPushButton(SC_gridButtons);
        Button_3_SC->setObjectName("Button_3_SC");
        sizePolicy4.setHeightForWidth(Button_3_SC->sizePolicy().hasHeightForWidth());
        Button_3_SC->setSizePolicy(sizePolicy4);
        Button_3_SC->setMinimumSize(QSize(40, 40));
        Button_3_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_3_SC, 5, 3, 1, 1);

        Button_0_SC = new QPushButton(SC_gridButtons);
        Button_0_SC->setObjectName("Button_0_SC");
        sizePolicy4.setHeightForWidth(Button_0_SC->sizePolicy().hasHeightForWidth());
        Button_0_SC->setSizePolicy(sizePolicy4);
        Button_0_SC->setMinimumSize(QSize(40, 40));
        Button_0_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_0_SC, 6, 2, 1, 1);

        Button_2_SC = new QPushButton(SC_gridButtons);
        Button_2_SC->setObjectName("Button_2_SC");
        sizePolicy4.setHeightForWidth(Button_2_SC->sizePolicy().hasHeightForWidth());
        Button_2_SC->setSizePolicy(sizePolicy4);
        Button_2_SC->setMinimumSize(QSize(40, 40));
        Button_2_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_2_SC, 5, 2, 1, 1);

        Button_sqrt_SC = new QPushButton(SC_gridButtons);
        Button_sqrt_SC->setObjectName("Button_sqrt_SC");
        sizePolicy5.setHeightForWidth(Button_sqrt_SC->sizePolicy().hasHeightForWidth());
        Button_sqrt_SC->setSizePolicy(sizePolicy5);
        Button_sqrt_SC->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(Button_sqrt_SC, 2, 0, 1, 1);

        Button_5_SC = new QPushButton(SC_gridButtons);
        Button_5_SC->setObjectName("Button_5_SC");
        sizePolicy4.setHeightForWidth(Button_5_SC->sizePolicy().hasHeightForWidth());
        Button_5_SC->setSizePolicy(sizePolicy4);
        Button_5_SC->setMinimumSize(QSize(40, 40));
        Button_5_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_5_SC, 4, 2, 1, 1);

        Button_factorial_SC = new QPushButton(SC_gridButtons);
        Button_factorial_SC->setObjectName("Button_factorial_SC");
        sizePolicy5.setHeightForWidth(Button_factorial_SC->sizePolicy().hasHeightForWidth());
        Button_factorial_SC->setSizePolicy(sizePolicy5);
        Button_factorial_SC->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(Button_factorial_SC, 3, 0, 1, 1);

        Button_Division_SC = new QPushButton(SC_gridButtons);
        Button_Division_SC->setObjectName("Button_Division_SC");
        sizePolicy4.setHeightForWidth(Button_Division_SC->sizePolicy().hasHeightForWidth());
        Button_Division_SC->setSizePolicy(sizePolicy4);
        Button_Division_SC->setMinimumSize(QSize(40, 40));
        Button_Division_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_Division_SC, 2, 4, 1, 1);

        Button_Subtract_SC = new QPushButton(SC_gridButtons);
        Button_Subtract_SC->setObjectName("Button_Subtract_SC");
        sizePolicy4.setHeightForWidth(Button_Subtract_SC->sizePolicy().hasHeightForWidth());
        Button_Subtract_SC->setSizePolicy(sizePolicy4);
        Button_Subtract_SC->setMinimumSize(QSize(40, 40));
        Button_Subtract_SC->setAutoFillBackground(false);

        gridLayout_3->addWidget(Button_Subtract_SC, 4, 4, 1, 1);

        Button_cos_SC = new QPushButton(SC_gridButtons);
        Button_cos_SC->setObjectName("Button_cos_SC");
        sizePolicy5.setHeightForWidth(Button_cos_SC->sizePolicy().hasHeightForWidth());
        Button_cos_SC->setSizePolicy(sizePolicy5);
        Button_cos_SC->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(Button_cos_SC, 1, 2, 1, 1);

        gridLayout_3->setRowStretch(0, 1);
        gridLayout_3->setRowStretch(1, 1);
        gridLayout_3->setRowStretch(2, 1);
        gridLayout_3->setRowStretch(3, 1);
        gridLayout_3->setRowStretch(4, 1);
        gridLayout_3->setRowStretch(5, 1);
        gridLayout_3->setRowStretch(6, 1);
        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 1);
        gridLayout_3->setColumnStretch(2, 1);
        gridLayout_3->setColumnStretch(3, 1);
        gridLayout_3->setColumnStretch(4, 1);

        verticalLayout_6->addLayout(gridLayout_3);

        Button_Options_StackedWidget->addWidget(SC_gridButtons);

        CalculatorSection->addWidget(Button_Options_StackedWidget);


        MainUi->addLayout(CalculatorSection);

        History_Section = new QWidget(centralwidget);
        History_Section->setObjectName("History_Section");
        History_Section->setMinimumSize(QSize(0, 0));
        verticalLayout_4 = new QVBoxLayout(History_Section);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(3, 0, 0, 0);
        listHistory = new QListWidget(History_Section);
        listHistory->setObjectName("listHistory");

        verticalLayout_4->addWidget(listHistory);

        Button_ClearHistory = new QPushButton(History_Section);
        Button_ClearHistory->setObjectName("Button_ClearHistory");

        verticalLayout_4->addWidget(Button_ClearHistory);


        MainUi->addWidget(History_Section);


        verticalLayout_2->addLayout(MainUi);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        Button_Options_StackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionScientific_Calculator->setText(QCoreApplication::translate("MainWindow", "Scientific Calculator", nullptr));
        actionFinance_Calculator->setText(QCoreApplication::translate("MainWindow", "Finance Calculator", nullptr));
        Calculator_Text->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Calculators</span></p></body></html>", nullptr));
        Button_Standard->setText(QCoreApplication::translate("MainWindow", "Standard", nullptr));
        Button_Scientific->setText(QCoreApplication::translate("MainWindow", "Scientific", nullptr));
        Button_Style->setText(QCoreApplication::translate("MainWindow", "Light", nullptr));
        Button_Menu->setText(QString());
        Calculator_Type->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:36pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">Standard</span></p></body></html>", nullptr));
        Button_History->setText(QString());
        Button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button_Division->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button_FloatPoint->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button_Brackets->setText(QCoreApplication::translate("MainWindow", "( )", nullptr));
        Button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Button_00->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        Button_Subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Button_C->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        Button_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        Button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button_Sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Button_BackSpace->setText(QString());
        Button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Button_Equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Button_Multiplication->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Button_sin_SC->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        Button_7_SC->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button_tan_SC->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        Button_1_SC->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button_power_SC->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        Button_AC_SC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        Button_Sum_SC->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Button_pi_SC->setText(QCoreApplication::translate("MainWindow", "\317\200", nullptr));
        Button_log_SC->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        Button_RAD_DEG_SC->setText(QCoreApplication::translate("MainWindow", "RAD", nullptr));
        Button_e_SC->setText(QCoreApplication::translate("MainWindow", "e", nullptr));
        Button_6_SC->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button_Equal_SC->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Button_cot_SC->setText(QCoreApplication::translate("MainWindow", "cot", nullptr));
        Button_mod_SC->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        Button_Brackets_SC->setText(QCoreApplication::translate("MainWindow", "( )", nullptr));
        Button_INV_SC->setText(QCoreApplication::translate("MainWindow", "INV", nullptr));
        Button_C_SC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        Button_BackSpace_SC->setText(QString());
        Button_8_SC->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button_FloatPoint_SC->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Button_9_SC->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Button_00_SC->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        Button_Multiplication_SC->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Button_4_SC->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button_ln_SC->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        Button_3_SC->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button_0_SC->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Button_2_SC->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button_sqrt_SC->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        Button_5_SC->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button_factorial_SC->setText(QCoreApplication::translate("MainWindow", "!", nullptr));
        Button_Division_SC->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Button_Subtract_SC->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Button_cos_SC->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        Button_ClearHistory->setText(QCoreApplication::translate("MainWindow", "Clear History", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

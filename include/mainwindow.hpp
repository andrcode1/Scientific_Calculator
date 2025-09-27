#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPropertyAnimation>
#include <qlistwidget.h>
#include <QPushButton>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    int bracketCounter;
    int Rad_Deg_Counter;
    int INV_Counter;
    bool menuVisible;
    bool historyVisible;
private slots:
    void OutputTextButtons_clicked();
    void OutputTextButtons_withBrackets_clicked();
    void on_Button_BackSpace_clicked();
    void on_Button_C_clicked();
    void on_Button_AC_clicked();
    void on_Button_Brackets_clicked();
    void on_Button_Equal_clicked();
    void on_Button_Menu_clicked();
    void on_Button_History_clicked();
    void on_Button_ClearHistory_clicked();
    void listHistory_itemClicked(QListWidgetItem *item);
    void on_Button_Scientific_clicked();
    void on_Button_Standard_clicked();
    void on_Button_RAD_DEG_SC_clicked();
    void on_Button_INV_SC_clicked();
    void on_Button_Style_clicked();

private:
    Ui::MainWindow *ui;
    QPropertyAnimation *menuAnimation, *historyAnimation;
    QList<QPushButton*> ST_Style_Number_or_Operator_Buttons;
    QList<QPushButton*> SC_Style_Number_or_Operator_Buttons;
};
#endif // MAINWINDOW_H

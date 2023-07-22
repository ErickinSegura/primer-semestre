#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QGroupBox;
class QLabel;
class QLineEdit;
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    void OnSearch();


    ~MainWindow();

private:
    std::string search;
    Ui::MainWindow *ui;
    QGroupBox *finderBox;
    QLineEdit *searchBar;
};
#endif // MAINWINDOW_H

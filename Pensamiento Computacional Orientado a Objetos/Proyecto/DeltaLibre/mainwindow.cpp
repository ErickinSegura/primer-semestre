#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setWindowTitle(tr("WallText"));
    ui->setupUi(this);
}

void MainWindow::OnSearch()
{
    search=searchBar->text().toStdString();
}

MainWindow::~MainWindow()
{
    delete ui;
}


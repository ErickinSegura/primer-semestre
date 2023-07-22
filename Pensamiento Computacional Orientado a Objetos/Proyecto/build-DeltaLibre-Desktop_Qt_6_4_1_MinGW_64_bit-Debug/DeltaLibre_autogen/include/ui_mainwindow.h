/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *MainTitle;
    QGraphicsView *graphicsView;
    QListView *carritoLista;
    QLabel *carritoLabel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *searchBar;
    QGroupBox *finderBox;
    QPushButton *ordenarBoton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(1189, 648);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush1(QColor(160, 160, 160, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        QBrush brush2(QColor(105, 105, 105, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("VCR OSD Mono")});
        font1.setPointSize(8);
        centralwidget->setFont(font1);
        MainTitle = new QLabel(centralwidget);
        MainTitle->setObjectName("MainTitle");
        MainTitle->setGeometry(QRect(20, 0, 471, 91));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("VCR OSD Mono")});
        font2.setPointSize(36);
        MainTitle->setFont(font2);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(-10, 0, 1201, 91));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        QPalette palette1;
        QBrush brush4(QColor(47, 255, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush5(QColor(240, 240, 240, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        graphicsView->setPalette(palette1);
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        carritoLista = new QListView(centralwidget);
        carritoLista->setObjectName("carritoLista");
        carritoLista->setGeometry(QRect(790, 170, 341, 351));
        QPalette palette2;
        QBrush brush6(QColor(212, 212, 212, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        carritoLista->setPalette(palette2);
        carritoLista->setItemAlignment(Qt::AlignLeading);
        carritoLabel = new QLabel(centralwidget);
        carritoLabel->setObjectName("carritoLabel");
        carritoLabel->setGeometry(QRect(790, 100, 341, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("VCR OSD Mono")});
        font3.setPointSize(28);
        carritoLabel->setFont(font3);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(40, 110, 631, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        searchBar = new QLineEdit(horizontalLayoutWidget);
        searchBar->setObjectName("searchBar");
        searchBar->setToolTipDuration(-1);
        searchBar->setClearButtonEnabled(true);

        horizontalLayout_3->addWidget(searchBar);

        finderBox = new QGroupBox(centralwidget);
        finderBox->setObjectName("finderBox");
        finderBox->setGeometry(QRect(40, 180, 631, 411));
        ordenarBoton = new QPushButton(centralwidget);
        ordenarBoton->setObjectName("ordenarBoton");
        ordenarBoton->setGeometry(QRect(870, 580, 171, 51));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush7(QColor(28, 139, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush);
        QBrush brush8(QColor(227, 227, 227, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush5);
        QBrush brush9(QColor(245, 245, 245, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        QBrush brush10(QColor(0, 120, 215, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        ordenarBoton->setPalette(palette3);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("address-book-new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        ordenarBoton->setIcon(icon);
        MainWindow->setCentralWidget(centralwidget);
        graphicsView->raise();
        MainTitle->raise();
        carritoLista->raise();
        carritoLabel->raise();
        horizontalLayoutWidget->raise();
        finderBox->raise();
        ordenarBoton->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MainTitle->setText(QCoreApplication::translate("MainWindow", "WallText", nullptr));
        carritoLabel->setText(QCoreApplication::translate("MainWindow", "Carrito", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
#if QT_CONFIG(tooltip)
        searchBar->setToolTip(QCoreApplication::translate("MainWindow", "Solo numeros", nullptr));
#endif // QT_CONFIG(tooltip)
        searchBar->setText(QString());
        finderBox->setTitle(QCoreApplication::translate("MainWindow", "Productos Encontrados", nullptr));
        ordenarBoton->setText(QCoreApplication::translate("MainWindow", "Ordenar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

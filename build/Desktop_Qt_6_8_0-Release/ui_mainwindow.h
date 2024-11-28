/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *ipLineEdit;
    QLabel *label_3;
    QLineEdit *portLineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *connectButton;
    QLabel *imageLabel;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(325, 325);
        MainWindow->setMinimumSize(QSize(325, 325));
        MainWindow->setMaximumSize(QSize(325, 325));
        MainWindow->setSizeIncrement(QSize(325, 325));
        MainWindow->setBaseSize(QSize(325, 325));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../pics/streamscreen.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ipLineEdit = new QLineEdit(centralwidget);
        ipLineEdit->setObjectName("ipLineEdit");
        ipLineEdit->setGeometry(QRect(140, 130, 141, 30));
        ipLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(45, 140, 91, 22));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        portLineEdit = new QLineEdit(centralwidget);
        portLineEdit->setObjectName("portLineEdit");
        portLineEdit->setGeometry(QRect(140, 175, 76, 30));
        portLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 180, 41, 31));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(65, 20, 196, 41));
        label_5->setStyleSheet(QString::fromUtf8("font: 600 22pt \"Noto Sans\";\n"
"color: rgb(42, 0, 255);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 60, 151, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 600 16pt \"Noto Sans\";\n"
"color: rgb(255, 255, 255);"));
        connectButton = new QPushButton(centralwidget);
        connectButton->setObjectName("connectButton");
        connectButton->setGeometry(QRect(120, 225, 90, 35));
        connectButton->setAutoFillBackground(false);
        connectButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: white;            /* Text color for contrast */\n"
"    border: none;            /* Remove border if not needed */\n"
"	border-radius: 6px;\n"
"background-color: rgb(0, 2, 131);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: blue;  /* Optional hover color */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: navy;      /* Optional pressed color */\n"
"}"));
        imageLabel = new QLabel(centralwidget);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(235, 175, 21, 26));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy);
        imageLabel->setMinimumSize(QSize(0, 0));
        imageLabel->setTextFormat(Qt::TextFormat::MarkdownText);
        imageLabel->setScaledContents(true);
        imageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        imageLabel->setOpenExternalLinks(true);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 290, 126, 25));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setTextFormat(Qt::TextFormat::RichText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setOpenExternalLinks(true);
        label->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByKeyboard|Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextBrowserInteraction|Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);
        MainWindow->setCentralWidget(centralwidget);
        ipLineEdit->raise();
        label_3->raise();
        portLineEdit->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label->raise();
        imageLabel->raise();
        connectButton->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "StreamScreenClient", nullptr));
        ipLineEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "IP Adresss:", nullptr));
        portLineEdit->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Port:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "StreamScreen", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Android Client", nullptr));
        connectButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
#if QT_CONFIG(accessibility)
        imageLabel->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        imageLabel->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<a href=\"https://beeralator.com\" style=\"color:#ffffff;\">Beeralator.com</a>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

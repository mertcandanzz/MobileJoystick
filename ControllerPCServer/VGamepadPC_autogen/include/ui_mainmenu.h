/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *startButton;
    QPushButton *settingsButton;
    QPushButton *pushButton_About;

    void setupUi(QWidget *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName("MainMenu");
        MainMenu->resize(102, 80);
        verticalLayout = new QVBoxLayout(MainMenu);
        verticalLayout->setObjectName("verticalLayout");
        startButton = new QPushButton(MainMenu);
        startButton->setObjectName("startButton");

        verticalLayout->addWidget(startButton);

        settingsButton = new QPushButton(MainMenu);
        settingsButton->setObjectName("settingsButton");

        verticalLayout->addWidget(settingsButton);

        pushButton_About = new QPushButton(MainMenu);
        pushButton_About->setObjectName("pushButton_About");

        verticalLayout->addWidget(pushButton_About);


        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QWidget *MainMenu)
    {
#if QT_CONFIG(tooltip)
        startButton->setToolTip(QCoreApplication::translate("MainMenu", "<html><head/><body><p>Attempts to start the server on the given Port.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        startButton->setText(QCoreApplication::translate("MainMenu", "Start Server", nullptr));
        settingsButton->setText(QCoreApplication::translate("MainMenu", "Preferences", nullptr));
        pushButton_About->setText(QCoreApplication::translate("MainMenu", "About", nullptr));
        (void)MainMenu;
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H

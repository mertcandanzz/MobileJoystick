/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../../../src/ui/badge.hpp"

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *versionLabel;
    QHBoxLayout *shieldLayout;
    Badge *licenseBadge;
    Badge *starsBadge;
    Badge *downloadsBadge;
    Badge *releaseBadge;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *descriptionBox;
    QSpacerItem *verticalSpacer;
    QPushButton *backButton;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName("About");
        About->resize(400, 300);
        verticalLayout = new QVBoxLayout(About);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(About);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        versionLabel = new QLabel(About);
        versionLabel->setObjectName("versionLabel");
        versionLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(versionLabel);

        shieldLayout = new QHBoxLayout();
        shieldLayout->setObjectName("shieldLayout");
        licenseBadge = new Badge(About);
        licenseBadge->setObjectName("licenseBadge");
        licenseBadge->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        shieldLayout->addWidget(licenseBadge);

        starsBadge = new Badge(About);
        starsBadge->setObjectName("starsBadge");
        starsBadge->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        shieldLayout->addWidget(starsBadge);

        downloadsBadge = new Badge(About);
        downloadsBadge->setObjectName("downloadsBadge");
        downloadsBadge->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        shieldLayout->addWidget(downloadsBadge);

        releaseBadge = new Badge(About);
        releaseBadge->setObjectName("releaseBadge");
        releaseBadge->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        shieldLayout->addWidget(releaseBadge);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        shieldLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(shieldLayout);

        descriptionBox = new QTextBrowser(About);
        descriptionBox->setObjectName("descriptionBox");
        descriptionBox->setOpenExternalLinks(true);

        verticalLayout->addWidget(descriptionBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        backButton = new QPushButton(About);
        backButton->setObjectName("backButton");

        verticalLayout->addWidget(backButton);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "Form", nullptr));
        titleLabel->setText(QCoreApplication::translate("About", "Virtual Gamepad PC Server", nullptr));
        versionLabel->setText(QCoreApplication::translate("About", "Version ???", nullptr));
        backButton->setText(QCoreApplication::translate("About", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H

/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *statusLabel;
    QWidget *IPwidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *IPList;
    QStackedWidget *QRViewer;
    QLabel *clientLabel;
    QPushButton *stopButton;

    void setupUi(QWidget *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName("Server");
        Server->resize(400, 300);
        verticalLayout = new QVBoxLayout(Server);
        verticalLayout->setObjectName("verticalLayout");
        statusLabel = new QLabel(Server);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setTextFormat(Qt::MarkdownText);
        statusLabel->setOpenExternalLinks(true);
        statusLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(statusLabel);

        IPwidget = new QWidget(Server);
        IPwidget->setObjectName("IPwidget");
        horizontalLayout = new QHBoxLayout(IPwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        IPList = new QListWidget(IPwidget);
        IPList->setObjectName("IPList");
        IPList->setFrameShape(QFrame::NoFrame);
        IPList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        IPList->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        IPList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        IPList->setProperty("showDropIndicator", QVariant(false));
        IPList->setSelectionMode(QAbstractItemView::SingleSelection);
        IPList->setSelectionBehavior(QAbstractItemView::SelectRows);
        IPList->setTextElideMode(Qt::ElideNone);

        horizontalLayout->addWidget(IPList);

        QRViewer = new QStackedWidget(IPwidget);
        QRViewer->setObjectName("QRViewer");

        horizontalLayout->addWidget(QRViewer);


        verticalLayout->addWidget(IPwidget);

        clientLabel = new QLabel(Server);
        clientLabel->setObjectName("clientLabel");
        clientLabel->setTextFormat(Qt::MarkdownText);
        clientLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(clientLabel);

        stopButton = new QPushButton(Server);
        stopButton->setObjectName("stopButton");

        verticalLayout->addWidget(stopButton);


        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QWidget *Server)
    {
        Server->setWindowTitle(QCoreApplication::translate("Server", "Server", nullptr));
        statusLabel->setText(QCoreApplication::translate("Server", "Status", nullptr));
        clientLabel->setText(QCoreApplication::translate("Server", "No device connected", nullptr));
        stopButton->setText(QCoreApplication::translate("Server", "Stop Server and Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H

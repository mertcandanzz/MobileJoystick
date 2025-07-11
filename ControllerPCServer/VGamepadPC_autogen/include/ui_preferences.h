/********************************************************************************
** Form generated from reading UI file 'preferences.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../../../src/ui/buttoninputbox.hpp"

QT_BEGIN_NAMESPACE

class Ui_Preferences
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *preferencesTabWidget;
    QWidget *generalTab;
    QVBoxLayout *generalTabLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *Pointer;
    QSlider *pointerSlider;
    QHBoxLayout *horizontalLayout_port;
    QLabel *label_port;
    QSpinBox *portSpinBox;
    QWidget *keymapTab;
    QVBoxLayout *keymapTabLayout;
    QGroupBox *profilesGroup;
    QHBoxLayout *profilesLayout;
    QComboBox *profileComboBox;
    QPushButton *newProfileButton;
    QPushButton *deleteProfileButton;
    QTabWidget *keymapTabWidget;
    QWidget *buttonsTab;
    QVBoxLayout *buttonsTabLayout;
    QGroupBox *ButtonMaps;
    QFormLayout *buttonMappingsLayout;
    QLabel *xbutton;
    ButtonInputBox *xmap;
    QLabel *ybutton;
    ButtonInputBox *ymap;
    QLabel *abutton;
    ButtonInputBox *amap;
    QLabel *bbutton;
    ButtonInputBox *bmap;
    QLabel *Lt;
    ButtonInputBox *Ltmap;
    QLabel *Rt;
    ButtonInputBox *Rtmap;
    QLabel *dup;
    ButtonInputBox *dupmap;
    QLabel *ddown;
    ButtonInputBox *ddownmap;
    QLabel *dleft;
    ButtonInputBox *dleftmap;
    QLabel *dright;
    ButtonInputBox *drightmap;
    QLabel *menu;
    ButtonInputBox *menumap;
    QLabel *view;
    ButtonInputBox *viewmap;
    QWidget *thumbsticksTab;
    QVBoxLayout *thumbsticksTabLayout;
    QGroupBox *ThumbstickMaps;
    QGridLayout *thumbstickGridLayout;
    QLabel *leftThumbLabel;
    QCheckBox *leftThumbMouseMove;
    QLabel *leftThumbUpLabel;
    ButtonInputBox *leftThumbUpMap;
    QLabel *leftThumbDownLabel;
    ButtonInputBox *leftThumbDownMap;
    QLabel *leftThumbLeftLabel;
    ButtonInputBox *leftThumbLeftMap;
    QLabel *leftThumbRightLabel;
    ButtonInputBox *leftThumbRightMap;
    QFrame *thumbstickSeparator;
    QLabel *rightThumbLabel;
    QCheckBox *rightThumbMouseMove;
    QLabel *rightThumbUpLabel;
    ButtonInputBox *rightThumbUpMap;
    QLabel *rightThumbDownLabel;
    ButtonInputBox *rightThumbDownMap;
    QLabel *rightThumbLeftLabel;
    ButtonInputBox *rightThumbLeftMap;
    QLabel *rightThumbRightLabel;
    ButtonInputBox *rightThumbRightMap;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *Preferences)
    {
        if (Preferences->objectName().isEmpty())
            Preferences->setObjectName("Preferences");
        Preferences->resize(600, 548);
        verticalLayout = new QVBoxLayout(Preferences);
        verticalLayout->setObjectName("verticalLayout");
        preferencesTabWidget = new QTabWidget(Preferences);
        preferencesTabWidget->setObjectName("preferencesTabWidget");
        preferencesTabWidget->setTabPosition(QTabWidget::TabPosition::West);
        generalTab = new QWidget();
        generalTab->setObjectName("generalTab");
        generalTabLayout = new QVBoxLayout(generalTab);
        generalTabLayout->setObjectName("generalTabLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Pointer = new QLabel(generalTab);
        Pointer->setObjectName("Pointer");

        horizontalLayout->addWidget(Pointer);

        pointerSlider = new QSlider(generalTab);
        pointerSlider->setObjectName("pointerSlider");
        pointerSlider->setMinimum(1);
        pointerSlider->setMaximum(18);
        pointerSlider->setValue(10);
        pointerSlider->setOrientation(Qt::Orientation::Horizontal);
        pointerSlider->setTickPosition(QSlider::TickPosition::TicksAbove);
        pointerSlider->setTickInterval(9);

        horizontalLayout->addWidget(pointerSlider);


        generalTabLayout->addLayout(horizontalLayout);

        horizontalLayout_port = new QHBoxLayout();
        horizontalLayout_port->setObjectName("horizontalLayout_port");
        label_port = new QLabel(generalTab);
        label_port->setObjectName("label_port");

        horizontalLayout_port->addWidget(label_port);

        portSpinBox = new QSpinBox(generalTab);
        portSpinBox->setObjectName("portSpinBox");
        portSpinBox->setMinimum(0);
        portSpinBox->setMaximum(65535);
        portSpinBox->setValue(0);

        horizontalLayout_port->addWidget(portSpinBox);


        generalTabLayout->addLayout(horizontalLayout_port);

        preferencesTabWidget->addTab(generalTab, QString());
        keymapTab = new QWidget();
        keymapTab->setObjectName("keymapTab");
        keymapTabLayout = new QVBoxLayout(keymapTab);
        keymapTabLayout->setObjectName("keymapTabLayout");
        profilesGroup = new QGroupBox(keymapTab);
        profilesGroup->setObjectName("profilesGroup");
        profilesLayout = new QHBoxLayout(profilesGroup);
        profilesLayout->setObjectName("profilesLayout");
        profileComboBox = new QComboBox(profilesGroup);
        profileComboBox->setObjectName("profileComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(profileComboBox->sizePolicy().hasHeightForWidth());
        profileComboBox->setSizePolicy(sizePolicy);

        profilesLayout->addWidget(profileComboBox);

        newProfileButton = new QPushButton(profilesGroup);
        newProfileButton->setObjectName("newProfileButton");

        profilesLayout->addWidget(newProfileButton);

        deleteProfileButton = new QPushButton(profilesGroup);
        deleteProfileButton->setObjectName("deleteProfileButton");

        profilesLayout->addWidget(deleteProfileButton);


        keymapTabLayout->addWidget(profilesGroup);

        keymapTabWidget = new QTabWidget(keymapTab);
        keymapTabWidget->setObjectName("keymapTabWidget");
        buttonsTab = new QWidget();
        buttonsTab->setObjectName("buttonsTab");
        buttonsTabLayout = new QVBoxLayout(buttonsTab);
        buttonsTabLayout->setObjectName("buttonsTabLayout");
        ButtonMaps = new QGroupBox(buttonsTab);
        ButtonMaps->setObjectName("ButtonMaps");
        buttonMappingsLayout = new QFormLayout(ButtonMaps);
        buttonMappingsLayout->setObjectName("buttonMappingsLayout");
        xbutton = new QLabel(ButtonMaps);
        xbutton->setObjectName("xbutton");

        buttonMappingsLayout->setWidget(0, QFormLayout::LabelRole, xbutton);

        xmap = new ButtonInputBox(ButtonMaps);
        xmap->setObjectName("xmap");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(xmap->sizePolicy().hasHeightForWidth());
        xmap->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        xmap->setFont(font);
        xmap->setProperty("clearButtonEnabled", QVariant(true));

        buttonMappingsLayout->setWidget(0, QFormLayout::FieldRole, xmap);

        ybutton = new QLabel(ButtonMaps);
        ybutton->setObjectName("ybutton");

        buttonMappingsLayout->setWidget(1, QFormLayout::LabelRole, ybutton);

        ymap = new ButtonInputBox(ButtonMaps);
        ymap->setObjectName("ymap");
        sizePolicy1.setHeightForWidth(ymap->sizePolicy().hasHeightForWidth());
        ymap->setSizePolicy(sizePolicy1);
        ymap->setFont(font);
        ymap->setProperty("clearButtonEnabled", QVariant(true));

        buttonMappingsLayout->setWidget(1, QFormLayout::FieldRole, ymap);

        abutton = new QLabel(ButtonMaps);
        abutton->setObjectName("abutton");

        buttonMappingsLayout->setWidget(2, QFormLayout::LabelRole, abutton);

        amap = new ButtonInputBox(ButtonMaps);
        amap->setObjectName("amap");
        sizePolicy1.setHeightForWidth(amap->sizePolicy().hasHeightForWidth());
        amap->setSizePolicy(sizePolicy1);
        amap->setFont(font);
        amap->setProperty("clearButtonEnabled", QVariant(true));

        buttonMappingsLayout->setWidget(2, QFormLayout::FieldRole, amap);

        bbutton = new QLabel(ButtonMaps);
        bbutton->setObjectName("bbutton");

        buttonMappingsLayout->setWidget(3, QFormLayout::LabelRole, bbutton);

        bmap = new ButtonInputBox(ButtonMaps);
        bmap->setObjectName("bmap");
        sizePolicy1.setHeightForWidth(bmap->sizePolicy().hasHeightForWidth());
        bmap->setSizePolicy(sizePolicy1);
        bmap->setFont(font);
        bmap->setProperty("clearButtonEnabled", QVariant(true));

        buttonMappingsLayout->setWidget(3, QFormLayout::FieldRole, bmap);

        Lt = new QLabel(ButtonMaps);
        Lt->setObjectName("Lt");

        buttonMappingsLayout->setWidget(4, QFormLayout::LabelRole, Lt);

        Ltmap = new ButtonInputBox(ButtonMaps);
        Ltmap->setObjectName("Ltmap");
        sizePolicy1.setHeightForWidth(Ltmap->sizePolicy().hasHeightForWidth());
        Ltmap->setSizePolicy(sizePolicy1);
        Ltmap->setFont(font);
        Ltmap->setProperty("clearButtonEnabled", QVariant(true));

        buttonMappingsLayout->setWidget(4, QFormLayout::FieldRole, Ltmap);

        Rt = new QLabel(ButtonMaps);
        Rt->setObjectName("Rt");

        buttonMappingsLayout->setWidget(5, QFormLayout::LabelRole, Rt);

        Rtmap = new ButtonInputBox(ButtonMaps);
        Rtmap->setObjectName("Rtmap");
        sizePolicy1.setHeightForWidth(Rtmap->sizePolicy().hasHeightForWidth());
        Rtmap->setSizePolicy(sizePolicy1);
        Rtmap->setFont(font);
        Rtmap->setProperty("clearButtonEnabled", QVariant(true));

        buttonMappingsLayout->setWidget(5, QFormLayout::FieldRole, Rtmap);

        dup = new QLabel(ButtonMaps);
        dup->setObjectName("dup");

        buttonMappingsLayout->setWidget(6, QFormLayout::LabelRole, dup);

        dupmap = new ButtonInputBox(ButtonMaps);
        dupmap->setObjectName("dupmap");
        sizePolicy1.setHeightForWidth(dupmap->sizePolicy().hasHeightForWidth());
        dupmap->setSizePolicy(sizePolicy1);
        dupmap->setFont(font);
        dupmap->setProperty("clearButtonEnabled", QVariant(true));

        buttonMappingsLayout->setWidget(6, QFormLayout::FieldRole, dupmap);

        ddown = new QLabel(ButtonMaps);
        ddown->setObjectName("ddown");

        buttonMappingsLayout->setWidget(7, QFormLayout::LabelRole, ddown);

        ddownmap = new ButtonInputBox(ButtonMaps);
        ddownmap->setObjectName("ddownmap");
        sizePolicy1.setHeightForWidth(ddownmap->sizePolicy().hasHeightForWidth());
        ddownmap->setSizePolicy(sizePolicy1);
        ddownmap->setFont(font);
        ddownmap->setProperty("clearButtonEnabled", QVariant(true));

        buttonMappingsLayout->setWidget(7, QFormLayout::FieldRole, ddownmap);

        dleft = new QLabel(ButtonMaps);
        dleft->setObjectName("dleft");

        buttonMappingsLayout->setWidget(8, QFormLayout::LabelRole, dleft);

        dleftmap = new ButtonInputBox(ButtonMaps);
        dleftmap->setObjectName("dleftmap");
        sizePolicy1.setHeightForWidth(dleftmap->sizePolicy().hasHeightForWidth());
        dleftmap->setSizePolicy(sizePolicy1);
        dleftmap->setFont(font);
        dleftmap->setProperty("clearButtonEnabled", QVariant(true));

        buttonMappingsLayout->setWidget(8, QFormLayout::FieldRole, dleftmap);

        dright = new QLabel(ButtonMaps);
        dright->setObjectName("dright");

        buttonMappingsLayout->setWidget(9, QFormLayout::LabelRole, dright);

        drightmap = new ButtonInputBox(ButtonMaps);
        drightmap->setObjectName("drightmap");
        sizePolicy1.setHeightForWidth(drightmap->sizePolicy().hasHeightForWidth());
        drightmap->setSizePolicy(sizePolicy1);
        drightmap->setFont(font);
        drightmap->setProperty("clearButtonEnabled", QVariant(true));

        buttonMappingsLayout->setWidget(9, QFormLayout::FieldRole, drightmap);

        menu = new QLabel(ButtonMaps);
        menu->setObjectName("menu");

        buttonMappingsLayout->setWidget(10, QFormLayout::LabelRole, menu);

        menumap = new ButtonInputBox(ButtonMaps);
        menumap->setObjectName("menumap");
        sizePolicy1.setHeightForWidth(menumap->sizePolicy().hasHeightForWidth());
        menumap->setSizePolicy(sizePolicy1);
        menumap->setFont(font);
        menumap->setProperty("clearButtonEnabled", QVariant(true));

        buttonMappingsLayout->setWidget(10, QFormLayout::FieldRole, menumap);

        view = new QLabel(ButtonMaps);
        view->setObjectName("view");

        buttonMappingsLayout->setWidget(11, QFormLayout::LabelRole, view);

        viewmap = new ButtonInputBox(ButtonMaps);
        viewmap->setObjectName("viewmap");
        sizePolicy1.setHeightForWidth(viewmap->sizePolicy().hasHeightForWidth());
        viewmap->setSizePolicy(sizePolicy1);
        viewmap->setFont(font);
        viewmap->setProperty("clearButtonEnabled", QVariant(true));

        buttonMappingsLayout->setWidget(11, QFormLayout::FieldRole, viewmap);


        buttonsTabLayout->addWidget(ButtonMaps);

        keymapTabWidget->addTab(buttonsTab, QString());
        thumbsticksTab = new QWidget();
        thumbsticksTab->setObjectName("thumbsticksTab");
        thumbsticksTabLayout = new QVBoxLayout(thumbsticksTab);
        thumbsticksTabLayout->setObjectName("thumbsticksTabLayout");
        ThumbstickMaps = new QGroupBox(thumbsticksTab);
        ThumbstickMaps->setObjectName("ThumbstickMaps");
        thumbstickGridLayout = new QGridLayout(ThumbstickMaps);
        thumbstickGridLayout->setObjectName("thumbstickGridLayout");
        leftThumbLabel = new QLabel(ThumbstickMaps);
        leftThumbLabel->setObjectName("leftThumbLabel");
        QFont font1;
        font1.setBold(true);
        leftThumbLabel->setFont(font1);

        thumbstickGridLayout->addWidget(leftThumbLabel, 0, 0, 1, 2);

        leftThumbMouseMove = new QCheckBox(ThumbstickMaps);
        leftThumbMouseMove->setObjectName("leftThumbMouseMove");

        thumbstickGridLayout->addWidget(leftThumbMouseMove, 0, 2, 1, 1);

        leftThumbUpLabel = new QLabel(ThumbstickMaps);
        leftThumbUpLabel->setObjectName("leftThumbUpLabel");

        thumbstickGridLayout->addWidget(leftThumbUpLabel, 1, 0, 1, 1);

        leftThumbUpMap = new ButtonInputBox(ThumbstickMaps);
        leftThumbUpMap->setObjectName("leftThumbUpMap");
        sizePolicy1.setHeightForWidth(leftThumbUpMap->sizePolicy().hasHeightForWidth());
        leftThumbUpMap->setSizePolicy(sizePolicy1);
        leftThumbUpMap->setFont(font);
        leftThumbUpMap->setProperty("clearButtonEnabled", QVariant(true));

        thumbstickGridLayout->addWidget(leftThumbUpMap, 1, 1, 1, 1);

        leftThumbDownLabel = new QLabel(ThumbstickMaps);
        leftThumbDownLabel->setObjectName("leftThumbDownLabel");

        thumbstickGridLayout->addWidget(leftThumbDownLabel, 2, 0, 1, 1);

        leftThumbDownMap = new ButtonInputBox(ThumbstickMaps);
        leftThumbDownMap->setObjectName("leftThumbDownMap");
        sizePolicy1.setHeightForWidth(leftThumbDownMap->sizePolicy().hasHeightForWidth());
        leftThumbDownMap->setSizePolicy(sizePolicy1);
        leftThumbDownMap->setFont(font);
        leftThumbDownMap->setProperty("clearButtonEnabled", QVariant(true));

        thumbstickGridLayout->addWidget(leftThumbDownMap, 2, 1, 1, 1);

        leftThumbLeftLabel = new QLabel(ThumbstickMaps);
        leftThumbLeftLabel->setObjectName("leftThumbLeftLabel");

        thumbstickGridLayout->addWidget(leftThumbLeftLabel, 3, 0, 1, 1);

        leftThumbLeftMap = new ButtonInputBox(ThumbstickMaps);
        leftThumbLeftMap->setObjectName("leftThumbLeftMap");
        sizePolicy1.setHeightForWidth(leftThumbLeftMap->sizePolicy().hasHeightForWidth());
        leftThumbLeftMap->setSizePolicy(sizePolicy1);
        leftThumbLeftMap->setFont(font);
        leftThumbLeftMap->setProperty("clearButtonEnabled", QVariant(true));

        thumbstickGridLayout->addWidget(leftThumbLeftMap, 3, 1, 1, 1);

        leftThumbRightLabel = new QLabel(ThumbstickMaps);
        leftThumbRightLabel->setObjectName("leftThumbRightLabel");

        thumbstickGridLayout->addWidget(leftThumbRightLabel, 4, 0, 1, 1);

        leftThumbRightMap = new ButtonInputBox(ThumbstickMaps);
        leftThumbRightMap->setObjectName("leftThumbRightMap");
        sizePolicy1.setHeightForWidth(leftThumbRightMap->sizePolicy().hasHeightForWidth());
        leftThumbRightMap->setSizePolicy(sizePolicy1);
        leftThumbRightMap->setFont(font);
        leftThumbRightMap->setProperty("clearButtonEnabled", QVariant(true));

        thumbstickGridLayout->addWidget(leftThumbRightMap, 4, 1, 1, 1);

        thumbstickSeparator = new QFrame(ThumbstickMaps);
        thumbstickSeparator->setObjectName("thumbstickSeparator");
        thumbstickSeparator->setFrameShape(QFrame::Shape::HLine);
        thumbstickSeparator->setFrameShadow(QFrame::Shadow::Sunken);

        thumbstickGridLayout->addWidget(thumbstickSeparator, 5, 0, 1, 3);

        rightThumbLabel = new QLabel(ThumbstickMaps);
        rightThumbLabel->setObjectName("rightThumbLabel");
        rightThumbLabel->setFont(font1);

        thumbstickGridLayout->addWidget(rightThumbLabel, 6, 0, 1, 2);

        rightThumbMouseMove = new QCheckBox(ThumbstickMaps);
        rightThumbMouseMove->setObjectName("rightThumbMouseMove");

        thumbstickGridLayout->addWidget(rightThumbMouseMove, 6, 2, 1, 1);

        rightThumbUpLabel = new QLabel(ThumbstickMaps);
        rightThumbUpLabel->setObjectName("rightThumbUpLabel");

        thumbstickGridLayout->addWidget(rightThumbUpLabel, 7, 0, 1, 1);

        rightThumbUpMap = new ButtonInputBox(ThumbstickMaps);
        rightThumbUpMap->setObjectName("rightThumbUpMap");
        sizePolicy1.setHeightForWidth(rightThumbUpMap->sizePolicy().hasHeightForWidth());
        rightThumbUpMap->setSizePolicy(sizePolicy1);
        rightThumbUpMap->setFont(font);
        rightThumbUpMap->setProperty("clearButtonEnabled", QVariant(true));

        thumbstickGridLayout->addWidget(rightThumbUpMap, 7, 1, 1, 1);

        rightThumbDownLabel = new QLabel(ThumbstickMaps);
        rightThumbDownLabel->setObjectName("rightThumbDownLabel");

        thumbstickGridLayout->addWidget(rightThumbDownLabel, 8, 0, 1, 1);

        rightThumbDownMap = new ButtonInputBox(ThumbstickMaps);
        rightThumbDownMap->setObjectName("rightThumbDownMap");
        sizePolicy1.setHeightForWidth(rightThumbDownMap->sizePolicy().hasHeightForWidth());
        rightThumbDownMap->setSizePolicy(sizePolicy1);
        rightThumbDownMap->setFont(font);
        rightThumbDownMap->setProperty("clearButtonEnabled", QVariant(true));

        thumbstickGridLayout->addWidget(rightThumbDownMap, 8, 1, 1, 1);

        rightThumbLeftLabel = new QLabel(ThumbstickMaps);
        rightThumbLeftLabel->setObjectName("rightThumbLeftLabel");

        thumbstickGridLayout->addWidget(rightThumbLeftLabel, 9, 0, 1, 1);

        rightThumbLeftMap = new ButtonInputBox(ThumbstickMaps);
        rightThumbLeftMap->setObjectName("rightThumbLeftMap");
        sizePolicy1.setHeightForWidth(rightThumbLeftMap->sizePolicy().hasHeightForWidth());
        rightThumbLeftMap->setSizePolicy(sizePolicy1);
        rightThumbLeftMap->setFont(font);
        rightThumbLeftMap->setProperty("clearButtonEnabled", QVariant(true));

        thumbstickGridLayout->addWidget(rightThumbLeftMap, 9, 1, 1, 1);

        rightThumbRightLabel = new QLabel(ThumbstickMaps);
        rightThumbRightLabel->setObjectName("rightThumbRightLabel");

        thumbstickGridLayout->addWidget(rightThumbRightLabel, 10, 0, 1, 1);

        rightThumbRightMap = new ButtonInputBox(ThumbstickMaps);
        rightThumbRightMap->setObjectName("rightThumbRightMap");
        sizePolicy1.setHeightForWidth(rightThumbRightMap->sizePolicy().hasHeightForWidth());
        rightThumbRightMap->setSizePolicy(sizePolicy1);
        rightThumbRightMap->setFont(font);
        rightThumbRightMap->setProperty("clearButtonEnabled", QVariant(true));

        thumbstickGridLayout->addWidget(rightThumbRightMap, 10, 1, 1, 1);


        thumbsticksTabLayout->addWidget(ThumbstickMaps);

        keymapTabWidget->addTab(thumbsticksTab, QString());

        keymapTabLayout->addWidget(keymapTabWidget);

        preferencesTabWidget->addTab(keymapTab, QString());

        verticalLayout->addWidget(preferencesTabWidget);

        buttonBox = new QDialogButtonBox(Preferences);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Help|QDialogButtonBox::StandardButton::Ok|QDialogButtonBox::StandardButton::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Preferences);

        preferencesTabWidget->setCurrentIndex(1);
        keymapTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Preferences);
    } // setupUi

    void retranslateUi(QWidget *Preferences)
    {
        Preferences->setWindowTitle(QCoreApplication::translate("Preferences", "Preferences", nullptr));
        Pointer->setText(QCoreApplication::translate("Preferences", "Pointer Speed", nullptr));
        label_port->setText(QCoreApplication::translate("Preferences", "Server Port:", nullptr));
#if QT_CONFIG(tooltip)
        portSpinBox->setToolTip(QCoreApplication::translate("Preferences", "Port number for the server (1024-65535). 0 means auto.", nullptr));
#endif // QT_CONFIG(tooltip)
        preferencesTabWidget->setTabText(preferencesTabWidget->indexOf(generalTab), QCoreApplication::translate("Preferences", "General", nullptr));
        profilesGroup->setTitle(QCoreApplication::translate("Preferences", "Profiles", nullptr));
        newProfileButton->setText(QCoreApplication::translate("Preferences", "New", nullptr));
        deleteProfileButton->setText(QCoreApplication::translate("Preferences", "Delete", nullptr));
        ButtonMaps->setTitle(QCoreApplication::translate("Preferences", "Button Mappings", nullptr));
        xbutton->setText(QCoreApplication::translate("Preferences", "X", nullptr));
        ybutton->setText(QCoreApplication::translate("Preferences", "Y", nullptr));
        abutton->setText(QCoreApplication::translate("Preferences", "A", nullptr));
        bbutton->setText(QCoreApplication::translate("Preferences", "B", nullptr));
        Lt->setText(QCoreApplication::translate("Preferences", "Left Shoulder", nullptr));
        Rt->setText(QCoreApplication::translate("Preferences", "Right Shoulder", nullptr));
        dup->setText(QCoreApplication::translate("Preferences", "DPad Up", nullptr));
        ddown->setText(QCoreApplication::translate("Preferences", "DPad Down", nullptr));
        dleft->setText(QCoreApplication::translate("Preferences", "DPad Left", nullptr));
        dright->setText(QCoreApplication::translate("Preferences", "DPad Right", nullptr));
        menu->setText(QCoreApplication::translate("Preferences", "Menu", nullptr));
        view->setText(QCoreApplication::translate("Preferences", "View", nullptr));
        keymapTabWidget->setTabText(keymapTabWidget->indexOf(buttonsTab), QCoreApplication::translate("Preferences", "Buttons", nullptr));
        ThumbstickMaps->setTitle(QCoreApplication::translate("Preferences", "Thumbstick Mappings", nullptr));
        leftThumbLabel->setText(QCoreApplication::translate("Preferences", "Left Thumbstick", nullptr));
        leftThumbMouseMove->setText(QCoreApplication::translate("Preferences", "Use as Mouse Movement", nullptr));
        leftThumbUpLabel->setText(QCoreApplication::translate("Preferences", "Up", nullptr));
        leftThumbDownLabel->setText(QCoreApplication::translate("Preferences", "Down", nullptr));
        leftThumbLeftLabel->setText(QCoreApplication::translate("Preferences", "Left", nullptr));
        leftThumbRightLabel->setText(QCoreApplication::translate("Preferences", "Right", nullptr));
        rightThumbLabel->setText(QCoreApplication::translate("Preferences", "Right Thumbstick", nullptr));
        rightThumbMouseMove->setText(QCoreApplication::translate("Preferences", "Use as Mouse Movement", nullptr));
        rightThumbUpLabel->setText(QCoreApplication::translate("Preferences", "Up", nullptr));
        rightThumbDownLabel->setText(QCoreApplication::translate("Preferences", "Down", nullptr));
        rightThumbLeftLabel->setText(QCoreApplication::translate("Preferences", "Left", nullptr));
        rightThumbRightLabel->setText(QCoreApplication::translate("Preferences", "Right", nullptr));
        keymapTabWidget->setTabText(keymapTabWidget->indexOf(thumbsticksTab), QCoreApplication::translate("Preferences", "Thumbsticks", nullptr));
        preferencesTabWidget->setTabText(preferencesTabWidget->indexOf(keymapTab), QCoreApplication::translate("Preferences", "Keymap", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Preferences: public Ui_Preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H

/********************************************************************************
** Form generated from reading UI file 'qt_settingsmachine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSMACHINE_H
#define UI_QT_SETTINGSMACHINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsMachine
{
public:
    QVBoxLayout *vboxLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBoxMachineType;
    QLabel *label_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxMachine;
    QPushButton *pushButtonConfigure;
    QLabel *label_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxCPU;
    QLabel *label_7;
    QComboBox *comboBoxSpeed;
    QLabel *label_4;
    QComboBox *comboBoxFPU;
    QLabel *label_5;
    QComboBox *comboBoxWaitStates;
    QLabel *label_6;
    QSpinBox *spinBoxRAM;
    QCheckBox *checkBoxDynamicRecompiler;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButtonDisabled;
    QRadioButton *radioButtonLocalTime;
    QRadioButton *radioButtonUTC;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SettingsMachine)
    {
        if (SettingsMachine->objectName().isEmpty())
            SettingsMachine->setObjectName(QString::fromUtf8("SettingsMachine"));
        SettingsMachine->resize(458, 391);
        vboxLayout = new QVBoxLayout(SettingsMachine);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(SettingsMachine);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBoxMachineType = new QComboBox(widget);
        comboBoxMachineType->setObjectName(QString::fromUtf8("comboBoxMachineType"));

        gridLayout->addWidget(comboBoxMachineType, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBoxMachine = new QComboBox(widget_3);
        comboBoxMachine->setObjectName(QString::fromUtf8("comboBoxMachine"));

        horizontalLayout_2->addWidget(comboBoxMachine);

        pushButtonConfigure = new QPushButton(widget_3);
        pushButtonConfigure->setObjectName(QString::fromUtf8("pushButtonConfigure"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonConfigure->sizePolicy().hasHeightForWidth());
        pushButtonConfigure->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButtonConfigure);


        gridLayout->addWidget(widget_3, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBoxCPU = new QComboBox(widget_2);
        comboBoxCPU->setObjectName(QString::fromUtf8("comboBoxCPU"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxCPU->sizePolicy().hasHeightForWidth());
        comboBoxCPU->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(comboBoxCPU);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_7);

        comboBoxSpeed = new QComboBox(widget_2);
        comboBoxSpeed->setObjectName(QString::fromUtf8("comboBoxSpeed"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxSpeed->sizePolicy().hasHeightForWidth());
        comboBoxSpeed->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(comboBoxSpeed);


        gridLayout->addWidget(widget_2, 2, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        comboBoxFPU = new QComboBox(widget);
        comboBoxFPU->setObjectName(QString::fromUtf8("comboBoxFPU"));

        gridLayout->addWidget(comboBoxFPU, 3, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        comboBoxWaitStates = new QComboBox(widget);
        comboBoxWaitStates->setObjectName(QString::fromUtf8("comboBoxWaitStates"));

        gridLayout->addWidget(comboBoxWaitStates, 4, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        spinBoxRAM = new QSpinBox(widget);
        spinBoxRAM->setObjectName(QString::fromUtf8("spinBoxRAM"));
        sizePolicy.setHeightForWidth(spinBoxRAM->sizePolicy().hasHeightForWidth());
        spinBoxRAM->setSizePolicy(sizePolicy);

        gridLayout->addWidget(spinBoxRAM, 5, 1, 1, 1);


        vboxLayout->addWidget(widget);

        checkBoxDynamicRecompiler = new QCheckBox(SettingsMachine);
        checkBoxDynamicRecompiler->setObjectName(QString::fromUtf8("checkBoxDynamicRecompiler"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(2);
        sizePolicy3.setHeightForWidth(checkBoxDynamicRecompiler->sizePolicy().hasHeightForWidth());
        checkBoxDynamicRecompiler->setSizePolicy(sizePolicy3);

        vboxLayout->addWidget(checkBoxDynamicRecompiler);

        groupBox = new QGroupBox(SettingsMachine);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy4);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButtonDisabled = new QRadioButton(groupBox);
        radioButtonDisabled->setObjectName(QString::fromUtf8("radioButtonDisabled"));

        verticalLayout_2->addWidget(radioButtonDisabled);

        radioButtonLocalTime = new QRadioButton(groupBox);
        radioButtonLocalTime->setObjectName(QString::fromUtf8("radioButtonLocalTime"));

        verticalLayout_2->addWidget(radioButtonLocalTime);

        radioButtonUTC = new QRadioButton(groupBox);
        radioButtonUTC->setObjectName(QString::fromUtf8("radioButtonUTC"));

        verticalLayout_2->addWidget(radioButtonUTC);


        vboxLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);


        retranslateUi(SettingsMachine);

        QMetaObject::connectSlotsByName(SettingsMachine);
    } // setupUi

    void retranslateUi(QWidget *SettingsMachine)
    {
        SettingsMachine->setWindowTitle(QCoreApplication::translate("SettingsMachine", "Form", nullptr));
        label->setText(QCoreApplication::translate("SettingsMachine", "Machine type:", nullptr));
        label_2->setText(QCoreApplication::translate("SettingsMachine", "Machine:", nullptr));
        pushButtonConfigure->setText(QCoreApplication::translate("SettingsMachine", "Configure", nullptr));
        label_3->setText(QCoreApplication::translate("SettingsMachine", "CPU type:", nullptr));
        label_7->setText(QCoreApplication::translate("SettingsMachine", "Speed:", nullptr));
        label_4->setText(QCoreApplication::translate("SettingsMachine", "FPU:", nullptr));
        label_5->setText(QCoreApplication::translate("SettingsMachine", "Wait states:", nullptr));
        label_6->setText(QCoreApplication::translate("SettingsMachine", "Memory:", nullptr));
        checkBoxDynamicRecompiler->setText(QCoreApplication::translate("SettingsMachine", "Dynamic Recompiler", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SettingsMachine", "Time synchronization", nullptr));
        radioButtonDisabled->setText(QCoreApplication::translate("SettingsMachine", "Disabled", nullptr));
        radioButtonLocalTime->setText(QCoreApplication::translate("SettingsMachine", "Enabled (local time)", nullptr));
        radioButtonUTC->setText(QCoreApplication::translate("SettingsMachine", "Enabled (UTC)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsMachine: public Ui_SettingsMachine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSMACHINE_H

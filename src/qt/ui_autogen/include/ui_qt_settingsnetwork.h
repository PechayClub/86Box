/********************************************************************************
** Form generated from reading UI file 'qt_settingsnetwork.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSNETWORK_H
#define UI_QT_SETTINGSNETWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsNetwork
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QGridLayout *gridLayout_3;
    QComboBox *comboBoxNIC1;
    QLabel *label_7;
    QComboBox *comboBoxNet1;
    QPushButton *pushButtonConf1;
    QLabel *label_2;
    QLabel *label;
    QComboBox *comboBoxIntf1;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_10;
    QComboBox *comboBoxNIC2;
    QComboBox *comboBoxNet2;
    QComboBox *comboBoxIntf2;
    QPushButton *pushButtonConf2;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QComboBox *comboBoxNet3;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *comboBoxIntf3;
    QPushButton *pushButtonConf3;
    QComboBox *comboBoxNIC3;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_4;
    QGridLayout *gridLayout_4;
    QComboBox *comboBoxNIC4;
    QPushButton *pushButtonConf4;
    QComboBox *comboBoxNet4;
    QLabel *label_15;
    QLabel *label_16;
    QComboBox *comboBoxIntf4;
    QLabel *label_14;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *SettingsNetwork)
    {
        if (SettingsNetwork->objectName().isEmpty())
            SettingsNetwork->setObjectName(QString::fromUtf8("SettingsNetwork"));
        SettingsNetwork->resize(548, 488);
        verticalLayout = new QVBoxLayout(SettingsNetwork);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(SettingsNetwork);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        gridLayout_3 = new QGridLayout(tab_1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        comboBoxNIC1 = new QComboBox(tab_1);
        comboBoxNIC1->setObjectName(QString::fromUtf8("comboBoxNIC1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxNIC1->sizePolicy().hasHeightForWidth());
        comboBoxNIC1->setSizePolicy(sizePolicy);
        comboBoxNIC1->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_3->addWidget(comboBoxNIC1, 2, 1, 1, 1);

        label_7 = new QLabel(tab_1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        comboBoxNet1 = new QComboBox(tab_1);
        comboBoxNet1->setObjectName(QString::fromUtf8("comboBoxNet1"));
        sizePolicy.setHeightForWidth(comboBoxNet1->sizePolicy().hasHeightForWidth());
        comboBoxNet1->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(comboBoxNet1, 0, 1, 1, 2);

        pushButtonConf1 = new QPushButton(tab_1);
        pushButtonConf1->setObjectName(QString::fromUtf8("pushButtonConf1"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonConf1->sizePolicy().hasHeightForWidth());
        pushButtonConf1->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(pushButtonConf1, 2, 2, 1, 1);

        label_2 = new QLabel(tab_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(tab_1);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        comboBoxIntf1 = new QComboBox(tab_1);
        comboBoxIntf1->setObjectName(QString::fromUtf8("comboBoxIntf1"));
        sizePolicy.setHeightForWidth(comboBoxIntf1->sizePolicy().hasHeightForWidth());
        comboBoxIntf1->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(comboBoxIntf1, 1, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 1, 1, 1);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        comboBoxNIC2 = new QComboBox(tab_2);
        comboBoxNIC2->setObjectName(QString::fromUtf8("comboBoxNIC2"));
        sizePolicy.setHeightForWidth(comboBoxNIC2->sizePolicy().hasHeightForWidth());
        comboBoxNIC2->setSizePolicy(sizePolicy);
        comboBoxNIC2->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(comboBoxNIC2, 2, 1, 1, 1);

        comboBoxNet2 = new QComboBox(tab_2);
        comboBoxNet2->setObjectName(QString::fromUtf8("comboBoxNet2"));
        sizePolicy.setHeightForWidth(comboBoxNet2->sizePolicy().hasHeightForWidth());
        comboBoxNet2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxNet2, 0, 1, 1, 2);

        comboBoxIntf2 = new QComboBox(tab_2);
        comboBoxIntf2->setObjectName(QString::fromUtf8("comboBoxIntf2"));
        sizePolicy.setHeightForWidth(comboBoxIntf2->sizePolicy().hasHeightForWidth());
        comboBoxIntf2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxIntf2, 1, 1, 1, 2);

        pushButtonConf2 = new QPushButton(tab_2);
        pushButtonConf2->setObjectName(QString::fromUtf8("pushButtonConf2"));

        gridLayout->addWidget(pushButtonConf2, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        comboBoxNet3 = new QComboBox(tab_3);
        comboBoxNet3->setObjectName(QString::fromUtf8("comboBoxNet3"));
        sizePolicy.setHeightForWidth(comboBoxNet3->sizePolicy().hasHeightForWidth());
        comboBoxNet3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBoxNet3, 0, 1, 1, 2);

        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        comboBoxIntf3 = new QComboBox(tab_3);
        comboBoxIntf3->setObjectName(QString::fromUtf8("comboBoxIntf3"));
        sizePolicy.setHeightForWidth(comboBoxIntf3->sizePolicy().hasHeightForWidth());
        comboBoxIntf3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBoxIntf3, 1, 1, 1, 2);

        pushButtonConf3 = new QPushButton(tab_3);
        pushButtonConf3->setObjectName(QString::fromUtf8("pushButtonConf3"));
        sizePolicy2.setHeightForWidth(pushButtonConf3->sizePolicy().hasHeightForWidth());
        pushButtonConf3->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButtonConf3, 2, 2, 1, 1);

        comboBoxNIC3 = new QComboBox(tab_3);
        comboBoxNIC3->setObjectName(QString::fromUtf8("comboBoxNIC3"));
        sizePolicy.setHeightForWidth(comboBoxNIC3->sizePolicy().hasHeightForWidth());
        comboBoxNIC3->setSizePolicy(sizePolicy);
        comboBoxNIC3->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_2->addWidget(comboBoxNIC3, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 3, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_4 = new QGridLayout(tab_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        comboBoxNIC4 = new QComboBox(tab_4);
        comboBoxNIC4->setObjectName(QString::fromUtf8("comboBoxNIC4"));
        sizePolicy.setHeightForWidth(comboBoxNIC4->sizePolicy().hasHeightForWidth());
        comboBoxNIC4->setSizePolicy(sizePolicy);
        comboBoxNIC4->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_4->addWidget(comboBoxNIC4, 2, 1, 1, 1);

        pushButtonConf4 = new QPushButton(tab_4);
        pushButtonConf4->setObjectName(QString::fromUtf8("pushButtonConf4"));
        sizePolicy2.setHeightForWidth(pushButtonConf4->sizePolicy().hasHeightForWidth());
        pushButtonConf4->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(pushButtonConf4, 2, 2, 1, 1);

        comboBoxNet4 = new QComboBox(tab_4);
        comboBoxNet4->setObjectName(QString::fromUtf8("comboBoxNet4"));
        sizePolicy.setHeightForWidth(comboBoxNet4->sizePolicy().hasHeightForWidth());
        comboBoxNet4->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(comboBoxNet4, 0, 1, 1, 2);

        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_15, 1, 0, 1, 1);

        label_16 = new QLabel(tab_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_16, 2, 0, 1, 1);

        comboBoxIntf4 = new QComboBox(tab_4);
        comboBoxIntf4->setObjectName(QString::fromUtf8("comboBoxIntf4"));
        sizePolicy.setHeightForWidth(comboBoxIntf4->sizePolicy().hasHeightForWidth());
        comboBoxIntf4->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(comboBoxIntf4, 1, 1, 1, 2);

        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_14, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 3, 1, 1, 1);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(SettingsNetwork);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsNetwork);
    } // setupUi

    void retranslateUi(QWidget *SettingsNetwork)
    {
        SettingsNetwork->setWindowTitle(QCoreApplication::translate("SettingsNetwork", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("SettingsNetwork", "Adapter", nullptr));
        pushButtonConf1->setText(QCoreApplication::translate("SettingsNetwork", "Configure", nullptr));
        label_2->setText(QCoreApplication::translate("SettingsNetwork", "Interface", nullptr));
        label->setText(QCoreApplication::translate("SettingsNetwork", "Mode", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("SettingsNetwork", "Network Card #1", nullptr));
        label_9->setText(QCoreApplication::translate("SettingsNetwork", "Interface", nullptr));
        label_8->setText(QCoreApplication::translate("SettingsNetwork", "Mode", nullptr));
        label_10->setText(QCoreApplication::translate("SettingsNetwork", "Adapter", nullptr));
        pushButtonConf2->setText(QCoreApplication::translate("SettingsNetwork", "Configure", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SettingsNetwork", "Network Card #2", nullptr));
        label_13->setText(QCoreApplication::translate("SettingsNetwork", "Adapter", nullptr));
        label_11->setText(QCoreApplication::translate("SettingsNetwork", "Mode", nullptr));
        label_12->setText(QCoreApplication::translate("SettingsNetwork", "Interface", nullptr));
        pushButtonConf3->setText(QCoreApplication::translate("SettingsNetwork", "Configure", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("SettingsNetwork", "Network Card #3", nullptr));
        pushButtonConf4->setText(QCoreApplication::translate("SettingsNetwork", "Configure", nullptr));
        label_15->setText(QCoreApplication::translate("SettingsNetwork", "Interface", nullptr));
        label_16->setText(QCoreApplication::translate("SettingsNetwork", "Adapter", nullptr));
        label_14->setText(QCoreApplication::translate("SettingsNetwork", "Mode", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("SettingsNetwork", "Network Card #4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsNetwork: public Ui_SettingsNetwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSNETWORK_H

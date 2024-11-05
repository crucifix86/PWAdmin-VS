/********************************************************************************
** Form generated from reading UI file 'dlgweaponeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGWEAPONEDITOR_H
#define UI_DLGWEAPONEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgWeaponEditor
{
public:
    QPushButton *btn_Save;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txt_prereq_level;
    QLabel *label_3;
    QLineEdit *txt_prereq_durab;
    QLabel *label_4;
    QLineEdit *txt_prereq_maxdurab;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txt_prereq_class;
    QPushButton *pushButton;
    QLabel *label_5;
    QLineEdit *txt_prereq_strength;
    QLabel *label_6;
    QLineEdit *txt_prereq_vitality;
    QLabel *label_7;
    QLineEdit *txt_prereq_agility;
    QLabel *label_8;
    QLineEdit *txt_prereq_energy;
    QLabel *txt_prereq_class_label;
    QWidget *page_2;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_class;
    QLabel *label_9;
    QLabel *txt_type_label;
    QLineEdit *txt_atkrange;
    QLabel *label_18;
    QLineEdit *txt_projectile;
    QLineEdit *txt_delay;
    QLabel *label_12;
    QLabel *txt_projectile_label;
    QPushButton *btn_projectile;
    QLabel *label_21;
    QPushButton *btn_type;
    QLabel *label_10;
    QLabel *label_15;
    QLabel *label_20;
    QLineEdit *txt_made_by;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_19;
    QLineEdit *txt_type;
    QLineEdit *txt_fdamagemax;
    QLabel *label_13;
    QLabel *label_11;
    QLineEdit *txt_mdamage;
    QLabel *txt_class_label;
    QLabel *label_17;
    QLineEdit *txt_mdamagemax;
    QLabel *txt_atkspeed_label;
    QLineEdit *txt_atkspeed;
    QLineEdit *txt_fdamage;
    QLineEdit *txt_class;
    QLineEdit *txt_atkshortrange;
    QLineEdit *txt_level;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_22;
    QComboBox *comboBox;
    QWidget *page_3;
    QGroupBox *groupBox_3;
    QLabel *label_26;
    QLineEdit *txt_slot_flag;
    QTableWidget *table_slots;
    QPushButton *btn_slot_add;
    QPushButton *btn_slot_delete;
    QPushButton *btn_addon_add_4;
    QWidget *page_4;
    QGroupBox *groupBox_4;
    QTableWidget *table_addons;
    QPushButton *btn_addon_delete;
    QPushButton *btn_addon_add;
    QPushButton *btn_addon_add_5;
    QGroupBox *groupBox_6;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *rdoParam1;
    QRadioButton *rdoParam2;
    QRadioButton *rdoParam3;
    QGroupBox *groupBox_7;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cbSoul;
    QCheckBox *cbEngraved;
    QCheckBox *cbEmbedded;
    QCheckBox *cbInherited;
    QWidget *page_5;
    QGroupBox *groupBox_5;
    QPushButton *btn_addon_delete_2;
    QPushButton *btn_addon_add_2;
    QPushButton *btn_addon_add_6;
    QCheckBox *checkBox;
    QGroupBox *groupBox_8;
    QRadioButton *rdo_1;
    QRadioButton *rdo_2;
    QRadioButton *rdo_3;
    QTableWidget *tableAddonEspiritoSagrado;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_23;
    QLineEdit *txtEspiritoSagradoId;
    QLabel *label_24;
    QLineEdit *txtEspiritoSagradoNivel;
    QLabel *label_25;
    QLineEdit *txtEspiritoSagradoPosicao;
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hlEscarlade;
    QLabel *escarlade;
    QCheckBox *e0;
    QCheckBox *e1;
    QCheckBox *e2;
    QCheckBox *e3;
    QCheckBox *e4;
    QHBoxLayout *hlVerdejante;
    QLabel *verdejante;
    QCheckBox *v0;
    QCheckBox *v1;
    QCheckBox *v2;
    QCheckBox *v3;
    QCheckBox *v4;
    QHBoxLayout *hlCeruleo;
    QLabel *ceruleo;
    QCheckBox *c0;
    QCheckBox *c1;
    QCheckBox *c2;
    QCheckBox *c3;
    QCheckBox *c4;
    QHBoxLayout *hlVioleta;
    QLabel *violeta;
    QCheckBox *vi0;
    QCheckBox *vi1;
    QCheckBox *vi2;
    QCheckBox *vi3;
    QCheckBox *vi4;
    QHBoxLayout *hlAmarelo;
    QLabel *amarelo;
    QCheckBox *a0;
    QCheckBox *a1;
    QCheckBox *a2;
    QCheckBox *a3;
    QCheckBox *a4;
    QTableWidget *tableEspiritoSagrado;
    QTableWidget *tableWidget;
    QPushButton *btn_Save_2;

    void setupUi(QDialog *DlgWeaponEditor)
    {
        if (DlgWeaponEditor->objectName().isEmpty())
            DlgWeaponEditor->setObjectName(QString::fromUtf8("DlgWeaponEditor"));
        DlgWeaponEditor->resize(789, 414);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(12, 12, 12, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(18, 18, 18, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(15, 15, 15, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(6, 6, 6, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(8, 8, 8, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        DlgWeaponEditor->setPalette(palette);
        btn_Save = new QPushButton(DlgWeaponEditor);
        btn_Save->setObjectName(QString::fromUtf8("btn_Save"));
        btn_Save->setGeometry(QRect(200, 370, 281, 30));
        btn_Save->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: {255,255,255};"));
        stackedWidget = new QStackedWidget(DlgWeaponEditor);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(190, 10, 591, 361));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 571, 341));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 30, 181, 231));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txt_prereq_level = new QLineEdit(formLayoutWidget);
        txt_prereq_level->setObjectName(QString::fromUtf8("txt_prereq_level"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txt_prereq_level);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        txt_prereq_durab = new QLineEdit(formLayoutWidget);
        txt_prereq_durab->setObjectName(QString::fromUtf8("txt_prereq_durab"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txt_prereq_durab);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        txt_prereq_maxdurab = new QLineEdit(formLayoutWidget);
        txt_prereq_maxdurab->setObjectName(QString::fromUtf8("txt_prereq_maxdurab"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txt_prereq_maxdurab);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txt_prereq_class = new QLineEdit(formLayoutWidget);
        txt_prereq_class->setObjectName(QString::fromUtf8("txt_prereq_class"));

        horizontalLayout->addWidget(txt_prereq_class);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(22, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        txt_prereq_strength = new QLineEdit(formLayoutWidget);
        txt_prereq_strength->setObjectName(QString::fromUtf8("txt_prereq_strength"));

        formLayout->setWidget(4, QFormLayout::FieldRole, txt_prereq_strength);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        txt_prereq_vitality = new QLineEdit(formLayoutWidget);
        txt_prereq_vitality->setObjectName(QString::fromUtf8("txt_prereq_vitality"));

        formLayout->setWidget(5, QFormLayout::FieldRole, txt_prereq_vitality);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        txt_prereq_agility = new QLineEdit(formLayoutWidget);
        txt_prereq_agility->setObjectName(QString::fromUtf8("txt_prereq_agility"));

        formLayout->setWidget(6, QFormLayout::FieldRole, txt_prereq_agility);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        txt_prereq_energy = new QLineEdit(formLayoutWidget);
        txt_prereq_energy->setObjectName(QString::fromUtf8("txt_prereq_energy"));

        formLayout->setWidget(7, QFormLayout::FieldRole, txt_prereq_energy);

        txt_prereq_class_label = new QLabel(groupBox);
        txt_prereq_class_label->setObjectName(QString::fromUtf8("txt_prereq_class_label"));
        txt_prereq_class_label->setGeometry(QRect(196, 118, 331, 16));
        txt_prereq_class_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 571, 351));
        gridLayoutWidget = new QWidget(groupBox_2);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 521, 306));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_class = new QPushButton(gridLayoutWidget);
        btn_class->setObjectName(QString::fromUtf8("btn_class"));
        btn_class->setMaximumSize(QSize(22, 22));
        btn_class->setIcon(icon);

        gridLayout->addWidget(btn_class, 1, 2, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        txt_type_label = new QLabel(gridLayoutWidget);
        txt_type_label->setObjectName(QString::fromUtf8("txt_type_label"));

        gridLayout->addWidget(txt_type_label, 0, 3, 1, 1);

        txt_atkrange = new QLineEdit(gridLayoutWidget);
        txt_atkrange->setObjectName(QString::fromUtf8("txt_atkrange"));
        txt_atkrange->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_atkrange, 7, 1, 1, 1);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_18, 7, 0, 1, 1);

        txt_projectile = new QLineEdit(gridLayoutWidget);
        txt_projectile->setObjectName(QString::fromUtf8("txt_projectile"));
        txt_projectile->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_projectile, 3, 1, 1, 1);

        txt_delay = new QLineEdit(gridLayoutWidget);
        txt_delay->setObjectName(QString::fromUtf8("txt_delay"));
        txt_delay->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_delay, 9, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        txt_projectile_label = new QLabel(gridLayoutWidget);
        txt_projectile_label->setObjectName(QString::fromUtf8("txt_projectile_label"));

        gridLayout->addWidget(txt_projectile_label, 3, 3, 1, 1);

        btn_projectile = new QPushButton(gridLayoutWidget);
        btn_projectile->setObjectName(QString::fromUtf8("btn_projectile"));
        btn_projectile->setMaximumSize(QSize(22, 22));
        btn_projectile->setIcon(icon);

        gridLayout->addWidget(btn_projectile, 3, 2, 1, 1);

        label_21 = new QLabel(gridLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_21, 10, 0, 1, 1);

        btn_type = new QPushButton(gridLayoutWidget);
        btn_type->setObjectName(QString::fromUtf8("btn_type"));
        btn_type->setMaximumSize(QSize(22, 22));
        btn_type->setIcon(icon);

        gridLayout->addWidget(btn_type, 0, 2, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_15, 6, 0, 1, 1);

        label_20 = new QLabel(gridLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_20, 5, 2, 1, 1);

        txt_made_by = new QLineEdit(gridLayoutWidget);
        txt_made_by->setObjectName(QString::fromUtf8("txt_made_by"));
        txt_made_by->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_made_by, 10, 1, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_16, 4, 2, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_14, 5, 0, 1, 1);

        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_19, 8, 0, 1, 1);

        txt_type = new QLineEdit(gridLayoutWidget);
        txt_type->setObjectName(QString::fromUtf8("txt_type"));
        txt_type->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_type, 0, 1, 1, 1);

        txt_fdamagemax = new QLineEdit(gridLayoutWidget);
        txt_fdamagemax->setObjectName(QString::fromUtf8("txt_fdamagemax"));
        txt_fdamagemax->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_fdamagemax, 4, 3, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_13, 4, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        txt_mdamage = new QLineEdit(gridLayoutWidget);
        txt_mdamage->setObjectName(QString::fromUtf8("txt_mdamage"));
        txt_mdamage->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_mdamage, 5, 1, 1, 1);

        txt_class_label = new QLabel(gridLayoutWidget);
        txt_class_label->setObjectName(QString::fromUtf8("txt_class_label"));

        gridLayout->addWidget(txt_class_label, 1, 3, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_17, 9, 0, 1, 1);

        txt_mdamagemax = new QLineEdit(gridLayoutWidget);
        txt_mdamagemax->setObjectName(QString::fromUtf8("txt_mdamagemax"));
        txt_mdamagemax->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_mdamagemax, 5, 3, 1, 1);

        txt_atkspeed_label = new QLabel(gridLayoutWidget);
        txt_atkspeed_label->setObjectName(QString::fromUtf8("txt_atkspeed_label"));

        gridLayout->addWidget(txt_atkspeed_label, 6, 3, 1, 1);

        txt_atkspeed = new QLineEdit(gridLayoutWidget);
        txt_atkspeed->setObjectName(QString::fromUtf8("txt_atkspeed"));
        txt_atkspeed->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_atkspeed, 6, 1, 1, 1);

        txt_fdamage = new QLineEdit(gridLayoutWidget);
        txt_fdamage->setObjectName(QString::fromUtf8("txt_fdamage"));
        txt_fdamage->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_fdamage, 4, 1, 1, 1);

        txt_class = new QLineEdit(gridLayoutWidget);
        txt_class->setObjectName(QString::fromUtf8("txt_class"));
        txt_class->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_class, 1, 1, 1, 1);

        txt_atkshortrange = new QLineEdit(gridLayoutWidget);
        txt_atkshortrange->setObjectName(QString::fromUtf8("txt_atkshortrange"));
        txt_atkshortrange->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_atkshortrange, 8, 1, 1, 1);

        txt_level = new QLineEdit(gridLayoutWidget);
        txt_level->setObjectName(QString::fromUtf8("txt_level"));
        txt_level->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_level, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_22 = new QLabel(gridLayoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_2->addWidget(label_22);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout_2, 10, 3, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 581, 141));
        groupBox_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(false);
        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(30, 20, 47, 21));
        txt_slot_flag = new QLineEdit(groupBox_3);
        txt_slot_flag->setObjectName(QString::fromUtf8("txt_slot_flag"));
        txt_slot_flag->setGeometry(QRect(80, 20, 113, 21));
        table_slots = new QTableWidget(groupBox_3);
        if (table_slots->columnCount() < 2)
            table_slots->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_slots->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_slots->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        table_slots->setObjectName(QString::fromUtf8("table_slots"));
        table_slots->setGeometry(QRect(200, 20, 339, 117));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(table_slots->sizePolicy().hasHeightForWidth());
        table_slots->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        table_slots->setFont(font);
        table_slots->setSelectionMode(QAbstractItemView::SingleSelection);
        table_slots->setSelectionBehavior(QAbstractItemView::SelectItems);
        table_slots->setGridStyle(Qt::SolidLine);
        table_slots->setCornerButtonEnabled(true);
        table_slots->horizontalHeader()->setVisible(false);
        table_slots->horizontalHeader()->setDefaultSectionSize(80);
        table_slots->horizontalHeader()->setHighlightSections(true);
        table_slots->horizontalHeader()->setStretchLastSection(true);
        table_slots->verticalHeader()->setVisible(false);
        table_slots->verticalHeader()->setDefaultSectionSize(24);
        btn_slot_add = new QPushButton(groupBox_3);
        btn_slot_add->setObjectName(QString::fromUtf8("btn_slot_add"));
        btn_slot_add->setGeometry(QRect(540, 52, 32, 32));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Add_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_slot_add->setIcon(icon1);
        btn_slot_add->setIconSize(QSize(28, 28));
        btn_slot_delete = new QPushButton(groupBox_3);
        btn_slot_delete->setObjectName(QString::fromUtf8("btn_slot_delete"));
        btn_slot_delete->setGeometry(QRect(540, 84, 32, 32));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Remove_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_slot_delete->setIcon(icon2);
        btn_slot_delete->setIconSize(QSize(28, 28));
        btn_addon_add_4 = new QPushButton(groupBox_3);
        btn_addon_add_4->setObjectName(QString::fromUtf8("btn_addon_add_4"));
        btn_addon_add_4->setGeometry(QRect(540, 20, 32, 32));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Database_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_addon_add_4->setIcon(icon3);
        btn_addon_add_4->setIconSize(QSize(28, 28));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        groupBox_4 = new QGroupBox(page_4);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 581, 341));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush9(QColor(32, 32, 32, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush10(QColor(48, 48, 48, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(40, 40, 40, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush12(QColor(21, 21, 21, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        groupBox_4->setPalette(palette1);
        table_addons = new QTableWidget(groupBox_4);
        if (table_addons->columnCount() < 5)
            table_addons->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_addons->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_addons->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_addons->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_addons->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_addons->setHorizontalHeaderItem(4, __qtablewidgetitem6);
        table_addons->setObjectName(QString::fromUtf8("table_addons"));
        table_addons->setGeometry(QRect(2, 20, 537, 271));
        sizePolicy.setHeightForWidth(table_addons->sizePolicy().hasHeightForWidth());
        table_addons->setSizePolicy(sizePolicy);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        table_addons->setPalette(palette2);
        table_addons->setFont(font);
        table_addons->setSelectionMode(QAbstractItemView::SingleSelection);
        table_addons->setSelectionBehavior(QAbstractItemView::SelectItems);
        table_addons->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        table_addons->setGridStyle(Qt::SolidLine);
        table_addons->setCornerButtonEnabled(true);
        table_addons->horizontalHeader()->setVisible(false);
        table_addons->horizontalHeader()->setCascadingSectionResizes(false);
        table_addons->horizontalHeader()->setMinimumSectionSize(35);
        table_addons->horizontalHeader()->setDefaultSectionSize(80);
        table_addons->horizontalHeader()->setHighlightSections(true);
        table_addons->horizontalHeader()->setStretchLastSection(true);
        table_addons->verticalHeader()->setVisible(false);
        table_addons->verticalHeader()->setCascadingSectionResizes(false);
        table_addons->verticalHeader()->setDefaultSectionSize(24);
        btn_addon_delete = new QPushButton(groupBox_4);
        btn_addon_delete->setObjectName(QString::fromUtf8("btn_addon_delete"));
        btn_addon_delete->setGeometry(QRect(540, 84, 32, 32));
        btn_addon_delete->setIcon(icon2);
        btn_addon_delete->setIconSize(QSize(28, 28));
        btn_addon_add = new QPushButton(groupBox_4);
        btn_addon_add->setObjectName(QString::fromUtf8("btn_addon_add"));
        btn_addon_add->setGeometry(QRect(540, 52, 32, 32));
        btn_addon_add->setIcon(icon1);
        btn_addon_add->setIconSize(QSize(28, 28));
        btn_addon_add_5 = new QPushButton(groupBox_4);
        btn_addon_add_5->setObjectName(QString::fromUtf8("btn_addon_add_5"));
        btn_addon_add_5->setGeometry(QRect(540, 20, 32, 32));
        btn_addon_add_5->setIcon(icon3);
        btn_addon_add_5->setIconSize(QSize(28, 28));
        groupBox_6 = new QGroupBox(groupBox_4);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 300, 111, 41));
        groupBox_6->setFlat(false);
        horizontalLayoutWidget_3 = new QWidget(groupBox_6);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 20, 107, 21));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        rdoParam1 = new QRadioButton(horizontalLayoutWidget_3);
        rdoParam1->setObjectName(QString::fromUtf8("rdoParam1"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush13(QColor(85, 85, 85, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        rdoParam1->setPalette(palette3);
        rdoParam1->setChecked(true);

        horizontalLayout_4->addWidget(rdoParam1);

        rdoParam2 = new QRadioButton(horizontalLayoutWidget_3);
        rdoParam2->setObjectName(QString::fromUtf8("rdoParam2"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        rdoParam2->setPalette(palette4);
        rdoParam2->setChecked(false);

        horizontalLayout_4->addWidget(rdoParam2);

        rdoParam3 = new QRadioButton(horizontalLayoutWidget_3);
        rdoParam3->setObjectName(QString::fromUtf8("rdoParam3"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        rdoParam3->setPalette(palette5);

        horizontalLayout_4->addWidget(rdoParam3);

        groupBox_7 = new QGroupBox(groupBox_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(240, 300, 301, 41));
        horizontalLayoutWidget_2 = new QWidget(groupBox_7);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 20, 282, 21));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        cbSoul = new QCheckBox(horizontalLayoutWidget_2);
        cbSoul->setObjectName(QString::fromUtf8("cbSoul"));

        horizontalLayout_3->addWidget(cbSoul);

        cbEngraved = new QCheckBox(horizontalLayoutWidget_2);
        cbEngraved->setObjectName(QString::fromUtf8("cbEngraved"));

        horizontalLayout_3->addWidget(cbEngraved);

        cbEmbedded = new QCheckBox(horizontalLayoutWidget_2);
        cbEmbedded->setObjectName(QString::fromUtf8("cbEmbedded"));

        horizontalLayout_3->addWidget(cbEmbedded);

        cbInherited = new QCheckBox(horizontalLayoutWidget_2);
        cbInherited->setObjectName(QString::fromUtf8("cbInherited"));

        horizontalLayout_3->addWidget(cbInherited);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        groupBox_5 = new QGroupBox(page_5);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 581, 341));
        btn_addon_delete_2 = new QPushButton(groupBox_5);
        btn_addon_delete_2->setObjectName(QString::fromUtf8("btn_addon_delete_2"));
        btn_addon_delete_2->setGeometry(QRect(540, 114, 32, 32));
        btn_addon_delete_2->setIcon(icon2);
        btn_addon_delete_2->setIconSize(QSize(28, 28));
        btn_addon_add_2 = new QPushButton(groupBox_5);
        btn_addon_add_2->setObjectName(QString::fromUtf8("btn_addon_add_2"));
        btn_addon_add_2->setGeometry(QRect(540, 82, 32, 32));
        btn_addon_add_2->setIcon(icon1);
        btn_addon_add_2->setIconSize(QSize(28, 28));
        btn_addon_add_6 = new QPushButton(groupBox_5);
        btn_addon_add_6->setObjectName(QString::fromUtf8("btn_addon_add_6"));
        btn_addon_add_6->setGeometry(QRect(540, 50, 32, 32));
        btn_addon_add_6->setIcon(icon3);
        btn_addon_add_6->setIconSize(QSize(28, 28));
        checkBox = new QCheckBox(groupBox_5);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 310, 72, 19));
        groupBox_8 = new QGroupBox(groupBox_5);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(140, 290, 111, 41));
        rdo_1 = new QRadioButton(groupBox_8);
        rdo_1->setObjectName(QString::fromUtf8("rdo_1"));
        rdo_1->setGeometry(QRect(0, 20, 31, 19));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        rdo_1->setPalette(palette6);
        rdo_1->setChecked(true);
        rdo_2 = new QRadioButton(groupBox_8);
        rdo_2->setObjectName(QString::fromUtf8("rdo_2"));
        rdo_2->setGeometry(QRect(40, 20, 31, 19));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        rdo_2->setPalette(palette7);
        rdo_3 = new QRadioButton(groupBox_8);
        rdo_3->setObjectName(QString::fromUtf8("rdo_3"));
        rdo_3->setGeometry(QRect(80, 20, 31, 19));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        rdo_3->setPalette(palette8);
        rdo_3->setChecked(false);
        tableAddonEspiritoSagrado = new QTableWidget(groupBox_5);
        if (tableAddonEspiritoSagrado->columnCount() < 5)
            tableAddonEspiritoSagrado->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableAddonEspiritoSagrado->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font1);
        tableAddonEspiritoSagrado->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableAddonEspiritoSagrado->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableAddonEspiritoSagrado->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableAddonEspiritoSagrado->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        tableAddonEspiritoSagrado->setObjectName(QString::fromUtf8("tableAddonEspiritoSagrado"));
        tableAddonEspiritoSagrado->setGeometry(QRect(128, 50, 411, 151));
        sizePolicy.setHeightForWidth(tableAddonEspiritoSagrado->sizePolicy().hasHeightForWidth());
        tableAddonEspiritoSagrado->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(8);
        tableAddonEspiritoSagrado->setFont(font2);
        tableAddonEspiritoSagrado->setSelectionMode(QAbstractItemView::SingleSelection);
        tableAddonEspiritoSagrado->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableAddonEspiritoSagrado->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        tableAddonEspiritoSagrado->setGridStyle(Qt::SolidLine);
        tableAddonEspiritoSagrado->setCornerButtonEnabled(true);
        tableAddonEspiritoSagrado->horizontalHeader()->setVisible(false);
        tableAddonEspiritoSagrado->horizontalHeader()->setCascadingSectionResizes(false);
        tableAddonEspiritoSagrado->horizontalHeader()->setMinimumSectionSize(50);
        tableAddonEspiritoSagrado->horizontalHeader()->setDefaultSectionSize(50);
        tableAddonEspiritoSagrado->horizontalHeader()->setHighlightSections(true);
        tableAddonEspiritoSagrado->horizontalHeader()->setStretchLastSection(true);
        tableAddonEspiritoSagrado->verticalHeader()->setVisible(false);
        tableAddonEspiritoSagrado->verticalHeader()->setCascadingSectionResizes(false);
        tableAddonEspiritoSagrado->verticalHeader()->setDefaultSectionSize(24);
        horizontalLayoutWidget = new QWidget(groupBox_5);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(130, 20, 411, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(horizontalLayoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_5->addWidget(label_23);

        txtEspiritoSagradoId = new QLineEdit(horizontalLayoutWidget);
        txtEspiritoSagradoId->setObjectName(QString::fromUtf8("txtEspiritoSagradoId"));

        horizontalLayout_5->addWidget(txtEspiritoSagradoId);

        label_24 = new QLabel(horizontalLayoutWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_5->addWidget(label_24);

        txtEspiritoSagradoNivel = new QLineEdit(horizontalLayoutWidget);
        txtEspiritoSagradoNivel->setObjectName(QString::fromUtf8("txtEspiritoSagradoNivel"));

        horizontalLayout_5->addWidget(txtEspiritoSagradoNivel);

        label_25 = new QLabel(horizontalLayoutWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_5->addWidget(label_25);

        txtEspiritoSagradoPosicao = new QLineEdit(horizontalLayoutWidget);
        txtEspiritoSagradoPosicao->setObjectName(QString::fromUtf8("txtEspiritoSagradoPosicao"));

        horizontalLayout_5->addWidget(txtEspiritoSagradoPosicao);

        widget = new QWidget(groupBox_5);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(250, 210, 311, 131));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(12, 12, 12);"));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 0, 294, 122));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        hlEscarlade = new QHBoxLayout();
        hlEscarlade->setSpacing(0);
        hlEscarlade->setObjectName(QString::fromUtf8("hlEscarlade"));
        escarlade = new QLabel(verticalLayoutWidget);
        escarlade->setObjectName(QString::fromUtf8("escarlade"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(escarlade->sizePolicy().hasHeightForWidth());
        escarlade->setSizePolicy(sizePolicy1);
        escarlade->setMinimumSize(QSize(120, 0));
        escarlade->setMaximumSize(QSize(16777215, 16777215));
        escarlade->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        hlEscarlade->addWidget(escarlade);

        e0 = new QCheckBox(verticalLayoutWidget);
        e0->setObjectName(QString::fromUtf8("e0"));
        e0->setMinimumSize(QSize(22, 22));
        e0->setMaximumSize(QSize(22, 22));
        e0->setLayoutDirection(Qt::LeftToRight);
        e0->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));
        e0->setChecked(false);

        hlEscarlade->addWidget(e0);

        e1 = new QCheckBox(verticalLayoutWidget);
        e1->setObjectName(QString::fromUtf8("e1"));
        e1->setMinimumSize(QSize(22, 22));
        e1->setMaximumSize(QSize(22, 22));
        e1->setLayoutDirection(Qt::LeftToRight);
        e1->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlEscarlade->addWidget(e1);

        e2 = new QCheckBox(verticalLayoutWidget);
        e2->setObjectName(QString::fromUtf8("e2"));
        e2->setMinimumSize(QSize(22, 22));
        e2->setMaximumSize(QSize(22, 22));
        e2->setLayoutDirection(Qt::LeftToRight);
        e2->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlEscarlade->addWidget(e2);

        e3 = new QCheckBox(verticalLayoutWidget);
        e3->setObjectName(QString::fromUtf8("e3"));
        e3->setMinimumSize(QSize(22, 22));
        e3->setMaximumSize(QSize(22, 22));
        e3->setLayoutDirection(Qt::LeftToRight);
        e3->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlEscarlade->addWidget(e3);

        e4 = new QCheckBox(verticalLayoutWidget);
        e4->setObjectName(QString::fromUtf8("e4"));
        e4->setMinimumSize(QSize(22, 22));
        e4->setMaximumSize(QSize(22, 22));
        e4->setLayoutDirection(Qt::LeftToRight);
        e4->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlEscarlade->addWidget(e4);


        verticalLayout->addLayout(hlEscarlade);

        hlVerdejante = new QHBoxLayout();
        hlVerdejante->setSpacing(0);
        hlVerdejante->setObjectName(QString::fromUtf8("hlVerdejante"));
        verdejante = new QLabel(verticalLayoutWidget);
        verdejante->setObjectName(QString::fromUtf8("verdejante"));
        verdejante->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);"));

        hlVerdejante->addWidget(verdejante);

        v0 = new QCheckBox(verticalLayoutWidget);
        v0->setObjectName(QString::fromUtf8("v0"));
        v0->setMinimumSize(QSize(22, 22));
        v0->setMaximumSize(QSize(22, 22));
        v0->setLayoutDirection(Qt::LeftToRight);
        v0->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlVerdejante->addWidget(v0);

        v1 = new QCheckBox(verticalLayoutWidget);
        v1->setObjectName(QString::fromUtf8("v1"));
        v1->setMinimumSize(QSize(22, 22));
        v1->setMaximumSize(QSize(22, 22));
        v1->setLayoutDirection(Qt::LeftToRight);
        v1->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlVerdejante->addWidget(v1);

        v2 = new QCheckBox(verticalLayoutWidget);
        v2->setObjectName(QString::fromUtf8("v2"));
        v2->setMinimumSize(QSize(22, 22));
        v2->setMaximumSize(QSize(22, 22));
        v2->setLayoutDirection(Qt::LeftToRight);
        v2->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlVerdejante->addWidget(v2);

        v3 = new QCheckBox(verticalLayoutWidget);
        v3->setObjectName(QString::fromUtf8("v3"));
        v3->setMinimumSize(QSize(22, 22));
        v3->setMaximumSize(QSize(22, 22));
        v3->setLayoutDirection(Qt::LeftToRight);
        v3->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlVerdejante->addWidget(v3);

        v4 = new QCheckBox(verticalLayoutWidget);
        v4->setObjectName(QString::fromUtf8("v4"));
        v4->setMinimumSize(QSize(22, 22));
        v4->setMaximumSize(QSize(22, 22));
        v4->setLayoutDirection(Qt::LeftToRight);
        v4->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlVerdejante->addWidget(v4);


        verticalLayout->addLayout(hlVerdejante);

        hlCeruleo = new QHBoxLayout();
        hlCeruleo->setSpacing(0);
        hlCeruleo->setObjectName(QString::fromUtf8("hlCeruleo"));
        ceruleo = new QLabel(verticalLayoutWidget);
        ceruleo->setObjectName(QString::fromUtf8("ceruleo"));
        ceruleo->setStyleSheet(QString::fromUtf8("color: rgb(0, 123, 167);"));

        hlCeruleo->addWidget(ceruleo);

        c0 = new QCheckBox(verticalLayoutWidget);
        c0->setObjectName(QString::fromUtf8("c0"));
        c0->setMinimumSize(QSize(22, 22));
        c0->setMaximumSize(QSize(22, 22));
        c0->setLayoutDirection(Qt::LeftToRight);
        c0->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlCeruleo->addWidget(c0);

        c1 = new QCheckBox(verticalLayoutWidget);
        c1->setObjectName(QString::fromUtf8("c1"));
        c1->setMinimumSize(QSize(22, 22));
        c1->setMaximumSize(QSize(22, 22));
        c1->setLayoutDirection(Qt::LeftToRight);
        c1->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlCeruleo->addWidget(c1);

        c2 = new QCheckBox(verticalLayoutWidget);
        c2->setObjectName(QString::fromUtf8("c2"));
        c2->setMinimumSize(QSize(22, 22));
        c2->setMaximumSize(QSize(22, 22));
        c2->setLayoutDirection(Qt::LeftToRight);
        c2->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlCeruleo->addWidget(c2);

        c3 = new QCheckBox(verticalLayoutWidget);
        c3->setObjectName(QString::fromUtf8("c3"));
        c3->setMinimumSize(QSize(22, 22));
        c3->setMaximumSize(QSize(22, 22));
        c3->setLayoutDirection(Qt::LeftToRight);
        c3->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlCeruleo->addWidget(c3);

        c4 = new QCheckBox(verticalLayoutWidget);
        c4->setObjectName(QString::fromUtf8("c4"));
        c4->setMinimumSize(QSize(22, 22));
        c4->setMaximumSize(QSize(22, 22));
        c4->setLayoutDirection(Qt::LeftToRight);
        c4->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlCeruleo->addWidget(c4);


        verticalLayout->addLayout(hlCeruleo);

        hlVioleta = new QHBoxLayout();
        hlVioleta->setSpacing(0);
        hlVioleta->setObjectName(QString::fromUtf8("hlVioleta"));
        violeta = new QLabel(verticalLayoutWidget);
        violeta->setObjectName(QString::fromUtf8("violeta"));
        violeta->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 255);"));

        hlVioleta->addWidget(violeta);

        vi0 = new QCheckBox(verticalLayoutWidget);
        vi0->setObjectName(QString::fromUtf8("vi0"));
        vi0->setMinimumSize(QSize(22, 22));
        vi0->setMaximumSize(QSize(22, 22));
        vi0->setLayoutDirection(Qt::LeftToRight);
        vi0->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlVioleta->addWidget(vi0);

        vi1 = new QCheckBox(verticalLayoutWidget);
        vi1->setObjectName(QString::fromUtf8("vi1"));
        vi1->setMinimumSize(QSize(22, 22));
        vi1->setMaximumSize(QSize(22, 22));
        vi1->setLayoutDirection(Qt::LeftToRight);
        vi1->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlVioleta->addWidget(vi1);

        vi2 = new QCheckBox(verticalLayoutWidget);
        vi2->setObjectName(QString::fromUtf8("vi2"));
        vi2->setMinimumSize(QSize(22, 22));
        vi2->setMaximumSize(QSize(22, 22));
        vi2->setLayoutDirection(Qt::LeftToRight);
        vi2->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlVioleta->addWidget(vi2);

        vi3 = new QCheckBox(verticalLayoutWidget);
        vi3->setObjectName(QString::fromUtf8("vi3"));
        vi3->setMinimumSize(QSize(22, 22));
        vi3->setMaximumSize(QSize(22, 22));
        vi3->setLayoutDirection(Qt::LeftToRight);
        vi3->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlVioleta->addWidget(vi3);

        vi4 = new QCheckBox(verticalLayoutWidget);
        vi4->setObjectName(QString::fromUtf8("vi4"));
        vi4->setMinimumSize(QSize(22, 22));
        vi4->setMaximumSize(QSize(22, 22));
        vi4->setLayoutDirection(Qt::LeftToRight);
        vi4->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlVioleta->addWidget(vi4);


        verticalLayout->addLayout(hlVioleta);

        hlAmarelo = new QHBoxLayout();
        hlAmarelo->setSpacing(0);
        hlAmarelo->setObjectName(QString::fromUtf8("hlAmarelo"));
        amarelo = new QLabel(verticalLayoutWidget);
        amarelo->setObjectName(QString::fromUtf8("amarelo"));
        amarelo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));

        hlAmarelo->addWidget(amarelo);

        a0 = new QCheckBox(verticalLayoutWidget);
        a0->setObjectName(QString::fromUtf8("a0"));
        a0->setMinimumSize(QSize(22, 22));
        a0->setMaximumSize(QSize(22, 22));
        a0->setLayoutDirection(Qt::LeftToRight);
        a0->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlAmarelo->addWidget(a0);

        a1 = new QCheckBox(verticalLayoutWidget);
        a1->setObjectName(QString::fromUtf8("a1"));
        a1->setMinimumSize(QSize(22, 22));
        a1->setMaximumSize(QSize(22, 22));
        a1->setLayoutDirection(Qt::LeftToRight);
        a1->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlAmarelo->addWidget(a1);

        a2 = new QCheckBox(verticalLayoutWidget);
        a2->setObjectName(QString::fromUtf8("a2"));
        a2->setMinimumSize(QSize(22, 22));
        a2->setMaximumSize(QSize(22, 22));
        a2->setLayoutDirection(Qt::LeftToRight);
        a2->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlAmarelo->addWidget(a2);

        a3 = new QCheckBox(verticalLayoutWidget);
        a3->setObjectName(QString::fromUtf8("a3"));
        a3->setMinimumSize(QSize(22, 22));
        a3->setMaximumSize(QSize(22, 22));
        a3->setLayoutDirection(Qt::LeftToRight);
        a3->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlAmarelo->addWidget(a3);

        a4 = new QCheckBox(verticalLayoutWidget);
        a4->setObjectName(QString::fromUtf8("a4"));
        a4->setMinimumSize(QSize(22, 22));
        a4->setMaximumSize(QSize(22, 22));
        a4->setLayoutDirection(Qt::LeftToRight);
        a4->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            image: url(:/Icons/star-checked.png);\n"
"        }\n"
"        QCheckBox::indicator:unchecked {\n"
"            image: url(:Icons/star-unchecked.png);\n"
"        }"));

        hlAmarelo->addWidget(a4);


        verticalLayout->addLayout(hlAmarelo);

        tableEspiritoSagrado = new QTableWidget(groupBox_5);
        if (tableEspiritoSagrado->columnCount() < 1)
            tableEspiritoSagrado->setColumnCount(1);
        QBrush brush14(QColor(255, 0, 0, 255));
        brush14.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setForeground(brush14);
        tableEspiritoSagrado->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        tableEspiritoSagrado->setObjectName(QString::fromUtf8("tableEspiritoSagrado"));
        tableEspiritoSagrado->setGeometry(QRect(5, 20, 121, 281));
        tableEspiritoSagrado->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableEspiritoSagrado->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableEspiritoSagrado->setAutoScroll(false);
        tableEspiritoSagrado->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableEspiritoSagrado->setTabKeyNavigation(false);
        tableEspiritoSagrado->setProperty("showDropIndicator", QVariant(false));
        tableEspiritoSagrado->setDragDropOverwriteMode(false);
        tableEspiritoSagrado->setAlternatingRowColors(false);
        tableEspiritoSagrado->setSelectionMode(QAbstractItemView::SingleSelection);
        tableEspiritoSagrado->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableEspiritoSagrado->setShowGrid(false);
        tableEspiritoSagrado->setGridStyle(Qt::NoPen);
        tableEspiritoSagrado->setWordWrap(false);
        tableEspiritoSagrado->setCornerButtonEnabled(false);
        tableEspiritoSagrado->horizontalHeader()->setVisible(false);
        tableEspiritoSagrado->horizontalHeader()->setCascadingSectionResizes(false);
        tableEspiritoSagrado->horizontalHeader()->setStretchLastSection(true);
        tableEspiritoSagrado->verticalHeader()->setVisible(false);
        tableEspiritoSagrado->verticalHeader()->setMinimumSectionSize(50);
        tableEspiritoSagrado->verticalHeader()->setDefaultSectionSize(50);
        tableEspiritoSagrado->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        stackedWidget->addWidget(page_5);
        tableWidget = new QTableWidget(DlgWeaponEditor);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem23);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 20, 181, 381));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setAutoScroll(false);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::NoPen);
        tableWidget->setWordWrap(false);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setMinimumSectionSize(50);
        tableWidget->verticalHeader()->setDefaultSectionSize(50);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        btn_Save_2 = new QPushButton(DlgWeaponEditor);
        btn_Save_2->setObjectName(QString::fromUtf8("btn_Save_2"));
        btn_Save_2->setGeometry(QRect(490, 370, 281, 30));
        btn_Save_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"color: {255,255,255};"));

        retranslateUi(DlgWeaponEditor);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DlgWeaponEditor);
    } // setupUi

    void retranslateUi(QDialog *DlgWeaponEditor)
    {
        DlgWeaponEditor->setWindowTitle(QApplication::translate("DlgWeaponEditor", "Editor de Armas", nullptr));
        btn_Save->setText(QApplication::translate("DlgWeaponEditor", "Salvar", nullptr));
        groupBox->setTitle(QApplication::translate("DlgWeaponEditor", "Pr\303\251-Requisitos", nullptr));
        label->setText(QApplication::translate("DlgWeaponEditor", "N\303\255vel", nullptr));
        label_3->setText(QApplication::translate("DlgWeaponEditor", "Durabilidade M\303\255nima", nullptr));
        label_4->setText(QApplication::translate("DlgWeaponEditor", "Durabilidade M\303\241xima", nullptr));
        label_2->setText(QApplication::translate("DlgWeaponEditor", "Classe", nullptr));
        pushButton->setText(QString());
        label_5->setText(QApplication::translate("DlgWeaponEditor", "For\303\247a", nullptr));
        label_6->setText(QApplication::translate("DlgWeaponEditor", "Constitui\303\247\303\243o", nullptr));
        label_7->setText(QApplication::translate("DlgWeaponEditor", "Agilidade", nullptr));
        label_8->setText(QApplication::translate("DlgWeaponEditor", "Intelig\303\252ncia", nullptr));
        txt_prereq_class_label->setText(QString());
        groupBox_2->setTitle(QApplication::translate("DlgWeaponEditor", "Informa\303\247\303\265es do item", nullptr));
        btn_class->setText(QString());
        label_9->setText(QApplication::translate("DlgWeaponEditor", "Tipo", nullptr));
        txt_type_label->setText(QApplication::translate("DlgWeaponEditor", "TextLabel", nullptr));
        label_18->setText(QApplication::translate("DlgWeaponEditor", "Alcance de Habilidade", nullptr));
        label_12->setText(QApplication::translate("DlgWeaponEditor", "Proj\303\251til", nullptr));
        txt_projectile_label->setText(QApplication::translate("DlgWeaponEditor", "TextLabel", nullptr));
        btn_projectile->setText(QString());
        label_21->setText(QApplication::translate("DlgWeaponEditor", "Criado por", nullptr));
        btn_type->setText(QString());
        label_10->setText(QApplication::translate("DlgWeaponEditor", "Classe", nullptr));
        label_15->setText(QApplication::translate("DlgWeaponEditor", "Velocidade de Ataque", nullptr));
        label_20->setText(QApplication::translate("DlgWeaponEditor", "-", nullptr));
        label_16->setText(QApplication::translate("DlgWeaponEditor", "-", nullptr));
        label_14->setText(QApplication::translate("DlgWeaponEditor", "Ataque M\303\241gico (Min - M\303\241x)", nullptr));
        label_19->setText(QApplication::translate("DlgWeaponEditor", "Alcance Corpo a Corpo", nullptr));
        label_13->setText(QApplication::translate("DlgWeaponEditor", "Ataque F\303\255sico (Min - M\303\241x)", nullptr));
        label_11->setText(QApplication::translate("DlgWeaponEditor", "N\303\255vel", nullptr));
        txt_class_label->setText(QApplication::translate("DlgWeaponEditor", "TextLabel", nullptr));
        label_17->setText(QApplication::translate("DlgWeaponEditor", "Atraso", nullptr));
        txt_atkspeed_label->setText(QApplication::translate("DlgWeaponEditor", "TextLabel", nullptr));
        label_22->setText(QApplication::translate("DlgWeaponEditor", "M\303\251todo de Cria\303\247\303\243o", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QApplication::translate("DlgWeaponEditor", "Criado", nullptr));
        comboBox->setItemText(2, QApplication::translate("DlgWeaponEditor", "Dropado", nullptr));
        comboBox->setItemText(3, QApplication::translate("DlgWeaponEditor", "Comprado", nullptr));
        comboBox->setItemText(4, QApplication::translate("DlgWeaponEditor", "Produzido", nullptr));
        comboBox->setItemText(5, QApplication::translate("DlgWeaponEditor", "Assinado", nullptr));

        groupBox_3->setTitle(QApplication::translate("DlgWeaponEditor", "Slots", nullptr));
        label_26->setText(QApplication::translate("DlgWeaponEditor", "Slot Flag", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_slots->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DlgWeaponEditor", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_slots->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DlgWeaponEditor", "Name", nullptr));
        btn_slot_add->setText(QString());
        btn_slot_delete->setText(QString());
        btn_addon_add_4->setText(QString());
        groupBox_4->setTitle(QApplication::translate("DlgWeaponEditor", "Addons", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_addons->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("DlgWeaponEditor", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_addons->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("DlgWeaponEditor", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_addons->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("DlgWeaponEditor", "Param1", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_addons->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("DlgWeaponEditor", "Param2", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table_addons->horizontalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("DlgWeaponEditor", "Param3", nullptr));
        btn_addon_delete->setText(QString());
        btn_addon_add->setText(QString());
        btn_addon_add_5->setText(QString());
        groupBox_6->setTitle(QApplication::translate("DlgWeaponEditor", "Qtde de Par\303\242metros", nullptr));
        rdoParam1->setText(QApplication::translate("DlgWeaponEditor", "1", nullptr));
        rdoParam2->setText(QApplication::translate("DlgWeaponEditor", "2", nullptr));
        rdoParam3->setText(QApplication::translate("DlgWeaponEditor", "3", nullptr));
        groupBox_7->setTitle(QApplication::translate("DlgWeaponEditor", "Tipo de Addon", nullptr));
        cbSoul->setText(QApplication::translate("DlgWeaponEditor", "Alma", nullptr));
        cbEngraved->setText(QApplication::translate("DlgWeaponEditor", "Gravura", nullptr));
        cbEmbedded->setText(QApplication::translate("DlgWeaponEditor", "Incorporado", nullptr));
        cbInherited->setText(QApplication::translate("DlgWeaponEditor", "Herdado", nullptr));
        groupBox_5->setTitle(QApplication::translate("DlgWeaponEditor", "Esp\303\255rito Sagrado", nullptr));
        btn_addon_delete_2->setText(QString());
        btn_addon_add_2->setText(QString());
        btn_addon_add_6->setText(QString());
        checkBox->setText(QApplication::translate("DlgWeaponEditor", "Ativado", nullptr));
        groupBox_8->setTitle(QApplication::translate("DlgWeaponEditor", "Qtde de Par\303\242metros", nullptr));
        rdo_1->setText(QApplication::translate("DlgWeaponEditor", "1", nullptr));
        rdo_2->setText(QApplication::translate("DlgWeaponEditor", "2", nullptr));
        rdo_3->setText(QApplication::translate("DlgWeaponEditor", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableAddonEspiritoSagrado->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("DlgWeaponEditor", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableAddonEspiritoSagrado->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("DlgWeaponEditor", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableAddonEspiritoSagrado->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("DlgWeaponEditor", "Param1", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableAddonEspiritoSagrado->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("DlgWeaponEditor", "Param2", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableAddonEspiritoSagrado->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("DlgWeaponEditor", "Param3", nullptr));
        label_23->setText(QApplication::translate("DlgWeaponEditor", "ID", nullptr));
        label_24->setText(QApplication::translate("DlgWeaponEditor", "N\303\255vel", nullptr));
        label_25->setText(QApplication::translate("DlgWeaponEditor", "Tipo", nullptr));
        escarlade->setText(QApplication::translate("DlgWeaponEditor", "Escarlade", nullptr));
        e0->setText(QString());
        e1->setText(QString());
        e2->setText(QString());
        e3->setText(QString());
        e4->setText(QString());
        verdejante->setText(QApplication::translate("DlgWeaponEditor", "Verdejante", nullptr));
        v0->setText(QString());
        v1->setText(QString());
        v2->setText(QString());
        v3->setText(QString());
        v4->setText(QString());
        ceruleo->setText(QApplication::translate("DlgWeaponEditor", "Cer\303\272leo", nullptr));
        c0->setText(QString());
        c1->setText(QString());
        c2->setText(QString());
        c3->setText(QString());
        c4->setText(QString());
        violeta->setText(QApplication::translate("DlgWeaponEditor", "Violeta", nullptr));
        vi0->setText(QString());
        vi1->setText(QString());
        vi2->setText(QString());
        vi3->setText(QString());
        vi4->setText(QString());
        amarelo->setText(QApplication::translate("DlgWeaponEditor", "Amarelo", nullptr));
        a0->setText(QString());
        a1->setText(QString());
        a2->setText(QString());
        a3->setText(QString());
        a4->setText(QString());
        QTableWidgetItem *___qtablewidgetitem12 = tableEspiritoSagrado->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("DlgWeaponEditor", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("DlgWeaponEditor", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("DlgWeaponEditor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("DlgWeaponEditor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("DlgWeaponEditor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("DlgWeaponEditor", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem18->setText(QApplication::translate("DlgWeaponEditor", "New Row", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(0, 0);
        ___qtablewidgetitem19->setText(QApplication::translate("DlgWeaponEditor", "Pr\303\251-Requisitos", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(1, 0);
        ___qtablewidgetitem20->setText(QApplication::translate("DlgWeaponEditor", "Informa\303\247\303\265es", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(2, 0);
        ___qtablewidgetitem21->setText(QApplication::translate("DlgWeaponEditor", "Slots", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(3, 0);
        ___qtablewidgetitem22->setText(QApplication::translate("DlgWeaponEditor", "Addons", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(4, 0);
        ___qtablewidgetitem23->setText(QApplication::translate("DlgWeaponEditor", "Esp\303\255rito Sagrado", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        btn_Save_2->setText(QApplication::translate("DlgWeaponEditor", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgWeaponEditor: public Ui_DlgWeaponEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGWEAPONEDITOR_H

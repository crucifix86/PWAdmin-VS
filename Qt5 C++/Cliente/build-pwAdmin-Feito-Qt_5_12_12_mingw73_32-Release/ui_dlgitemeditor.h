/********************************************************************************
** Form generated from reading UI file 'dlgitemeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGITEMEDITOR_H
#define UI_DLGITEMEDITOR_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgItemEditor
{
public:
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
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_13;
    QLineEdit *txt_prereq_strength;
    QLabel *label_14;
    QLineEdit *txt_prereq_vitality;
    QLabel *label_15;
    QLineEdit *txt_prereq_agility;
    QLabel *label_16;
    QLineEdit *txt_prereq_energy;
    QLabel *txt_prereq_class_txt;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *txt_defense;
    QLabel *label_17;
    QLabel *label_21;
    QLineEdit *txt_resistance2;
    QLineEdit *txt_mp_enhance;
    QLabel *label_20;
    QLabel *label_18;
    QLineEdit *txt_resistance0;
    QComboBox *comboBox;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *txt_resistance4;
    QLabel *label_22;
    QLineEdit *txt_made_by;
    QLineEdit *txt_armor;
    QLineEdit *txt_hp_enhance;
    QLabel *label_23;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_19;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *txt_resistance1;
    QSpacerItem *horizontalSpacer;
    QLineEdit *txt_resistance3;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_3;
    QLabel *label_26;
    QLineEdit *txt_slot_flag;
    QTableWidget *table_slots;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_addon_add_5;
    QPushButton *btn_slot_add;
    QPushButton *btn_slot_delete;
    QGroupBox *groupBox_4;
    QTableWidget *table_addons;
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
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_addon_add_6;
    QPushButton *btn_slot_add_2;
    QPushButton *btn_slot_delete_2;
    QPushButton *btnClose;
    QPushButton *btnSave;

    void setupUi(QDialog *DlgItemEditor)
    {
        if (DlgItemEditor->objectName().isEmpty())
            DlgItemEditor->setObjectName(QString::fromUtf8("DlgItemEditor"));
        DlgItemEditor->resize(1053, 550);
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
        QBrush brush5(QColor(154, 154, 154, 255));
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
        DlgItemEditor->setPalette(palette);
        groupBox = new QGroupBox(DlgItemEditor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 361, 151));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 181, 92));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(2);
        formLayout->setVerticalSpacing(0);
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
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txt_prereq_class = new QLineEdit(formLayoutWidget);
        txt_prereq_class->setObjectName(QString::fromUtf8("txt_prereq_class"));

        horizontalLayout->addWidget(txt_prereq_class);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(22, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/software_graphics_media/pencil.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        formLayoutWidget_2 = new QWidget(groupBox);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(200, 20, 151, 91));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setHorizontalSpacing(2);
        formLayout_2->setVerticalSpacing(0);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(formLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_13);

        txt_prereq_strength = new QLineEdit(formLayoutWidget_2);
        txt_prereq_strength->setObjectName(QString::fromUtf8("txt_prereq_strength"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txt_prereq_strength);

        label_14 = new QLabel(formLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_14);

        txt_prereq_vitality = new QLineEdit(formLayoutWidget_2);
        txt_prereq_vitality->setObjectName(QString::fromUtf8("txt_prereq_vitality"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, txt_prereq_vitality);

        label_15 = new QLabel(formLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_15);

        txt_prereq_agility = new QLineEdit(formLayoutWidget_2);
        txt_prereq_agility->setObjectName(QString::fromUtf8("txt_prereq_agility"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, txt_prereq_agility);

        label_16 = new QLabel(formLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_16);

        txt_prereq_energy = new QLineEdit(formLayoutWidget_2);
        txt_prereq_energy->setObjectName(QString::fromUtf8("txt_prereq_energy"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, txt_prereq_energy);

        txt_prereq_class_txt = new QLabel(groupBox);
        txt_prereq_class_txt->setObjectName(QString::fromUtf8("txt_prereq_class_txt"));
        txt_prereq_class_txt->setGeometry(QRect(10, 114, 341, 31));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txt_prereq_class_txt->sizePolicy().hasHeightForWidth());
        txt_prereq_class_txt->setSizePolicy(sizePolicy);
        txt_prereq_class_txt->setMaximumSize(QSize(1000, 1000));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        txt_prereq_class_txt->setFont(font);
        txt_prereq_class_txt->setAutoFillBackground(false);
        txt_prereq_class_txt->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));
        txt_prereq_class_txt->setTextFormat(Qt::AutoText);
        txt_prereq_class_txt->setScaledContents(false);
        txt_prereq_class_txt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        txt_prereq_class_txt->setWordWrap(true);
        txt_prereq_class_txt->setMargin(0);
        txt_prereq_class_txt->setIndent(-1);
        txt_prereq_class_txt->setOpenExternalLinks(false);
        txt_prereq_class_txt->setTextInteractionFlags(Qt::NoTextInteraction);
        groupBox_2 = new QGroupBox(DlgItemEditor);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 160, 361, 221));
        gridLayoutWidget = new QWidget(groupBox_2);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 341, 194));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        txt_defense = new QLineEdit(gridLayoutWidget);
        txt_defense->setObjectName(QString::fromUtf8("txt_defense"));
        txt_defense->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_defense, 0, 1, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_17, 0, 2, 1, 1);

        label_21 = new QLabel(gridLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_21, 4, 2, 1, 1);

        txt_resistance2 = new QLineEdit(gridLayoutWidget);
        txt_resistance2->setObjectName(QString::fromUtf8("txt_resistance2"));
        txt_resistance2->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_resistance2, 2, 3, 1, 1);

        txt_mp_enhance = new QLineEdit(gridLayoutWidget);
        txt_mp_enhance->setObjectName(QString::fromUtf8("txt_mp_enhance"));
        txt_mp_enhance->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_mp_enhance, 3, 1, 1, 1);

        label_20 = new QLabel(gridLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_20, 3, 2, 1, 1);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_18, 1, 2, 1, 1);

        txt_resistance0 = new QLineEdit(gridLayoutWidget);
        txt_resistance0->setObjectName(QString::fromUtf8("txt_resistance0"));
        txt_resistance0->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_resistance0, 0, 3, 1, 1);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(100, 0));
        comboBox->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(comboBox, 8, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        txt_resistance4 = new QLineEdit(gridLayoutWidget);
        txt_resistance4->setObjectName(QString::fromUtf8("txt_resistance4"));
        txt_resistance4->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_resistance4, 4, 3, 1, 1);

        label_22 = new QLabel(gridLayoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_22, 8, 2, 1, 1);

        txt_made_by = new QLineEdit(gridLayoutWidget);
        txt_made_by->setObjectName(QString::fromUtf8("txt_made_by"));
        txt_made_by->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_made_by, 8, 3, 1, 1);

        txt_armor = new QLineEdit(gridLayoutWidget);
        txt_armor->setObjectName(QString::fromUtf8("txt_armor"));
        txt_armor->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_armor, 1, 1, 1, 1);

        txt_hp_enhance = new QLineEdit(gridLayoutWidget);
        txt_hp_enhance->setObjectName(QString::fromUtf8("txt_hp_enhance"));
        txt_hp_enhance->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_hp_enhance, 2, 1, 1, 1);

        label_23 = new QLabel(gridLayoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_23, 8, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 6, 0, 1, 4);

        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_19, 2, 2, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        txt_resistance1 = new QLineEdit(gridLayoutWidget);
        txt_resistance1->setObjectName(QString::fromUtf8("txt_resistance1"));
        txt_resistance1->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_resistance1, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 4);

        txt_resistance3 = new QLineEdit(gridLayoutWidget);
        txt_resistance3->setObjectName(QString::fromUtf8("txt_resistance3"));
        txt_resistance3->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_resistance3, 3, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 7, 0, 1, 4);

        groupBox_3 = new QGroupBox(DlgItemEditor);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 380, 361, 161));
        groupBox_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(false);
        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(10, 20, 21, 21));
        txt_slot_flag = new QLineEdit(groupBox_3);
        txt_slot_flag->setObjectName(QString::fromUtf8("txt_slot_flag"));
        txt_slot_flag->setGeometry(QRect(32, 20, 81, 21));
        table_slots = new QTableWidget(groupBox_3);
        if (table_slots->columnCount() < 2)
            table_slots->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_slots->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_slots->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        table_slots->setObjectName(QString::fromUtf8("table_slots"));
        table_slots->setGeometry(QRect(10, 50, 311, 101));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(table_slots->sizePolicy().hasHeightForWidth());
        table_slots->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(8);
        table_slots->setFont(font1);
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
        verticalLayoutWidget = new QWidget(groupBox_3);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(320, 50, 31, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_addon_add_5 = new QPushButton(verticalLayoutWidget);
        btn_addon_add_5->setObjectName(QString::fromUtf8("btn_addon_add_5"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Database_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_addon_add_5->setIcon(icon1);
        btn_addon_add_5->setIconSize(QSize(28, 28));

        verticalLayout->addWidget(btn_addon_add_5);

        btn_slot_add = new QPushButton(verticalLayoutWidget);
        btn_slot_add->setObjectName(QString::fromUtf8("btn_slot_add"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Add_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_slot_add->setIcon(icon2);
        btn_slot_add->setIconSize(QSize(28, 28));

        verticalLayout->addWidget(btn_slot_add);

        btn_slot_delete = new QPushButton(verticalLayoutWidget);
        btn_slot_delete->setObjectName(QString::fromUtf8("btn_slot_delete"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Cancel_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_slot_delete->setIcon(icon3);
        btn_slot_delete->setIconSize(QSize(28, 28));

        verticalLayout->addWidget(btn_slot_delete);

        groupBox_4 = new QGroupBox(DlgItemEditor);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(380, 10, 651, 371));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        groupBox_4->setPalette(palette1);
        table_addons = new QTableWidget(groupBox_4);
        if (table_addons->columnCount() < 5)
            table_addons->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setText(QString::fromUtf8("ID"));
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
        table_addons->setGeometry(QRect(2, 20, 601, 271));
        sizePolicy1.setHeightForWidth(table_addons->sizePolicy().hasHeightForWidth());
        table_addons->setSizePolicy(sizePolicy1);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush9(QColor(85, 85, 85, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush9);
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
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
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
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
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
        table_addons->setFont(font1);
        table_addons->setSelectionMode(QAbstractItemView::SingleSelection);
        table_addons->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_addons->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        table_addons->setGridStyle(Qt::SolidLine);
        table_addons->setCornerButtonEnabled(true);
        table_addons->horizontalHeader()->setVisible(true);
        table_addons->horizontalHeader()->setCascadingSectionResizes(false);
        table_addons->horizontalHeader()->setMinimumSectionSize(35);
        table_addons->horizontalHeader()->setDefaultSectionSize(80);
        table_addons->horizontalHeader()->setHighlightSections(true);
        table_addons->horizontalHeader()->setStretchLastSection(true);
        table_addons->verticalHeader()->setVisible(false);
        table_addons->verticalHeader()->setCascadingSectionResizes(false);
        table_addons->verticalHeader()->setDefaultSectionSize(24);
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
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush9);
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
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
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
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
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
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush9);
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
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
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
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
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
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush9);
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
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
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
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
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
        groupBox_7->setGeometry(QRect(130, 300, 301, 41));
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

        verticalLayoutWidget_2 = new QWidget(groupBox_4);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(610, 20, 31, 91));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_addon_add_6 = new QPushButton(verticalLayoutWidget_2);
        btn_addon_add_6->setObjectName(QString::fromUtf8("btn_addon_add_6"));
        btn_addon_add_6->setIcon(icon1);
        btn_addon_add_6->setIconSize(QSize(28, 28));

        verticalLayout_2->addWidget(btn_addon_add_6);

        btn_slot_add_2 = new QPushButton(verticalLayoutWidget_2);
        btn_slot_add_2->setObjectName(QString::fromUtf8("btn_slot_add_2"));
        btn_slot_add_2->setIcon(icon2);
        btn_slot_add_2->setIconSize(QSize(28, 28));

        verticalLayout_2->addWidget(btn_slot_add_2);

        btn_slot_delete_2 = new QPushButton(verticalLayoutWidget_2);
        btn_slot_delete_2->setObjectName(QString::fromUtf8("btn_slot_delete_2"));
        btn_slot_delete_2->setIcon(icon3);
        btn_slot_delete_2->setIconSize(QSize(28, 28));

        verticalLayout_2->addWidget(btn_slot_delete_2);

        btnClose = new QPushButton(DlgItemEditor);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(940, 510, 91, 30));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush10(QColor(85, 0, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush10);
        QBrush brush11(QColor(255, 255, 255, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        QBrush brush12(QColor(255, 255, 255, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        QBrush brush13(QColor(255, 255, 255, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        btnClose->setPalette(palette6);
        btnClose->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"color: {255,255,255};"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon4);
        btnSave = new QPushButton(DlgItemEditor);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(940, 480, 91, 30));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush14(QColor(0, 85, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush14);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush14);
        QBrush brush15(QColor(255, 255, 255, 128));
        brush15.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush14);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        QBrush brush16(QColor(255, 255, 255, 128));
        brush16.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        QBrush brush17(QColor(255, 255, 255, 128));
        brush17.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        btnSave->setPalette(palette7);
        btnSave->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: {255,255,255};"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon5);

        retranslateUi(DlgItemEditor);

        QMetaObject::connectSlotsByName(DlgItemEditor);
    } // setupUi

    void retranslateUi(QDialog *DlgItemEditor)
    {
        DlgItemEditor->setWindowTitle(QApplication::translate("DlgItemEditor", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("DlgItemEditor", "Pr\303\251-requisitos", nullptr));
        label->setText(QApplication::translate("DlgItemEditor", "N\303\255vel", nullptr));
        label_3->setText(QApplication::translate("DlgItemEditor", "Durab. M\303\255n.", nullptr));
        label_4->setText(QApplication::translate("DlgItemEditor", "Durab. M\303\241x.", nullptr));
        label_2->setText(QApplication::translate("DlgItemEditor", "Classe", nullptr));
        pushButton->setText(QString());
        label_13->setText(QApplication::translate("DlgItemEditor", "For\303\247a", nullptr));
        label_14->setText(QApplication::translate("DlgItemEditor", "Constitui\303\247\303\243o", nullptr));
        label_15->setText(QApplication::translate("DlgItemEditor", "Agilidade", nullptr));
        label_16->setText(QApplication::translate("DlgItemEditor", "Intelig\303\252ncia", nullptr));
        txt_prereq_class_txt->setText(QApplication::translate("DlgItemEditor", "|", nullptr));
        groupBox_2->setTitle(QApplication::translate("DlgItemEditor", "Informa\303\247\303\265es", nullptr));
        label_17->setText(QApplication::translate("DlgItemEditor", "Def. Metal", nullptr));
        label_21->setText(QApplication::translate("DlgItemEditor", "Def. Terra", nullptr));
        label_20->setText(QApplication::translate("DlgItemEditor", "Def. Fogo", nullptr));
        label_18->setText(QApplication::translate("DlgItemEditor", "Def. Madeira", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QApplication::translate("DlgItemEditor", "Criado", nullptr));
        comboBox->setItemText(2, QApplication::translate("DlgItemEditor", "Dropado", nullptr));
        comboBox->setItemText(3, QApplication::translate("DlgItemEditor", "Comprado", nullptr));
        comboBox->setItemText(4, QApplication::translate("DlgItemEditor", "Produzido", nullptr));
        comboBox->setItemText(5, QApplication::translate("DlgItemEditor", "Assinado", nullptr));

        label_11->setText(QApplication::translate("DlgItemEditor", "HP", nullptr));
        label_12->setText(QApplication::translate("DlgItemEditor", "MP", nullptr));
        label_22->setText(QApplication::translate("DlgItemEditor", "Criado por", nullptr));
        label_23->setText(QApplication::translate("DlgItemEditor", "Tipo de Cria\303\247\303\243o", nullptr));
        label_19->setText(QApplication::translate("DlgItemEditor", "Def. \303\201gua", nullptr));
        label_9->setText(QApplication::translate("DlgItemEditor", "Def. F\303\255s.", nullptr));
        label_10->setText(QApplication::translate("DlgItemEditor", "Armadura", nullptr));
        groupBox_3->setTitle(QApplication::translate("DlgItemEditor", "Pedras", nullptr));
        label_26->setText(QApplication::translate("DlgItemEditor", "Flag", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_slots->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DlgItemEditor", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_slots->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DlgItemEditor", "Nome da Pedra", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_addon_add_5->setToolTip(QApplication::translate("DlgItemEditor", "Selecionar do elements.data", nullptr));
#endif // QT_NO_TOOLTIP
        btn_addon_add_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_slot_add->setToolTip(QApplication::translate("DlgItemEditor", "Adicionar espa\303\247o de slot", nullptr));
#endif // QT_NO_TOOLTIP
        btn_slot_add->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_slot_delete->setToolTip(QApplication::translate("DlgItemEditor", "Apagar espa\303\247o de slot", nullptr));
#endif // QT_NO_TOOLTIP
        btn_slot_delete->setText(QString());
        groupBox_4->setTitle(QApplication::translate("DlgItemEditor", "Addons", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_addons->horizontalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("DlgItemEditor", "Nome do Addon", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_addons->horizontalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("DlgItemEditor", "Param1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_addons->horizontalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("DlgItemEditor", "Param2", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_addons->horizontalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("DlgItemEditor", "Param3", nullptr));
        groupBox_6->setTitle(QApplication::translate("DlgItemEditor", "Qtde de Par\303\242metros", nullptr));
        rdoParam1->setText(QApplication::translate("DlgItemEditor", "1", nullptr));
        rdoParam2->setText(QApplication::translate("DlgItemEditor", "2", nullptr));
        rdoParam3->setText(QApplication::translate("DlgItemEditor", "3", nullptr));
        groupBox_7->setTitle(QApplication::translate("DlgItemEditor", "Tipo de Addon", nullptr));
        cbSoul->setText(QApplication::translate("DlgItemEditor", "Alma", nullptr));
        cbEngraved->setText(QApplication::translate("DlgItemEditor", "Gravura", nullptr));
        cbEmbedded->setText(QApplication::translate("DlgItemEditor", "Incorporado", nullptr));
        cbInherited->setText(QApplication::translate("DlgItemEditor", "Herdado", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_addon_add_6->setToolTip(QApplication::translate("DlgItemEditor", "Selecionar do elements.data", nullptr));
#endif // QT_NO_TOOLTIP
        btn_addon_add_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_slot_add_2->setToolTip(QApplication::translate("DlgItemEditor", "Adicionar espa\303\247o de slot", nullptr));
#endif // QT_NO_TOOLTIP
        btn_slot_add_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_slot_delete_2->setToolTip(QApplication::translate("DlgItemEditor", "Apagar espa\303\247o de slot", nullptr));
#endif // QT_NO_TOOLTIP
        btn_slot_delete_2->setText(QString());
        btnClose->setText(QApplication::translate("DlgItemEditor", "Fechar", nullptr));
        btnSave->setText(QApplication::translate("DlgItemEditor", "Salvar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgItemEditor: public Ui_DlgItemEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGITEMEDITOR_H

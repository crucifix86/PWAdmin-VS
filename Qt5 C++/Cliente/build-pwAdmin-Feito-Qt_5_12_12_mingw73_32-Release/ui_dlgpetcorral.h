/********************************************************************************
** Form generated from reading UI file 'dlgpetcorral.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPETCORRAL_H
#define UI_DLGPETCORRAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgPetCorral
{
public:
    QTableWidget *tablePetCorral;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtCapacity;
    QLabel *label_2;
    QLineEdit *txtPosition;
    QLabel *label_20;
    QLineEdit *txtPetClass;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *imgPetId;
    QLineEdit *txtVisPetId;
    QLabel *imgPetVisId;
    QPushButton *btnPetId;
    QPushButton *btnPetVisId;
    QLabel *label_8;
    QLineEdit *txtPetId;
    QLabel *txtPetVisIdName;
    QLabel *label_3;
    QLabel *txtPetIdName;
    QLabel *label_9;
    QLineEdit *txtPetEggId;
    QPushButton *btnPetEggId;
    QLabel *imgPetEggId;
    QLabel *txtPetEggIdName;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_12;
    QLineEdit *txtLevel;
    QLabel *label_13;
    QLineEdit *txtExp;
    QLabel *label_14;
    QLineEdit *txtName;
    QLabel *label_15;
    QLineEdit *txtHonorPoints;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_16;
    QLineEdit *txtColor;
    QLabel *label_17;
    QLineEdit *txtFoodTime;
    QLabel *label_18;
    QLineEdit *txtHunger;
    QLabel *label_19;
    QLineEdit *txtHpFactor;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *txtSkillPoint;
    QLabel *label_21;
    QLineEdit *txtBind;
    QLabel *label_22;
    QLineEdit *txtUnused;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *txtSkill3;
    QLabel *label_31;
    QLabel *imgSkill8;
    QLabel *imgSkill2;
    QLabel *txtSkillName8;
    QLabel *label_36;
    QLineEdit *txtSkill4;
    QLabel *label_23;
    QLabel *imgSkill6;
    QPushButton *btnSkill5;
    QLabel *label_27;
    QLineEdit *txtSkill8;
    QLabel *txtSkillName6;
    QLabel *txtSkillName7;
    QPushButton *btnSkill1;
    QLineEdit *txtSkillLevel4;
    QLabel *imgSkill7;
    QPushButton *btnSkill2;
    QLabel *imgSkill3;
    QLineEdit *txtSkillLevel1;
    QLabel *label_39;
    QPushButton *btnSkill8;
    QPushButton *btnSkill3;
    QLabel *txtSkillName5;
    QPushButton *btnSkill4;
    QLabel *txtSkillName4;
    QLabel *label_37;
    QLabel *label_34;
    QLineEdit *txtSkill7;
    QLabel *label_30;
    QLabel *imgSkill5;
    QLabel *txtSkillName3;
    QLineEdit *txtSkillLevel2;
    QLabel *label_35;
    QLineEdit *txtSkill2;
    QLabel *imgSkill1;
    QLabel *label_24;
    QLabel *label_38;
    QLineEdit *txtSkill1;
    QLabel *txtSkillName1;
    QLineEdit *txtSkill6;
    QLabel *imgSkill4;
    QLabel *label_33;
    QLabel *label_40;
    QLabel *label_29;
    QLabel *label_28;
    QLineEdit *txtSkillLevel3;
    QPushButton *btnSkill6;
    QLabel *label_32;
    QPushButton *btnSkill7;
    QLineEdit *txtSkill5;
    QLabel *txtSkillName2;
    QLineEdit *txtSkillLevel5;
    QLineEdit *txtSkillLevel6;
    QLineEdit *txtSkillLevel7;
    QLineEdit *txtSkillLevel8;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_59;
    QLabel *label_57;
    QLineEdit *txtDef;
    QLineEdit *txtNature;
    QLabel *label_60;
    QLineEdit *txtAtk;
    QLineEdit *txtHp;
    QLabel *label_56;
    QLineEdit *txtAtkLevel;
    QLabel *label_55;
    QLabel *label_58;
    QLineEdit *txtDefLevel;
    QProgressBar *progressAtk;
    QLabel *txtNatureName;
    QProgressBar *progressDef;
    QProgressBar *progressHP;
    QProgressBar *progressAtkLevel;
    QProgressBar *progressDefLevel;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QPushButton *btnSave;
    QPushButton *btnClose;
    QPushButton *btnAddPet;
    QPushButton *btnDeletePet;

    void setupUi(QDialog *DlgPetCorral)
    {
        if (DlgPetCorral->objectName().isEmpty())
            DlgPetCorral->setObjectName(QString::fromUtf8("DlgPetCorral"));
        DlgPetCorral->resize(789, 532);
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
        QBrush brush5(QColor(85, 85, 85, 255));
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
        DlgPetCorral->setPalette(palette);
        tablePetCorral = new QTableWidget(DlgPetCorral);
        if (tablePetCorral->columnCount() < 4)
            tablePetCorral->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablePetCorral->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablePetCorral->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablePetCorral->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablePetCorral->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tablePetCorral->setObjectName(QString::fromUtf8("tablePetCorral"));
        tablePetCorral->setGeometry(QRect(10, 10, 341, 151));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush9(QColor(22, 22, 22, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QLinearGradient gradient(0.494, 0, 0.5, 1);
        gradient.setSpread(QGradient::ReflectSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(0, 123, 186, 147));
        gradient.setColorAt(0.505618, QColor(0, 161, 184, 255));
        gradient.setColorAt(1, QColor(0, 124, 188, 147));
        QBrush brush10(gradient);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        QLinearGradient gradient1(0.494, 0, 0.5, 1);
        gradient1.setSpread(QGradient::ReflectSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(0, 123, 186, 147));
        gradient1.setColorAt(0.505618, QColor(0, 161, 184, 255));
        gradient1.setColorAt(1, QColor(0, 124, 188, 147));
        QBrush brush11(gradient1);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QLinearGradient gradient2(0.494, 0, 0.5, 1);
        gradient2.setSpread(QGradient::ReflectSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(0, 123, 186, 147));
        gradient2.setColorAt(0.505618, QColor(0, 161, 184, 255));
        gradient2.setColorAt(1, QColor(0, 124, 188, 147));
        QBrush brush12(gradient2);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        tablePetCorral->setPalette(palette1);
        tablePetCorral->setAutoFillBackground(true);
        tablePetCorral->setStyleSheet(QString::fromUtf8("selection-background-color: qlineargradient(spread:reflect, x1:0.494, y1:0, x2:0.5, y2:1, stop:0 rgba(0, 123, 186, 147), stop:0.505618 rgba(0, 161, 184, 255), stop:1 rgba(0, 124, 188, 147));\n"
"background-color: rgb(22, 22, 22);\n"
"color: rgb(255, 255, 255);\n"
""));
        tablePetCorral->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tablePetCorral->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tablePetCorral->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tablePetCorral->setAutoScroll(true);
        tablePetCorral->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tablePetCorral->setSelectionBehavior(QAbstractItemView::SelectRows);
        tablePetCorral->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tablePetCorral->horizontalHeader()->setStretchLastSection(true);
        horizontalLayoutWidget = new QWidget(DlgPetCorral);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 170, 341, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        txtCapacity = new QLineEdit(horizontalLayoutWidget);
        txtCapacity->setObjectName(QString::fromUtf8("txtCapacity"));
        txtCapacity->setMinimumSize(QSize(50, 0));
        txtCapacity->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(txtCapacity);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        txtPosition = new QLineEdit(horizontalLayoutWidget);
        txtPosition->setObjectName(QString::fromUtf8("txtPosition"));
        txtPosition->setMinimumSize(QSize(50, 0));
        txtPosition->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(txtPosition);

        label_20 = new QLabel(horizontalLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_20);

        txtPetClass = new QLineEdit(horizontalLayoutWidget);
        txtPetClass->setObjectName(QString::fromUtf8("txtPetClass"));
        txtPetClass->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(txtPetClass);

        gridLayoutWidget = new QWidget(DlgPetCorral);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(400, 10, 381, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        imgPetId = new QLabel(gridLayoutWidget);
        imgPetId->setObjectName(QString::fromUtf8("imgPetId"));
        imgPetId->setMinimumSize(QSize(32, 32));
        imgPetId->setMaximumSize(QSize(32, 32));
        imgPetId->setPixmap(QPixmap(QString::fromUtf8(":/icons/Resources/0.gif")));

        gridLayout->addWidget(imgPetId, 0, 3, 1, 1);

        txtVisPetId = new QLineEdit(gridLayoutWidget);
        txtVisPetId->setObjectName(QString::fromUtf8("txtVisPetId"));
        txtVisPetId->setMinimumSize(QSize(60, 0));
        txtVisPetId->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(txtVisPetId, 1, 1, 1, 1);

        imgPetVisId = new QLabel(gridLayoutWidget);
        imgPetVisId->setObjectName(QString::fromUtf8("imgPetVisId"));
        imgPetVisId->setMinimumSize(QSize(32, 32));
        imgPetVisId->setMaximumSize(QSize(32, 32));
        imgPetVisId->setPixmap(QPixmap(QString::fromUtf8(":/icons/Resources/0.gif")));

        gridLayout->addWidget(imgPetVisId, 1, 3, 1, 1);

        btnPetId = new QPushButton(gridLayoutWidget);
        btnPetId->setObjectName(QString::fromUtf8("btnPetId"));
        btnPetId->setMinimumSize(QSize(12, 12));
        btnPetId->setMaximumSize(QSize(20, 20));
        btnPetId->setAutoDefault(true);

        gridLayout->addWidget(btnPetId, 0, 2, 1, 1);

        btnPetVisId = new QPushButton(gridLayoutWidget);
        btnPetVisId->setObjectName(QString::fromUtf8("btnPetVisId"));
        btnPetVisId->setMinimumSize(QSize(12, 12));
        btnPetVisId->setMaximumSize(QSize(20, 20));

        gridLayout->addWidget(btnPetVisId, 1, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        txtPetId = new QLineEdit(gridLayoutWidget);
        txtPetId->setObjectName(QString::fromUtf8("txtPetId"));
        txtPetId->setMinimumSize(QSize(60, 0));
        txtPetId->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(txtPetId, 0, 1, 1, 1);

        txtPetVisIdName = new QLabel(gridLayoutWidget);
        txtPetVisIdName->setObjectName(QString::fromUtf8("txtPetVisIdName"));

        gridLayout->addWidget(txtPetVisIdName, 1, 4, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        txtPetIdName = new QLabel(gridLayoutWidget);
        txtPetIdName->setObjectName(QString::fromUtf8("txtPetIdName"));

        gridLayout->addWidget(txtPetIdName, 0, 4, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        txtPetEggId = new QLineEdit(gridLayoutWidget);
        txtPetEggId->setObjectName(QString::fromUtf8("txtPetEggId"));
        txtPetEggId->setMinimumSize(QSize(60, 0));
        txtPetEggId->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(txtPetEggId, 2, 1, 1, 1);

        btnPetEggId = new QPushButton(gridLayoutWidget);
        btnPetEggId->setObjectName(QString::fromUtf8("btnPetEggId"));
        btnPetEggId->setMinimumSize(QSize(12, 12));
        btnPetEggId->setMaximumSize(QSize(20, 20));

        gridLayout->addWidget(btnPetEggId, 2, 2, 1, 1);

        imgPetEggId = new QLabel(gridLayoutWidget);
        imgPetEggId->setObjectName(QString::fromUtf8("imgPetEggId"));
        imgPetEggId->setMinimumSize(QSize(32, 32));
        imgPetEggId->setMaximumSize(QSize(32, 32));
        imgPetEggId->setPixmap(QPixmap(QString::fromUtf8(":/icons/Resources/0.gif")));

        gridLayout->addWidget(imgPetEggId, 2, 3, 1, 1);

        txtPetEggIdName = new QLabel(gridLayoutWidget);
        txtPetEggIdName->setObjectName(QString::fromUtf8("txtPetEggIdName"));

        gridLayout->addWidget(txtPetEggIdName, 2, 4, 1, 1);

        gridLayout->setColumnStretch(4, 100);
        formLayoutWidget = new QWidget(DlgPetCorral);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(400, 110, 181, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(2);
        formLayout->setVerticalSpacing(2);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_12);

        txtLevel = new QLineEdit(formLayoutWidget);
        txtLevel->setObjectName(QString::fromUtf8("txtLevel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtLevel);

        label_13 = new QLabel(formLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_13);

        txtExp = new QLineEdit(formLayoutWidget);
        txtExp->setObjectName(QString::fromUtf8("txtExp"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtExp);

        label_14 = new QLabel(formLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_14);

        txtName = new QLineEdit(formLayoutWidget);
        txtName->setObjectName(QString::fromUtf8("txtName"));
        txtName->setMaxLength(8);

        formLayout->setWidget(2, QFormLayout::FieldRole, txtName);

        label_15 = new QLabel(formLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_15);

        txtHonorPoints = new QLineEdit(formLayoutWidget);
        txtHonorPoints->setObjectName(QString::fromUtf8("txtHonorPoints"));

        formLayout->setWidget(3, QFormLayout::FieldRole, txtHonorPoints);

        formLayoutWidget_2 = new QWidget(DlgPetCorral);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(590, 110, 191, 101));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setHorizontalSpacing(2);
        formLayout_2->setVerticalSpacing(2);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(formLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_16);

        txtColor = new QLineEdit(formLayoutWidget_2);
        txtColor->setObjectName(QString::fromUtf8("txtColor"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtColor);

        label_17 = new QLabel(formLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_17);

        txtFoodTime = new QLineEdit(formLayoutWidget_2);
        txtFoodTime->setObjectName(QString::fromUtf8("txtFoodTime"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, txtFoodTime);

        label_18 = new QLabel(formLayoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_18);

        txtHunger = new QLineEdit(formLayoutWidget_2);
        txtHunger->setObjectName(QString::fromUtf8("txtHunger"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, txtHunger);

        label_19 = new QLabel(formLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_19);

        txtHpFactor = new QLineEdit(formLayoutWidget_2);
        txtHpFactor->setObjectName(QString::fromUtf8("txtHpFactor"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, txtHpFactor);

        horizontalLayoutWidget_2 = new QWidget(DlgPetCorral);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 200, 341, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        txtSkillPoint = new QLineEdit(horizontalLayoutWidget_2);
        txtSkillPoint->setObjectName(QString::fromUtf8("txtSkillPoint"));

        horizontalLayout_2->addWidget(txtSkillPoint);

        label_21 = new QLabel(horizontalLayoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_21);

        txtBind = new QLineEdit(horizontalLayoutWidget_2);
        txtBind->setObjectName(QString::fromUtf8("txtBind"));
        txtBind->setMinimumSize(QSize(50, 0));
        txtBind->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(txtBind);

        label_22 = new QLabel(horizontalLayoutWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMaximumSize(QSize(40, 16777215));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_22);

        txtUnused = new QLineEdit(horizontalLayoutWidget_2);
        txtUnused->setObjectName(QString::fromUtf8("txtUnused"));
        txtUnused->setMinimumSize(QSize(50, 0));
        txtUnused->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(txtUnused);

        groupBox = new QGroupBox(DlgPetCorral);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 230, 411, 291));
        gridLayoutWidget_2 = new QWidget(groupBox);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 391, 261));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(2);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        txtSkill3 = new QLineEdit(gridLayoutWidget_2);
        txtSkill3->setObjectName(QString::fromUtf8("txtSkill3"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(60);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txtSkill3->sizePolicy().hasHeightForWidth());
        txtSkill3->setSizePolicy(sizePolicy1);
        txtSkill3->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkill3, 2, 1, 1, 1);

        label_31 = new QLabel(gridLayoutWidget_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_2->addWidget(label_31, 5, 0, 1, 1);

        imgSkill8 = new QLabel(gridLayoutWidget_2);
        imgSkill8->setObjectName(QString::fromUtf8("imgSkill8"));
        imgSkill8->setMinimumSize(QSize(32, 32));
        imgSkill8->setMaximumSize(QSize(32, 32));
        imgSkill8->setPixmap(QPixmap(QString::fromUtf8(":/icons/Resources/0.gif")));

        gridLayout_2->addWidget(imgSkill8, 7, 5, 1, 1);

        imgSkill2 = new QLabel(gridLayoutWidget_2);
        imgSkill2->setObjectName(QString::fromUtf8("imgSkill2"));
        imgSkill2->setMinimumSize(QSize(32, 32));
        imgSkill2->setMaximumSize(QSize(32, 32));
        imgSkill2->setPixmap(QPixmap(QString::fromUtf8(":/icons/Resources/0.gif")));

        gridLayout_2->addWidget(imgSkill2, 1, 5, 1, 1);

        txtSkillName8 = new QLabel(gridLayoutWidget_2);
        txtSkillName8->setObjectName(QString::fromUtf8("txtSkillName8"));

        gridLayout_2->addWidget(txtSkillName8, 7, 6, 1, 1);

        label_36 = new QLabel(gridLayoutWidget_2);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout_2->addWidget(label_36, 3, 3, 1, 1);

        txtSkill4 = new QLineEdit(gridLayoutWidget_2);
        txtSkill4->setObjectName(QString::fromUtf8("txtSkill4"));
        sizePolicy1.setHeightForWidth(txtSkill4->sizePolicy().hasHeightForWidth());
        txtSkill4->setSizePolicy(sizePolicy1);
        txtSkill4->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkill4, 3, 1, 1, 1);

        label_23 = new QLabel(gridLayoutWidget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_2->addWidget(label_23, 0, 0, 1, 1);

        imgSkill6 = new QLabel(gridLayoutWidget_2);
        imgSkill6->setObjectName(QString::fromUtf8("imgSkill6"));
        imgSkill6->setMinimumSize(QSize(32, 32));
        imgSkill6->setMaximumSize(QSize(32, 32));
        imgSkill6->setPixmap(QPixmap(QString::fromUtf8(":/icons/Resources/0.gif")));

        gridLayout_2->addWidget(imgSkill6, 5, 5, 1, 1);

        btnSkill5 = new QPushButton(gridLayoutWidget_2);
        btnSkill5->setObjectName(QString::fromUtf8("btnSkill5"));
        btnSkill5->setMinimumSize(QSize(12, 12));
        btnSkill5->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(btnSkill5, 4, 2, 1, 1);

        label_27 = new QLabel(gridLayoutWidget_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_2->addWidget(label_27, 1, 0, 1, 1);

        txtSkill8 = new QLineEdit(gridLayoutWidget_2);
        txtSkill8->setObjectName(QString::fromUtf8("txtSkill8"));
        sizePolicy1.setHeightForWidth(txtSkill8->sizePolicy().hasHeightForWidth());
        txtSkill8->setSizePolicy(sizePolicy1);
        txtSkill8->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkill8, 7, 1, 1, 1);

        txtSkillName6 = new QLabel(gridLayoutWidget_2);
        txtSkillName6->setObjectName(QString::fromUtf8("txtSkillName6"));

        gridLayout_2->addWidget(txtSkillName6, 5, 6, 1, 1);

        txtSkillName7 = new QLabel(gridLayoutWidget_2);
        txtSkillName7->setObjectName(QString::fromUtf8("txtSkillName7"));

        gridLayout_2->addWidget(txtSkillName7, 6, 6, 1, 1);

        btnSkill1 = new QPushButton(gridLayoutWidget_2);
        btnSkill1->setObjectName(QString::fromUtf8("btnSkill1"));
        btnSkill1->setMinimumSize(QSize(12, 12));
        btnSkill1->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(btnSkill1, 0, 2, 1, 1);

        txtSkillLevel4 = new QLineEdit(gridLayoutWidget_2);
        txtSkillLevel4->setObjectName(QString::fromUtf8("txtSkillLevel4"));
        sizePolicy1.setHeightForWidth(txtSkillLevel4->sizePolicy().hasHeightForWidth());
        txtSkillLevel4->setSizePolicy(sizePolicy1);
        txtSkillLevel4->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkillLevel4, 3, 4, 1, 1);

        imgSkill7 = new QLabel(gridLayoutWidget_2);
        imgSkill7->setObjectName(QString::fromUtf8("imgSkill7"));
        imgSkill7->setMinimumSize(QSize(32, 32));
        imgSkill7->setMaximumSize(QSize(32, 32));
        imgSkill7->setPixmap(QPixmap(QString::fromUtf8(":/icons/Resources/0.gif")));

        gridLayout_2->addWidget(imgSkill7, 6, 5, 1, 1);

        btnSkill2 = new QPushButton(gridLayoutWidget_2);
        btnSkill2->setObjectName(QString::fromUtf8("btnSkill2"));
        btnSkill2->setMinimumSize(QSize(12, 12));
        btnSkill2->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(btnSkill2, 1, 2, 1, 1);

        imgSkill3 = new QLabel(gridLayoutWidget_2);
        imgSkill3->setObjectName(QString::fromUtf8("imgSkill3"));
        imgSkill3->setMinimumSize(QSize(32, 32));
        imgSkill3->setMaximumSize(QSize(32, 32));
        imgSkill3->setPixmap(QPixmap(QString::fromUtf8(":/icons/Resources/0.gif")));

        gridLayout_2->addWidget(imgSkill3, 2, 5, 1, 1);

        txtSkillLevel1 = new QLineEdit(gridLayoutWidget_2);
        txtSkillLevel1->setObjectName(QString::fromUtf8("txtSkillLevel1"));
        sizePolicy1.setHeightForWidth(txtSkillLevel1->sizePolicy().hasHeightForWidth());
        txtSkillLevel1->setSizePolicy(sizePolicy1);
        txtSkillLevel1->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkillLevel1, 0, 4, 1, 1);

        label_39 = new QLabel(gridLayoutWidget_2);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_2->addWidget(label_39, 6, 3, 1, 1);

        btnSkill8 = new QPushButton(gridLayoutWidget_2);
        btnSkill8->setObjectName(QString::fromUtf8("btnSkill8"));
        btnSkill8->setMinimumSize(QSize(12, 12));
        btnSkill8->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(btnSkill8, 7, 2, 1, 1);

        btnSkill3 = new QPushButton(gridLayoutWidget_2);
        btnSkill3->setObjectName(QString::fromUtf8("btnSkill3"));
        btnSkill3->setMinimumSize(QSize(12, 12));
        btnSkill3->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(btnSkill3, 2, 2, 1, 1);

        txtSkillName5 = new QLabel(gridLayoutWidget_2);
        txtSkillName5->setObjectName(QString::fromUtf8("txtSkillName5"));

        gridLayout_2->addWidget(txtSkillName5, 4, 6, 1, 1);

        btnSkill4 = new QPushButton(gridLayoutWidget_2);
        btnSkill4->setObjectName(QString::fromUtf8("btnSkill4"));
        btnSkill4->setMinimumSize(QSize(12, 12));
        btnSkill4->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(btnSkill4, 3, 2, 1, 1);

        txtSkillName4 = new QLabel(gridLayoutWidget_2);
        txtSkillName4->setObjectName(QString::fromUtf8("txtSkillName4"));

        gridLayout_2->addWidget(txtSkillName4, 3, 6, 1, 1);

        label_37 = new QLabel(gridLayoutWidget_2);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout_2->addWidget(label_37, 4, 3, 1, 1);

        label_34 = new QLabel(gridLayoutWidget_2);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_2->addWidget(label_34, 1, 3, 1, 1);

        txtSkill7 = new QLineEdit(gridLayoutWidget_2);
        txtSkill7->setObjectName(QString::fromUtf8("txtSkill7"));
        sizePolicy1.setHeightForWidth(txtSkill7->sizePolicy().hasHeightForWidth());
        txtSkill7->setSizePolicy(sizePolicy1);
        txtSkill7->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkill7, 6, 1, 1, 1);

        label_30 = new QLabel(gridLayoutWidget_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_2->addWidget(label_30, 4, 0, 1, 1);

        imgSkill5 = new QLabel(gridLayoutWidget_2);
        imgSkill5->setObjectName(QString::fromUtf8("imgSkill5"));
        imgSkill5->setMinimumSize(QSize(32, 32));
        imgSkill5->setMaximumSize(QSize(32, 32));
        imgSkill5->setPixmap(QPixmap(QString::fromUtf8(":/icons/Resources/0.gif")));

        gridLayout_2->addWidget(imgSkill5, 4, 5, 1, 1);

        txtSkillName3 = new QLabel(gridLayoutWidget_2);
        txtSkillName3->setObjectName(QString::fromUtf8("txtSkillName3"));

        gridLayout_2->addWidget(txtSkillName3, 2, 6, 1, 1);

        txtSkillLevel2 = new QLineEdit(gridLayoutWidget_2);
        txtSkillLevel2->setObjectName(QString::fromUtf8("txtSkillLevel2"));
        sizePolicy1.setHeightForWidth(txtSkillLevel2->sizePolicy().hasHeightForWidth());
        txtSkillLevel2->setSizePolicy(sizePolicy1);
        txtSkillLevel2->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkillLevel2, 1, 4, 1, 1);

        label_35 = new QLabel(gridLayoutWidget_2);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_2->addWidget(label_35, 2, 3, 1, 1);

        txtSkill2 = new QLineEdit(gridLayoutWidget_2);
        txtSkill2->setObjectName(QString::fromUtf8("txtSkill2"));
        sizePolicy1.setHeightForWidth(txtSkill2->sizePolicy().hasHeightForWidth());
        txtSkill2->setSizePolicy(sizePolicy1);
        txtSkill2->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkill2, 1, 1, 1, 1);

        imgSkill1 = new QLabel(gridLayoutWidget_2);
        imgSkill1->setObjectName(QString::fromUtf8("imgSkill1"));
        imgSkill1->setMinimumSize(QSize(32, 32));
        imgSkill1->setMaximumSize(QSize(32, 32));
        imgSkill1->setPixmap(QPixmap(QString::fromUtf8(":/icons/Resources/0.gif")));

        gridLayout_2->addWidget(imgSkill1, 0, 5, 1, 1);

        label_24 = new QLabel(gridLayoutWidget_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_2->addWidget(label_24, 0, 3, 1, 1);

        label_38 = new QLabel(gridLayoutWidget_2);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout_2->addWidget(label_38, 5, 3, 1, 1);

        txtSkill1 = new QLineEdit(gridLayoutWidget_2);
        txtSkill1->setObjectName(QString::fromUtf8("txtSkill1"));
        sizePolicy1.setHeightForWidth(txtSkill1->sizePolicy().hasHeightForWidth());
        txtSkill1->setSizePolicy(sizePolicy1);
        txtSkill1->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkill1, 0, 1, 1, 1);

        txtSkillName1 = new QLabel(gridLayoutWidget_2);
        txtSkillName1->setObjectName(QString::fromUtf8("txtSkillName1"));

        gridLayout_2->addWidget(txtSkillName1, 0, 6, 1, 1);

        txtSkill6 = new QLineEdit(gridLayoutWidget_2);
        txtSkill6->setObjectName(QString::fromUtf8("txtSkill6"));
        sizePolicy1.setHeightForWidth(txtSkill6->sizePolicy().hasHeightForWidth());
        txtSkill6->setSizePolicy(sizePolicy1);
        txtSkill6->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkill6, 5, 1, 1, 1);

        imgSkill4 = new QLabel(gridLayoutWidget_2);
        imgSkill4->setObjectName(QString::fromUtf8("imgSkill4"));
        imgSkill4->setMinimumSize(QSize(32, 32));
        imgSkill4->setMaximumSize(QSize(32, 32));
        imgSkill4->setPixmap(QPixmap(QString::fromUtf8(":/icons/Resources/0.gif")));

        gridLayout_2->addWidget(imgSkill4, 3, 5, 1, 1);

        label_33 = new QLabel(gridLayoutWidget_2);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_2->addWidget(label_33, 7, 0, 1, 1);

        label_40 = new QLabel(gridLayoutWidget_2);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_2->addWidget(label_40, 7, 3, 1, 1);

        label_29 = new QLabel(gridLayoutWidget_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_2->addWidget(label_29, 3, 0, 1, 1);

        label_28 = new QLabel(gridLayoutWidget_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_2->addWidget(label_28, 2, 0, 1, 1);

        txtSkillLevel3 = new QLineEdit(gridLayoutWidget_2);
        txtSkillLevel3->setObjectName(QString::fromUtf8("txtSkillLevel3"));
        sizePolicy1.setHeightForWidth(txtSkillLevel3->sizePolicy().hasHeightForWidth());
        txtSkillLevel3->setSizePolicy(sizePolicy1);
        txtSkillLevel3->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkillLevel3, 2, 4, 1, 1);

        btnSkill6 = new QPushButton(gridLayoutWidget_2);
        btnSkill6->setObjectName(QString::fromUtf8("btnSkill6"));
        btnSkill6->setMinimumSize(QSize(12, 12));
        btnSkill6->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(btnSkill6, 5, 2, 1, 1);

        label_32 = new QLabel(gridLayoutWidget_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_2->addWidget(label_32, 6, 0, 1, 1);

        btnSkill7 = new QPushButton(gridLayoutWidget_2);
        btnSkill7->setObjectName(QString::fromUtf8("btnSkill7"));
        btnSkill7->setMinimumSize(QSize(12, 12));
        btnSkill7->setMaximumSize(QSize(20, 20));

        gridLayout_2->addWidget(btnSkill7, 6, 2, 1, 1);

        txtSkill5 = new QLineEdit(gridLayoutWidget_2);
        txtSkill5->setObjectName(QString::fromUtf8("txtSkill5"));
        sizePolicy1.setHeightForWidth(txtSkill5->sizePolicy().hasHeightForWidth());
        txtSkill5->setSizePolicy(sizePolicy1);
        txtSkill5->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkill5, 4, 1, 1, 1);

        txtSkillName2 = new QLabel(gridLayoutWidget_2);
        txtSkillName2->setObjectName(QString::fromUtf8("txtSkillName2"));

        gridLayout_2->addWidget(txtSkillName2, 1, 6, 1, 1);

        txtSkillLevel5 = new QLineEdit(gridLayoutWidget_2);
        txtSkillLevel5->setObjectName(QString::fromUtf8("txtSkillLevel5"));
        sizePolicy1.setHeightForWidth(txtSkillLevel5->sizePolicy().hasHeightForWidth());
        txtSkillLevel5->setSizePolicy(sizePolicy1);
        txtSkillLevel5->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkillLevel5, 4, 4, 1, 1);

        txtSkillLevel6 = new QLineEdit(gridLayoutWidget_2);
        txtSkillLevel6->setObjectName(QString::fromUtf8("txtSkillLevel6"));
        sizePolicy1.setHeightForWidth(txtSkillLevel6->sizePolicy().hasHeightForWidth());
        txtSkillLevel6->setSizePolicy(sizePolicy1);
        txtSkillLevel6->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkillLevel6, 5, 4, 1, 1);

        txtSkillLevel7 = new QLineEdit(gridLayoutWidget_2);
        txtSkillLevel7->setObjectName(QString::fromUtf8("txtSkillLevel7"));
        sizePolicy1.setHeightForWidth(txtSkillLevel7->sizePolicy().hasHeightForWidth());
        txtSkillLevel7->setSizePolicy(sizePolicy1);
        txtSkillLevel7->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkillLevel7, 6, 4, 1, 1);

        txtSkillLevel8 = new QLineEdit(gridLayoutWidget_2);
        txtSkillLevel8->setObjectName(QString::fromUtf8("txtSkillLevel8"));
        sizePolicy1.setHeightForWidth(txtSkillLevel8->sizePolicy().hasHeightForWidth());
        txtSkillLevel8->setSizePolicy(sizePolicy1);
        txtSkillLevel8->setMinimumSize(QSize(60, 0));

        gridLayout_2->addWidget(txtSkillLevel8, 7, 4, 1, 1);

        gridLayout_2->setColumnStretch(6, 250);
        groupBox_2 = new QGroupBox(DlgPetCorral);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(430, 230, 351, 221));
        gridLayoutWidget_3 = new QWidget(groupBox_2);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 20, 331, 201));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_59 = new QLabel(gridLayoutWidget_3);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_59, 4, 0, 1, 1);

        label_57 = new QLabel(gridLayoutWidget_3);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_57, 2, 0, 1, 1);

        txtDef = new QLineEdit(gridLayoutWidget_3);
        txtDef->setObjectName(QString::fromUtf8("txtDef"));
        txtDef->setMinimumSize(QSize(100, 0));
        txtDef->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(txtDef, 1, 1, 1, 1);

        txtNature = new QLineEdit(gridLayoutWidget_3);
        txtNature->setObjectName(QString::fromUtf8("txtNature"));
        txtNature->setMinimumSize(QSize(100, 0));
        txtNature->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(txtNature, 5, 1, 1, 1);

        label_60 = new QLabel(gridLayoutWidget_3);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_60, 5, 0, 1, 1);

        txtAtk = new QLineEdit(gridLayoutWidget_3);
        txtAtk->setObjectName(QString::fromUtf8("txtAtk"));
        txtAtk->setMinimumSize(QSize(100, 0));
        txtAtk->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(txtAtk, 0, 1, 1, 1);

        txtHp = new QLineEdit(gridLayoutWidget_3);
        txtHp->setObjectName(QString::fromUtf8("txtHp"));
        txtHp->setMinimumSize(QSize(100, 0));
        txtHp->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(txtHp, 2, 1, 1, 1);

        label_56 = new QLabel(gridLayoutWidget_3);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_56, 1, 0, 1, 1);

        txtAtkLevel = new QLineEdit(gridLayoutWidget_3);
        txtAtkLevel->setObjectName(QString::fromUtf8("txtAtkLevel"));
        txtAtkLevel->setMinimumSize(QSize(100, 0));
        txtAtkLevel->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(txtAtkLevel, 3, 1, 1, 1);

        label_55 = new QLabel(gridLayoutWidget_3);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_55, 0, 0, 1, 1);

        label_58 = new QLabel(gridLayoutWidget_3);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_58, 3, 0, 1, 1);

        txtDefLevel = new QLineEdit(gridLayoutWidget_3);
        txtDefLevel->setObjectName(QString::fromUtf8("txtDefLevel"));
        txtDefLevel->setMinimumSize(QSize(100, 0));
        txtDefLevel->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(txtDefLevel, 4, 1, 1, 1);

        progressAtk = new QProgressBar(gridLayoutWidget_3);
        progressAtk->setObjectName(QString::fromUtf8("progressAtk"));
        progressAtk->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(150, 0, 0);"));
        progressAtk->setValue(0);
        progressAtk->setTextVisible(true);

        gridLayout_3->addWidget(progressAtk, 0, 2, 1, 1);

        txtNatureName = new QLabel(gridLayoutWidget_3);
        txtNatureName->setObjectName(QString::fromUtf8("txtNatureName"));

        gridLayout_3->addWidget(txtNatureName, 5, 2, 1, 1);

        progressDef = new QProgressBar(gridLayoutWidget_3);
        progressDef->setObjectName(QString::fromUtf8("progressDef"));
        progressDef->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(150, 0, 0);"));
        progressDef->setValue(0);
        progressDef->setTextVisible(true);

        gridLayout_3->addWidget(progressDef, 1, 2, 1, 1);

        progressHP = new QProgressBar(gridLayoutWidget_3);
        progressHP->setObjectName(QString::fromUtf8("progressHP"));
        progressHP->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(150, 0, 0);"));
        progressHP->setValue(0);
        progressHP->setTextVisible(true);

        gridLayout_3->addWidget(progressHP, 2, 2, 1, 1);

        progressAtkLevel = new QProgressBar(gridLayoutWidget_3);
        progressAtkLevel->setObjectName(QString::fromUtf8("progressAtkLevel"));
        progressAtkLevel->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(150, 0, 0);"));
        progressAtkLevel->setValue(0);
        progressAtkLevel->setTextVisible(true);

        gridLayout_3->addWidget(progressAtkLevel, 3, 2, 1, 1);

        progressDefLevel = new QProgressBar(gridLayoutWidget_3);
        progressDefLevel->setObjectName(QString::fromUtf8("progressDefLevel"));
        progressDefLevel->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(150, 0, 0);"));
        progressDefLevel->setValue(0);
        progressDefLevel->setTextVisible(true);

        gridLayout_3->addWidget(progressDefLevel, 4, 2, 1, 1);

        gridLayout_3->setRowStretch(5, 150);
        formLayoutWidget_3 = new QWidget(DlgPetCorral);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(430, 481, 352, 41));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_3->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_3->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout_3->setLabelAlignment(Qt::AlignCenter);
        formLayout_3->setFormAlignment(Qt::AlignCenter);
        formLayout_3->setHorizontalSpacing(0);
        formLayout_3->setVerticalSpacing(0);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        btnSave = new QPushButton(formLayoutWidget_3);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(30);
        sizePolicy2.setVerticalStretch(200);
        sizePolicy2.setHeightForWidth(btnSave->sizePolicy().hasHeightForWidth());
        btnSave->setSizePolicy(sizePolicy2);
        btnSave->setMinimumSize(QSize(175, 30));
        btnSave->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: {255,255,255};"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, btnSave);

        btnClose = new QPushButton(formLayoutWidget_3);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(30);
        sizePolicy3.setVerticalStretch(100);
        sizePolicy3.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy3);
        btnClose->setMinimumSize(QSize(175, 30));
        btnClose->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"color: {255,255,255};"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon1);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, btnClose);

        btnAddPet = new QPushButton(DlgPetCorral);
        btnAddPet->setObjectName(QString::fromUtf8("btnAddPet"));
        btnAddPet->setGeometry(QRect(353, 9, 32, 32));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Add_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddPet->setIcon(icon2);
        btnAddPet->setIconSize(QSize(28, 28));
        btnDeletePet = new QPushButton(DlgPetCorral);
        btnDeletePet->setObjectName(QString::fromUtf8("btnDeletePet"));
        btnDeletePet->setGeometry(QRect(353, 40, 32, 32));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Cancel_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDeletePet->setIcon(icon3);
        btnDeletePet->setIconSize(QSize(28, 28));

        retranslateUi(DlgPetCorral);

        QMetaObject::connectSlotsByName(DlgPetCorral);
    } // setupUi

    void retranslateUi(QDialog *DlgPetCorral)
    {
        DlgPetCorral->setWindowTitle(QApplication::translate("DlgPetCorral", "Editor de Pet", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablePetCorral->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DlgPetCorral", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablePetCorral->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DlgPetCorral", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablePetCorral->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DlgPetCorral", "N\303\255vel", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablePetCorral->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DlgPetCorral", "Tipo", nullptr));
        label->setText(QApplication::translate("DlgPetCorral", "Capacidade", nullptr));
        label_2->setText(QApplication::translate("DlgPetCorral", "Posi\303\247\303\243o", nullptr));
        label_20->setText(QApplication::translate("DlgPetCorral", "Tipo", nullptr));
        imgPetId->setText(QString());
        imgPetVisId->setText(QString());
        btnPetId->setText(QApplication::translate("DlgPetCorral", "...", nullptr));
        btnPetVisId->setText(QApplication::translate("DlgPetCorral", "...", nullptr));
        label_8->setText(QApplication::translate("DlgPetCorral", "ID Apar\303\252ncia", nullptr));
        txtPetVisIdName->setText(QApplication::translate("DlgPetCorral", "|", nullptr));
        label_3->setText(QApplication::translate("DlgPetCorral", "ID Mascote", nullptr));
        txtPetIdName->setText(QApplication::translate("DlgPetCorral", "|", nullptr));
        label_9->setText(QApplication::translate("DlgPetCorral", "ID Ovo", nullptr));
        btnPetEggId->setText(QApplication::translate("DlgPetCorral", "...", nullptr));
        imgPetEggId->setText(QString());
        txtPetEggIdName->setText(QApplication::translate("DlgPetCorral", "|", nullptr));
        label_12->setText(QApplication::translate("DlgPetCorral", "N\303\255vel", nullptr));
        label_13->setText(QApplication::translate("DlgPetCorral", "Experi\303\252ncia", nullptr));
        label_14->setText(QApplication::translate("DlgPetCorral", "Nome", nullptr));
        label_15->setText(QApplication::translate("DlgPetCorral", "Lealdade", nullptr));
#ifndef QT_NO_WHATSTHIS
        txtHonorPoints->setWhatsThis(QApplication::translate("DlgPetCorral", "<html><head/><body><p>max: 999</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        label_16->setText(QApplication::translate("DlgPetCorral", "Cor", nullptr));
        label_17->setText(QApplication::translate("DlgPetCorral", "Tempo Alimentado", nullptr));
        label_18->setText(QApplication::translate("DlgPetCorral", "Fome", nullptr));
#ifndef QT_NO_WHATSTHIS
        txtHunger->setWhatsThis(QApplication::translate("DlgPetCorral", "<html><head/><body><p>max: 12</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        label_19->setText(QApplication::translate("DlgPetCorral", "Fator de Cura", nullptr));
        label_4->setText(QApplication::translate("DlgPetCorral", "Pontos de Habilidade", nullptr));
        label_21->setText(QApplication::translate("DlgPetCorral", "Preso", nullptr));
        label_22->setText(QApplication::translate("DlgPetCorral", "Unused", nullptr));
        groupBox->setTitle(QApplication::translate("DlgPetCorral", "Lista de Habilidades", nullptr));
        label_31->setText(QApplication::translate("DlgPetCorral", "ID", nullptr));
        imgSkill8->setText(QString());
        imgSkill2->setText(QString());
        txtSkillName8->setText(QApplication::translate("DlgPetCorral", "|", nullptr));
        label_36->setText(QApplication::translate("DlgPetCorral", "N\303\255vel", nullptr));
        label_23->setText(QApplication::translate("DlgPetCorral", "ID", nullptr));
        imgSkill6->setText(QString());
        btnSkill5->setText(QApplication::translate("DlgPetCorral", "...", nullptr));
        label_27->setText(QApplication::translate("DlgPetCorral", "ID", nullptr));
        txtSkillName6->setText(QApplication::translate("DlgPetCorral", "|", nullptr));
        txtSkillName7->setText(QApplication::translate("DlgPetCorral", "|", nullptr));
        btnSkill1->setText(QApplication::translate("DlgPetCorral", "...", nullptr));
        imgSkill7->setText(QString());
        btnSkill2->setText(QApplication::translate("DlgPetCorral", "...", nullptr));
        imgSkill3->setText(QString());
        label_39->setText(QApplication::translate("DlgPetCorral", "N\303\255vel", nullptr));
        btnSkill8->setText(QApplication::translate("DlgPetCorral", "...", nullptr));
        btnSkill3->setText(QApplication::translate("DlgPetCorral", "...", nullptr));
        txtSkillName5->setText(QApplication::translate("DlgPetCorral", "|", nullptr));
        btnSkill4->setText(QApplication::translate("DlgPetCorral", "...", nullptr));
        txtSkillName4->setText(QApplication::translate("DlgPetCorral", "|", nullptr));
        label_37->setText(QApplication::translate("DlgPetCorral", "N\303\255vel", nullptr));
        label_34->setText(QApplication::translate("DlgPetCorral", "N\303\255vel", nullptr));
        label_30->setText(QApplication::translate("DlgPetCorral", "ID", nullptr));
        imgSkill5->setText(QString());
        txtSkillName3->setText(QApplication::translate("DlgPetCorral", "|", nullptr));
        label_35->setText(QApplication::translate("DlgPetCorral", "N\303\255vel", nullptr));
        imgSkill1->setText(QString());
        label_24->setText(QApplication::translate("DlgPetCorral", "N\303\255vel", nullptr));
        label_38->setText(QApplication::translate("DlgPetCorral", "N\303\255vel", nullptr));
        txtSkillName1->setText(QApplication::translate("DlgPetCorral", "|", nullptr));
        imgSkill4->setText(QString());
        label_33->setText(QApplication::translate("DlgPetCorral", "ID", nullptr));
        label_40->setText(QApplication::translate("DlgPetCorral", "N\303\255vel", nullptr));
        label_29->setText(QApplication::translate("DlgPetCorral", "ID", nullptr));
        label_28->setText(QApplication::translate("DlgPetCorral", "ID", nullptr));
        btnSkill6->setText(QApplication::translate("DlgPetCorral", "...", nullptr));
        label_32->setText(QApplication::translate("DlgPetCorral", "ID", nullptr));
        btnSkill7->setText(QApplication::translate("DlgPetCorral", "...", nullptr));
        txtSkillName2->setText(QApplication::translate("DlgPetCorral", "|", nullptr));
        groupBox_2->setTitle(QApplication::translate("DlgPetCorral", "Evolu\303\247\303\243o", nullptr));
        label_59->setText(QApplication::translate("DlgPetCorral", "N\303\255vel Defesa", nullptr));
        label_57->setText(QApplication::translate("DlgPetCorral", "HP", nullptr));
        label_60->setText(QApplication::translate("DlgPetCorral", "Humor", nullptr));
        label_56->setText(QApplication::translate("DlgPetCorral", "Defesa", nullptr));
        label_55->setText(QApplication::translate("DlgPetCorral", "Ataque", nullptr));
        label_58->setText(QApplication::translate("DlgPetCorral", "N\303\255vel Ataque", nullptr));
        progressAtk->setFormat(QApplication::translate("DlgPetCorral", "%v/%m", nullptr));
        txtNatureName->setText(QApplication::translate("DlgPetCorral", "|", nullptr));
        progressDef->setFormat(QApplication::translate("DlgPetCorral", "%v/%m", nullptr));
        progressHP->setFormat(QApplication::translate("DlgPetCorral", "%v/%m", nullptr));
        progressAtkLevel->setFormat(QApplication::translate("DlgPetCorral", "%v/%m", nullptr));
        progressDefLevel->setFormat(QApplication::translate("DlgPetCorral", "%v/%m", nullptr));
        btnSave->setText(QApplication::translate("DlgPetCorral", "Confirmar", nullptr));
        btnClose->setText(QApplication::translate("DlgPetCorral", "Fechar", nullptr));
        btnAddPet->setText(QString());
        btnDeletePet->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DlgPetCorral: public Ui_DlgPetCorral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGPETCORRAL_H

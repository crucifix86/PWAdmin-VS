/********************************************************************************
** Form generated from reading UI file 'dlgpropertyeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPROPERTYEDITOR_H
#define UI_DLGPROPERTYEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgPropertyEditor
{
public:
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *txtCon;
    QSpinBox *txtFor;
    QSpinBox *txtInt;
    QSpinBox *txtDes;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLineEdit *txtHpMax;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *txtMpMax;
    QLineEdit *txtHpRegen;
    QLineEdit *txtMpRegen;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QDoubleSpinBox *txtWalk;
    QDoubleSpinBox *txtRun;
    QDoubleSpinBox *txtSwim;
    QDoubleSpinBox *txtFly;
    QGroupBox *groupBox_3;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *txtAtqMetalMin;
    QLabel *label_26;
    QLineEdit *txtAtqMetalMax;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *txtAtqMadeiraMin;
    QLabel *label_27;
    QLineEdit *txtAtqMadeiraMax;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *txtAtqAguaMin;
    QLabel *label_28;
    QLineEdit *txtAtqAguaMax;
    QLabel *label_25;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *txtAtqFogoMin;
    QLabel *label_29;
    QLineEdit *txtAtqFogoMax;
    QLabel *label_30;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *txtAtqTerraMin;
    QLabel *label_31;
    QLineEdit *txtAtqTerraMax;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *txtVelAtq;
    QLabel *txt_velatk;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *txtAtqMagMin;
    QLabel *label_19;
    QLineEdit *txtAtqMagMax;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtAtqFisMin;
    QLabel *label_15;
    QLineEdit *txtAtqFisMax;
    QLabel *label_14;
    QLabel *label_21;
    QDoubleSpinBox *txtAtqRange;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_48;
    QLabel *label_13;
    QLineEdit *txtAcerto;
    QLabel *label_17;
    QLineEdit *txtEsquiva;
    QLabel *label_32;
    QLineEdit *txtDefF;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_11;
    QSpinBox *txtAp;
    QLabel *txt_ap;
    QLineEdit *txtDefMetal;
    QLineEdit *txtDefAgua;
    QLineEdit *txtDefMadeira;
    QLineEdit *txtDefFogo;
    QLineEdit *txtDefTerra;
    QPushButton *btnCancel;
    QPushButton *btnSave;

    void setupUi(QDialog *DlgPropertyEditor)
    {
        if (DlgPropertyEditor->objectName().isEmpty())
            DlgPropertyEditor->setObjectName(QString::fromUtf8("DlgPropertyEditor"));
        DlgPropertyEditor->resize(597, 443);
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
        DlgPropertyEditor->setPalette(palette);
        groupBox = new QGroupBox(DlgPropertyEditor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 281, 131));
        groupBox->setAutoFillBackground(false);
        groupBox->setFlat(false);
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 20, 111, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(2);
        formLayout->setVerticalSpacing(2);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtCon = new QSpinBox(formLayoutWidget);
        txtCon->setObjectName(QString::fromUtf8("txtCon"));
        txtCon->setMinimum(0);
        txtCon->setMaximum(999999999);
        txtCon->setSingleStep(1);
        txtCon->setValue(0);

        formLayout->setWidget(0, QFormLayout::FieldRole, txtCon);

        txtFor = new QSpinBox(formLayoutWidget);
        txtFor->setObjectName(QString::fromUtf8("txtFor"));
        txtFor->setMinimum(0);
        txtFor->setMaximum(999999999);
        txtFor->setSingleStep(1);
        txtFor->setValue(0);

        formLayout->setWidget(1, QFormLayout::FieldRole, txtFor);

        txtInt = new QSpinBox(formLayoutWidget);
        txtInt->setObjectName(QString::fromUtf8("txtInt"));
        txtInt->setMinimum(0);
        txtInt->setMaximum(999999999);
        txtInt->setSingleStep(1);
        txtInt->setValue(0);

        formLayout->setWidget(2, QFormLayout::FieldRole, txtInt);

        txtDes = new QSpinBox(formLayoutWidget);
        txtDes->setObjectName(QString::fromUtf8("txtDes"));
        txtDes->setMinimum(0);
        txtDes->setMaximum(999999999);
        txtDes->setSingleStep(1);
        txtDes->setValue(0);

        formLayout->setWidget(3, QFormLayout::FieldRole, txtDes);

        formLayoutWidget_2 = new QWidget(groupBox);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(120, 20, 161, 101));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setHorizontalSpacing(2);
        formLayout_2->setVerticalSpacing(2);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        txtHpMax = new QLineEdit(formLayoutWidget_2);
        txtHpMax->setObjectName(QString::fromUtf8("txtHpMax"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtHpMax);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_8);

        txtMpMax = new QLineEdit(formLayoutWidget_2);
        txtMpMax->setObjectName(QString::fromUtf8("txtMpMax"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, txtMpMax);

        txtHpRegen = new QLineEdit(formLayoutWidget_2);
        txtHpRegen->setObjectName(QString::fromUtf8("txtHpRegen"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, txtHpRegen);

        txtMpRegen = new QLineEdit(formLayoutWidget_2);
        txtMpRegen->setObjectName(QString::fromUtf8("txtMpRegen"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, txtMpRegen);

        groupBox_2 = new QGroupBox(DlgPropertyEditor);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(300, 10, 291, 131));
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setFlat(false);
        formLayoutWidget_3 = new QWidget(groupBox_2);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(0, 20, 191, 101));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_3->setHorizontalSpacing(2);
        formLayout_3->setVerticalSpacing(2);
        formLayout_3->setContentsMargins(5, 0, 0, 0);
        label_9 = new QLabel(formLayoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(formLayoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(formLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(formLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_12);

        txtWalk = new QDoubleSpinBox(formLayoutWidget_3);
        txtWalk->setObjectName(QString::fromUtf8("txtWalk"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, txtWalk);

        txtRun = new QDoubleSpinBox(formLayoutWidget_3);
        txtRun->setObjectName(QString::fromUtf8("txtRun"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, txtRun);

        txtSwim = new QDoubleSpinBox(formLayoutWidget_3);
        txtSwim->setObjectName(QString::fromUtf8("txtSwim"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, txtSwim);

        txtFly = new QDoubleSpinBox(formLayoutWidget_3);
        txtFly->setObjectName(QString::fromUtf8("txtFly"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, txtFly);

        groupBox_3 = new QGroupBox(DlgPropertyEditor);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 140, 581, 251));
        groupBox_3->setAutoFillBackground(false);
        groupBox_3->setFlat(false);
        formLayoutWidget_4 = new QWidget(groupBox_3);
        formLayoutWidget_4->setObjectName(QString::fromUtf8("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(0, 20, 281, 234));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_4->setHorizontalSpacing(2);
        formLayout_4->setVerticalSpacing(2);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(formLayoutWidget_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_22);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        txtAtqMetalMin = new QLineEdit(formLayoutWidget_4);
        txtAtqMetalMin->setObjectName(QString::fromUtf8("txtAtqMetalMin"));

        horizontalLayout_6->addWidget(txtAtqMetalMin);

        label_26 = new QLabel(formLayoutWidget_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_6->addWidget(label_26);

        txtAtqMetalMax = new QLineEdit(formLayoutWidget_4);
        txtAtqMetalMax->setObjectName(QString::fromUtf8("txtAtqMetalMax"));

        horizontalLayout_6->addWidget(txtAtqMetalMax);


        formLayout_4->setLayout(4, QFormLayout::FieldRole, horizontalLayout_6);

        label_23 = new QLabel(formLayoutWidget_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_23);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        txtAtqMadeiraMin = new QLineEdit(formLayoutWidget_4);
        txtAtqMadeiraMin->setObjectName(QString::fromUtf8("txtAtqMadeiraMin"));

        horizontalLayout_7->addWidget(txtAtqMadeiraMin);

        label_27 = new QLabel(formLayoutWidget_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_7->addWidget(label_27);

        txtAtqMadeiraMax = new QLineEdit(formLayoutWidget_4);
        txtAtqMadeiraMax->setObjectName(QString::fromUtf8("txtAtqMadeiraMax"));

        horizontalLayout_7->addWidget(txtAtqMadeiraMax);


        formLayout_4->setLayout(5, QFormLayout::FieldRole, horizontalLayout_7);

        label_24 = new QLabel(formLayoutWidget_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, label_24);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        txtAtqAguaMin = new QLineEdit(formLayoutWidget_4);
        txtAtqAguaMin->setObjectName(QString::fromUtf8("txtAtqAguaMin"));

        horizontalLayout_8->addWidget(txtAtqAguaMin);

        label_28 = new QLabel(formLayoutWidget_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_8->addWidget(label_28);

        txtAtqAguaMax = new QLineEdit(formLayoutWidget_4);
        txtAtqAguaMax->setObjectName(QString::fromUtf8("txtAtqAguaMax"));

        horizontalLayout_8->addWidget(txtAtqAguaMax);


        formLayout_4->setLayout(6, QFormLayout::FieldRole, horizontalLayout_8);

        label_25 = new QLabel(formLayoutWidget_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_4->setWidget(7, QFormLayout::LabelRole, label_25);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        txtAtqFogoMin = new QLineEdit(formLayoutWidget_4);
        txtAtqFogoMin->setObjectName(QString::fromUtf8("txtAtqFogoMin"));

        horizontalLayout_9->addWidget(txtAtqFogoMin);

        label_29 = new QLabel(formLayoutWidget_4);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_9->addWidget(label_29);

        txtAtqFogoMax = new QLineEdit(formLayoutWidget_4);
        txtAtqFogoMax->setObjectName(QString::fromUtf8("txtAtqFogoMax"));

        horizontalLayout_9->addWidget(txtAtqFogoMax);


        formLayout_4->setLayout(7, QFormLayout::FieldRole, horizontalLayout_9);

        label_30 = new QLabel(formLayoutWidget_4);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        formLayout_4->setWidget(8, QFormLayout::LabelRole, label_30);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        txtAtqTerraMin = new QLineEdit(formLayoutWidget_4);
        txtAtqTerraMin->setObjectName(QString::fromUtf8("txtAtqTerraMin"));

        horizontalLayout_10->addWidget(txtAtqTerraMin);

        label_31 = new QLabel(formLayoutWidget_4);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_10->addWidget(label_31);

        txtAtqTerraMax = new QLineEdit(formLayoutWidget_4);
        txtAtqTerraMax->setObjectName(QString::fromUtf8("txtAtqTerraMax"));

        horizontalLayout_10->addWidget(txtAtqTerraMax);


        formLayout_4->setLayout(8, QFormLayout::FieldRole, horizontalLayout_10);

        label_16 = new QLabel(formLayoutWidget_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_16);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        txtVelAtq = new QSpinBox(formLayoutWidget_4);
        txtVelAtq->setObjectName(QString::fromUtf8("txtVelAtq"));
        txtVelAtq->setMinimum(1);
        txtVelAtq->setMaximum(20);

        horizontalLayout_4->addWidget(txtVelAtq);

        txt_velatk = new QLabel(formLayoutWidget_4);
        txt_velatk->setObjectName(QString::fromUtf8("txt_velatk"));
        txt_velatk->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);"));

        horizontalLayout_4->addWidget(txt_velatk);

        horizontalLayout_4->setStretch(1, 70);

        formLayout_4->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);

        label_18 = new QLabel(formLayoutWidget_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_18);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        txtAtqMagMin = new QLineEdit(formLayoutWidget_4);
        txtAtqMagMin->setObjectName(QString::fromUtf8("txtAtqMagMin"));

        horizontalLayout_3->addWidget(txtAtqMagMin);

        label_19 = new QLabel(formLayoutWidget_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_3->addWidget(label_19);

        txtAtqMagMax = new QLineEdit(formLayoutWidget_4);
        txtAtqMagMax->setObjectName(QString::fromUtf8("txtAtqMagMax"));

        horizontalLayout_3->addWidget(txtAtqMagMax);


        formLayout_4->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txtAtqFisMin = new QLineEdit(formLayoutWidget_4);
        txtAtqFisMin->setObjectName(QString::fromUtf8("txtAtqFisMin"));

        horizontalLayout->addWidget(txtAtqFisMin);

        label_15 = new QLabel(formLayoutWidget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout->addWidget(label_15);

        txtAtqFisMax = new QLineEdit(formLayoutWidget_4);
        txtAtqFisMax->setObjectName(QString::fromUtf8("txtAtqFisMax"));

        horizontalLayout->addWidget(txtAtqFisMax);


        formLayout_4->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        label_14 = new QLabel(formLayoutWidget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_14);

        label_21 = new QLabel(formLayoutWidget_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_21);

        txtAtqRange = new QDoubleSpinBox(formLayoutWidget_4);
        txtAtqRange->setObjectName(QString::fromUtf8("txtAtqRange"));
        txtAtqRange->setMaximumSize(QSize(98, 16777215));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, txtAtqRange);

        formLayoutWidget_5 = new QWidget(groupBox_3);
        formLayoutWidget_5->setObjectName(QString::fromUtf8("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(290, 20, 281, 221));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_5->setHorizontalSpacing(2);
        formLayout_5->setVerticalSpacing(2);
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_40 = new QLabel(formLayoutWidget_5);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, label_40);

        label_41 = new QLabel(formLayoutWidget_5);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        formLayout_5->setWidget(5, QFormLayout::LabelRole, label_41);

        label_42 = new QLabel(formLayoutWidget_5);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        formLayout_5->setWidget(6, QFormLayout::LabelRole, label_42);

        label_43 = new QLabel(formLayoutWidget_5);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        formLayout_5->setWidget(7, QFormLayout::LabelRole, label_43);

        label_48 = new QLabel(formLayoutWidget_5);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        formLayout_5->setWidget(8, QFormLayout::LabelRole, label_48);

        label_13 = new QLabel(formLayoutWidget_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_13);

        txtAcerto = new QLineEdit(formLayoutWidget_5);
        txtAcerto->setObjectName(QString::fromUtf8("txtAcerto"));
        txtAcerto->setMaximumSize(QSize(98, 16777215));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, txtAcerto);

        label_17 = new QLabel(formLayoutWidget_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_17);

        txtEsquiva = new QLineEdit(formLayoutWidget_5);
        txtEsquiva->setObjectName(QString::fromUtf8("txtEsquiva"));
        txtEsquiva->setMaximumSize(QSize(98, 16777215));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, txtEsquiva);

        label_32 = new QLabel(formLayoutWidget_5);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_32);

        txtDefF = new QLineEdit(formLayoutWidget_5);
        txtDefF->setObjectName(QString::fromUtf8("txtDefF"));
        txtDefF->setMaximumSize(QSize(98, 16777215));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, txtDefF);

        label_20 = new QLabel(formLayoutWidget_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_20);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        txtAp = new QSpinBox(formLayoutWidget_5);
        txtAp->setObjectName(QString::fromUtf8("txtAp"));
        txtAp->setMinimum(99);
        txtAp->setMaximum(399);
        txtAp->setSingleStep(100);

        horizontalLayout_11->addWidget(txtAp);

        txt_ap = new QLabel(formLayoutWidget_5);
        txt_ap->setObjectName(QString::fromUtf8("txt_ap"));
        txt_ap->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);"));

        horizontalLayout_11->addWidget(txt_ap);

        horizontalLayout_11->setStretch(0, 30);
        horizontalLayout_11->setStretch(1, 70);

        formLayout_5->setLayout(0, QFormLayout::FieldRole, horizontalLayout_11);

        txtDefMetal = new QLineEdit(formLayoutWidget_5);
        txtDefMetal->setObjectName(QString::fromUtf8("txtDefMetal"));
        txtDefMetal->setMaximumSize(QSize(98, 16777215));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, txtDefMetal);

        txtDefAgua = new QLineEdit(formLayoutWidget_5);
        txtDefAgua->setObjectName(QString::fromUtf8("txtDefAgua"));
        txtDefAgua->setMaximumSize(QSize(98, 16777215));

        formLayout_5->setWidget(6, QFormLayout::FieldRole, txtDefAgua);

        txtDefMadeira = new QLineEdit(formLayoutWidget_5);
        txtDefMadeira->setObjectName(QString::fromUtf8("txtDefMadeira"));
        txtDefMadeira->setMaximumSize(QSize(98, 16777215));

        formLayout_5->setWidget(5, QFormLayout::FieldRole, txtDefMadeira);

        txtDefFogo = new QLineEdit(formLayoutWidget_5);
        txtDefFogo->setObjectName(QString::fromUtf8("txtDefFogo"));
        txtDefFogo->setMaximumSize(QSize(98, 16777215));

        formLayout_5->setWidget(7, QFormLayout::FieldRole, txtDefFogo);

        txtDefTerra = new QLineEdit(formLayoutWidget_5);
        txtDefTerra->setObjectName(QString::fromUtf8("txtDefTerra"));
        txtDefTerra->setMaximumSize(QSize(98, 16777215));

        formLayout_5->setWidget(8, QFormLayout::FieldRole, txtDefTerra);

        btnCancel = new QPushButton(DlgPropertyEditor);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(420, 400, 171, 31));
        btnCancel->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon);
        btnSave = new QPushButton(DlgPropertyEditor);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(240, 400, 171, 31));
        btnSave->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon1);

        retranslateUi(DlgPropertyEditor);

        QMetaObject::connectSlotsByName(DlgPropertyEditor);
    } // setupUi

    void retranslateUi(QDialog *DlgPropertyEditor)
    {
        DlgPropertyEditor->setWindowTitle(QApplication::translate("DlgPropertyEditor", "Editor de Propriedades", nullptr));
        groupBox->setTitle(QApplication::translate("DlgPropertyEditor", "Atributos", nullptr));
        label->setText(QApplication::translate("DlgPropertyEditor", "Con", nullptr));
        label_2->setText(QApplication::translate("DlgPropertyEditor", "For", nullptr));
        label_3->setText(QApplication::translate("DlgPropertyEditor", "Int", nullptr));
        label_4->setText(QApplication::translate("DlgPropertyEditor", "Des", nullptr));
        label_5->setText(QApplication::translate("DlgPropertyEditor", "HP M\303\241x", nullptr));
        label_6->setText(QApplication::translate("DlgPropertyEditor", "MP M\303\241x", nullptr));
        label_7->setText(QApplication::translate("DlgPropertyEditor", "HP Regen.", nullptr));
        label_8->setText(QApplication::translate("DlgPropertyEditor", "MP Regen.", nullptr));
        groupBox_2->setTitle(QApplication::translate("DlgPropertyEditor", "Velocidade", nullptr));
        label_9->setText(QApplication::translate("DlgPropertyEditor", "Caminhando", nullptr));
        label_10->setText(QApplication::translate("DlgPropertyEditor", "Correndo", nullptr));
        label_11->setText(QApplication::translate("DlgPropertyEditor", "Nadando", nullptr));
        label_12->setText(QApplication::translate("DlgPropertyEditor", "Voando", nullptr));
        groupBox_3->setTitle(QApplication::translate("DlgPropertyEditor", "Ataque/Defesa", nullptr));
        label_22->setText(QApplication::translate("DlgPropertyEditor", "Atq Metal", nullptr));
        label_26->setText(QApplication::translate("DlgPropertyEditor", "-", nullptr));
        label_23->setText(QApplication::translate("DlgPropertyEditor", "Atq Madeira", nullptr));
        label_27->setText(QApplication::translate("DlgPropertyEditor", "-", nullptr));
        label_24->setText(QApplication::translate("DlgPropertyEditor", "Atq \303\201gua", nullptr));
        label_28->setText(QApplication::translate("DlgPropertyEditor", "-", nullptr));
        label_25->setText(QApplication::translate("DlgPropertyEditor", "Atq Fogo", nullptr));
        label_29->setText(QApplication::translate("DlgPropertyEditor", "-", nullptr));
        label_30->setText(QApplication::translate("DlgPropertyEditor", "Atq Terra", nullptr));
        label_31->setText(QApplication::translate("DlgPropertyEditor", "-", nullptr));
        label_16->setText(QApplication::translate("DlgPropertyEditor", "Vel. Ataque", nullptr));
        txt_velatk->setText(QApplication::translate("DlgPropertyEditor", "1.25 atq/seg.", nullptr));
        label_18->setText(QApplication::translate("DlgPropertyEditor", "Atq M\303\241gico", nullptr));
        label_19->setText(QApplication::translate("DlgPropertyEditor", "-", nullptr));
        label_15->setText(QApplication::translate("DlgPropertyEditor", "-", nullptr));
        label_14->setText(QApplication::translate("DlgPropertyEditor", "Atq F\303\255sico", nullptr));
        label_21->setText(QApplication::translate("DlgPropertyEditor", "Dist\303\242ncia Atq", nullptr));
        label_40->setText(QApplication::translate("DlgPropertyEditor", "Def Metal", nullptr));
        label_41->setText(QApplication::translate("DlgPropertyEditor", "Def Madeira", nullptr));
        label_42->setText(QApplication::translate("DlgPropertyEditor", "Def \303\201gua", nullptr));
        label_43->setText(QApplication::translate("DlgPropertyEditor", "Def Fogo", nullptr));
        label_48->setText(QApplication::translate("DlgPropertyEditor", "Def Terra", nullptr));
        label_13->setText(QApplication::translate("DlgPropertyEditor", "Acerto", nullptr));
        label_17->setText(QApplication::translate("DlgPropertyEditor", "Esquiva", nullptr));
        label_32->setText(QApplication::translate("DlgPropertyEditor", "Def F\303\255sica", nullptr));
        label_20->setText(QApplication::translate("DlgPropertyEditor", "Barras Chi", nullptr));
        txt_ap->setText(QApplication::translate("DlgPropertyEditor", "Nenhuma", nullptr));
        btnCancel->setText(QApplication::translate("DlgPropertyEditor", "Fechar", nullptr));
        btnSave->setText(QApplication::translate("DlgPropertyEditor", "Confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgPropertyEditor: public Ui_DlgPropertyEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGPROPERTYEDITOR_H

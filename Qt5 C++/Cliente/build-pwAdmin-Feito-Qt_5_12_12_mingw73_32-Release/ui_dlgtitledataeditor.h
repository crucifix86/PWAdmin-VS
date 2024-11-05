/********************************************************************************
** Form generated from reading UI file 'dlgtitledataeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGTITLEDATAEDITOR_H
#define UI_DLGTITLEDATAEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgTitleDataEditor
{
public:
    QGroupBox *groupBox;
    QListWidget *listDelivery;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QSpinBox *txtTitle;
    QGroupBox *groupBox_2;
    QListWidget *listTemporary;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_4;
    QSpinBox *txtTitleTemp;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_5;
    QSpinBox *txtTimeTemp;
    QLabel *label_6;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpinBox *txtTitleCurrent;
    QLabel *lblTitleCurrent;
    QPushButton *btnSave;
    QPushButton *btnClose;

    void setupUi(QDialog *DlgTitleDataEditor)
    {
        if (DlgTitleDataEditor->objectName().isEmpty())
            DlgTitleDataEditor->setObjectName(QString::fromUtf8("DlgTitleDataEditor"));
        DlgTitleDataEditor->resize(762, 303);
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
        DlgTitleDataEditor->setPalette(palette);
        groupBox = new QGroupBox(DlgTitleDataEditor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 361, 241));
        listDelivery = new QListWidget(groupBox);
        listDelivery->setObjectName(QString::fromUtf8("listDelivery"));
        listDelivery->setGeometry(QRect(10, 20, 341, 181));
        formLayoutWidget_2 = new QWidget(groupBox);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 210, 121, 25));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        txtTitle = new QSpinBox(formLayoutWidget_2);
        txtTitle->setObjectName(QString::fromUtf8("txtTitle"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtTitle);

        groupBox_2 = new QGroupBox(DlgTitleDataEditor);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(380, 10, 361, 241));
        listTemporary = new QListWidget(groupBox_2);
        listTemporary->setObjectName(QString::fromUtf8("listTemporary"));
        listTemporary->setGeometry(QRect(10, 20, 341, 181));
        formLayoutWidget_3 = new QWidget(groupBox_2);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(10, 210, 121, 25));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_4);

        txtTitleTemp = new QSpinBox(formLayoutWidget_3);
        txtTitleTemp->setObjectName(QString::fromUtf8("txtTitleTemp"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, txtTitleTemp);

        formLayoutWidget_4 = new QWidget(groupBox_2);
        formLayoutWidget_4->setObjectName(QString::fromUtf8("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(140, 210, 121, 25));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_5);

        txtTimeTemp = new QSpinBox(formLayoutWidget_4);
        txtTimeTemp->setObjectName(QString::fromUtf8("txtTimeTemp"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, txtTimeTemp);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(264, 212, 91, 20));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 255);"));
        formLayoutWidget = new QWidget(DlgTitleDataEditor);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 260, 361, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txtTitleCurrent = new QSpinBox(formLayoutWidget);
        txtTitleCurrent->setObjectName(QString::fromUtf8("txtTitleCurrent"));
        txtTitleCurrent->setMaximumSize(QSize(80, 16777215));
        txtTitleCurrent->setMaximum(999999999);

        horizontalLayout->addWidget(txtTitleCurrent);

        lblTitleCurrent = new QLabel(formLayoutWidget);
        lblTitleCurrent->setObjectName(QString::fromUtf8("lblTitleCurrent"));
        lblTitleCurrent->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));

        horizontalLayout->addWidget(lblTitleCurrent);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        btnSave = new QPushButton(DlgTitleDataEditor);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(380, 260, 181, 31));
        btnSave->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon);
        btnClose = new QPushButton(DlgTitleDataEditor);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(570, 260, 171, 31));
        btnClose->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon1);

        retranslateUi(DlgTitleDataEditor);

        QMetaObject::connectSlotsByName(DlgTitleDataEditor);
    } // setupUi

    void retranslateUi(QDialog *DlgTitleDataEditor)
    {
        DlgTitleDataEditor->setWindowTitle(QApplication::translate("DlgTitleDataEditor", "Editor de T\303\255tulos", nullptr));
        groupBox->setTitle(QApplication::translate("DlgTitleDataEditor", "T\303\255tulos Recebidos", nullptr));
        label_3->setText(QApplication::translate("DlgTitleDataEditor", "T\303\255tulo", nullptr));
        groupBox_2->setTitle(QApplication::translate("DlgTitleDataEditor", "T\303\255tulos Tempor\303\241rios", nullptr));
        label_4->setText(QApplication::translate("DlgTitleDataEditor", "T\303\255tulo", nullptr));
        label_5->setText(QApplication::translate("DlgTitleDataEditor", "Tempo", nullptr));
        label_6->setText(QApplication::translate("DlgTitleDataEditor", "|", nullptr));
        label->setText(QApplication::translate("DlgTitleDataEditor", "T\303\255tulo Atual", nullptr));
        lblTitleCurrent->setText(QApplication::translate("DlgTitleDataEditor", "|", nullptr));
        btnSave->setText(QApplication::translate("DlgTitleDataEditor", "Confirmar", nullptr));
        btnClose->setText(QApplication::translate("DlgTitleDataEditor", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgTitleDataEditor: public Ui_DlgTitleDataEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGTITLEDATAEDITOR_H

/********************************************************************************
** Form generated from reading UI file 'dlgreincarnationdataeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGREINCARNATIONDATAEDITOR_H
#define UI_DLGREINCARNATIONDATAEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgReincarnationDataEditor
{
public:
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QDoubleSpinBox *txtLevel;
    QLabel *label_6;
    QDoubleSpinBox *txtTimestamp;
    QListWidget *listWidget;
    QPushButton *btnSave;
    QPushButton *btnClose;
    QPushButton *btnAdd;
    QPushButton *btnDelete;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cbTomeActive;
    QLabel *label_4;
    QDoubleSpinBox *txtTomeExp;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_3;
    QLabel *label_7;
    QDoubleSpinBox *txtExp;
    QLabel *lbTimestamp;

    void setupUi(QDialog *DlgReincarnationDataEditor)
    {
        if (DlgReincarnationDataEditor->objectName().isEmpty())
            DlgReincarnationDataEditor->setObjectName(QString::fromUtf8("DlgReincarnationDataEditor"));
        DlgReincarnationDataEditor->resize(360, 277);
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
        QBrush brush5(QColor(79, 79, 79, 255));
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
        DlgReincarnationDataEditor->setPalette(palette);
        formLayoutWidget_2 = new QWidget(DlgReincarnationDataEditor);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 170, 161, 61));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        txtLevel = new QDoubleSpinBox(formLayoutWidget_2);
        txtLevel->setObjectName(QString::fromUtf8("txtLevel"));
        txtLevel->setDecimals(0);
        txtLevel->setMaximum(150.000000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtLevel);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        txtTimestamp = new QDoubleSpinBox(formLayoutWidget_2);
        txtTimestamp->setObjectName(QString::fromUtf8("txtTimestamp"));
        txtTimestamp->setDecimals(0);
        txtTimestamp->setMaximum(99999999999.000000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, txtTimestamp);

        listWidget = new QListWidget(DlgReincarnationDataEditor);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 40, 311, 121));
        btnSave = new QPushButton(DlgReincarnationDataEditor);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(10, 240, 161, 31));
        btnSave->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon);
        btnClose = new QPushButton(DlgReincarnationDataEditor);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(180, 240, 161, 31));
        btnClose->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon1);
        btnAdd = new QPushButton(DlgReincarnationDataEditor);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setGeometry(QRect(322, 40, 31, 31));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/Add_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon2);
        btnAdd->setIconSize(QSize(32, 32));
        btnDelete = new QPushButton(DlgReincarnationDataEditor);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setGeometry(QRect(322, 70, 31, 31));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Cancel_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDelete->setIcon(icon3);
        btnDelete->setIconSize(QSize(32, 32));
        horizontalLayoutWidget = new QWidget(DlgReincarnationDataEditor);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 311, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cbTomeActive = new QCheckBox(horizontalLayoutWidget);
        cbTomeActive->setObjectName(QString::fromUtf8("cbTomeActive"));

        horizontalLayout->addWidget(cbTomeActive);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_4);

        txtTomeExp = new QDoubleSpinBox(horizontalLayoutWidget);
        txtTomeExp->setObjectName(QString::fromUtf8("txtTomeExp"));
        txtTomeExp->setDecimals(0);
        txtTomeExp->setMaximum(99999999999.000000000000000);

        horizontalLayout->addWidget(txtTomeExp);

        formLayoutWidget = new QWidget(DlgReincarnationDataEditor);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(180, 170, 141, 31));
        formLayout_3 = new QFormLayout(formLayoutWidget);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_7);

        txtExp = new QDoubleSpinBox(formLayoutWidget);
        txtExp->setObjectName(QString::fromUtf8("txtExp"));
        txtExp->setDecimals(0);
        txtExp->setMaximum(99999999999.000000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, txtExp);

        lbTimestamp = new QLabel(DlgReincarnationDataEditor);
        lbTimestamp->setObjectName(QString::fromUtf8("lbTimestamp"));
        lbTimestamp->setGeometry(QRect(180, 205, 161, 16));
        lbTimestamp->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 255);"));

        retranslateUi(DlgReincarnationDataEditor);

        QMetaObject::connectSlotsByName(DlgReincarnationDataEditor);
    } // setupUi

    void retranslateUi(QDialog *DlgReincarnationDataEditor)
    {
        DlgReincarnationDataEditor->setWindowTitle(QApplication::translate("DlgReincarnationDataEditor", "Editor de Reincarna\303\247\303\243o", nullptr));
        label_5->setText(QApplication::translate("DlgReincarnationDataEditor", "N\303\255vel", nullptr));
        label_6->setText(QApplication::translate("DlgReincarnationDataEditor", "Timestamp", nullptr));
        btnSave->setText(QApplication::translate("DlgReincarnationDataEditor", "Confirmar", nullptr));
        btnClose->setText(QApplication::translate("DlgReincarnationDataEditor", "Fechar", nullptr));
        btnAdd->setText(QString());
        btnDelete->setText(QString());
        cbTomeActive->setText(QApplication::translate("DlgReincarnationDataEditor", "Livro Antigo", nullptr));
        label_4->setText(QApplication::translate("DlgReincarnationDataEditor", "EXP Livro Antigo", nullptr));
        label_7->setText(QApplication::translate("DlgReincarnationDataEditor", "Exp", nullptr));
        lbTimestamp->setText(QApplication::translate("DlgReincarnationDataEditor", "|", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgReincarnationDataEditor: public Ui_DlgReincarnationDataEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGREINCARNATIONDATAEDITOR_H

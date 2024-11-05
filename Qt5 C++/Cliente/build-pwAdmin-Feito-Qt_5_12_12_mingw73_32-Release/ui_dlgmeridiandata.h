/********************************************************************************
** Form generated from reading UI file 'dlgmeridiandata.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGMERIDIANDATA_H
#define UI_DLGMERIDIANDATA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgMeridianData
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *txtLevel;
    QLineEdit *txtLifegate;
    QLineEdit *txtDeathgate;
    QLineEdit *txtFreeRefine;
    QLineEdit *txtPaidRefine;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *txtPlayerLogin;
    QLineEdit *txtContinuLogin;
    QLineEdit *txtTrigram1;
    QLineEdit *txtTrigram2;
    QLineEdit *txtTrigram3;
    QPushButton *btnSave;
    QPushButton *btnSave_2;

    void setupUi(QDialog *DlgMeridianData)
    {
        if (DlgMeridianData->objectName().isEmpty())
            DlgMeridianData->setObjectName(QString::fromUtf8("DlgMeridianData"));
        DlgMeridianData->resize(417, 179);
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
        DlgMeridianData->setPalette(palette);
        formLayoutWidget = new QWidget(DlgMeridianData);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 191, 121));
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

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        txtLevel = new QLineEdit(formLayoutWidget);
        txtLevel->setObjectName(QString::fromUtf8("txtLevel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtLevel);

        txtLifegate = new QLineEdit(formLayoutWidget);
        txtLifegate->setObjectName(QString::fromUtf8("txtLifegate"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtLifegate);

        txtDeathgate = new QLineEdit(formLayoutWidget);
        txtDeathgate->setObjectName(QString::fromUtf8("txtDeathgate"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txtDeathgate);

        txtFreeRefine = new QLineEdit(formLayoutWidget);
        txtFreeRefine->setObjectName(QString::fromUtf8("txtFreeRefine"));

        formLayout->setWidget(3, QFormLayout::FieldRole, txtFreeRefine);

        txtPaidRefine = new QLineEdit(formLayoutWidget);
        txtPaidRefine->setObjectName(QString::fromUtf8("txtPaidRefine"));

        formLayout->setWidget(4, QFormLayout::FieldRole, txtPaidRefine);

        formLayoutWidget_2 = new QWidget(DlgMeridianData);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(210, 10, 191, 121));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setHorizontalSpacing(2);
        formLayout_2->setVerticalSpacing(2);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_10);

        txtPlayerLogin = new QLineEdit(formLayoutWidget_2);
        txtPlayerLogin->setObjectName(QString::fromUtf8("txtPlayerLogin"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtPlayerLogin);

        txtContinuLogin = new QLineEdit(formLayoutWidget_2);
        txtContinuLogin->setObjectName(QString::fromUtf8("txtContinuLogin"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, txtContinuLogin);

        txtTrigram1 = new QLineEdit(formLayoutWidget_2);
        txtTrigram1->setObjectName(QString::fromUtf8("txtTrigram1"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, txtTrigram1);

        txtTrigram2 = new QLineEdit(formLayoutWidget_2);
        txtTrigram2->setObjectName(QString::fromUtf8("txtTrigram2"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, txtTrigram2);

        txtTrigram3 = new QLineEdit(formLayoutWidget_2);
        txtTrigram3->setObjectName(QString::fromUtf8("txtTrigram3"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, txtTrigram3);

        btnSave = new QPushButton(DlgMeridianData);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(10, 140, 191, 31));
        btnSave->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon);
        btnSave_2 = new QPushButton(DlgMeridianData);
        btnSave_2->setObjectName(QString::fromUtf8("btnSave_2"));
        btnSave_2->setGeometry(QRect(210, 140, 191, 31));
        btnSave_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave_2->setIcon(icon1);

        retranslateUi(DlgMeridianData);

        QMetaObject::connectSlotsByName(DlgMeridianData);
    } // setupUi

    void retranslateUi(QDialog *DlgMeridianData)
    {
        DlgMeridianData->setWindowTitle(QApplication::translate("DlgMeridianData", "Editor de Meridiano", nullptr));
        label->setText(QApplication::translate("DlgMeridianData", "N\303\255vel Meridiano", nullptr));
        label_2->setText(QApplication::translate("DlgMeridianData", "Pontos Restantes", nullptr));
        label_3->setText(QApplication::translate("DlgMeridianData", "Pontos Gastos", nullptr));
        label_4->setText(QApplication::translate("DlgMeridianData", "Refinamentos Gratuitos", nullptr));
        label_5->setText(QApplication::translate("DlgMeridianData", "Refinamentos Pagos", nullptr));
        label_6->setText(QApplication::translate("DlgMeridianData", "Tempo de Login", nullptr));
        label_7->setText(QApplication::translate("DlgMeridianData", "Dias de Login Cont\303\255nuo", nullptr));
        label_8->setText(QApplication::translate("DlgMeridianData", "Mapa Trigrama 1", nullptr));
        label_9->setText(QApplication::translate("DlgMeridianData", "Mapa Trigama 2", nullptr));
        label_10->setText(QApplication::translate("DlgMeridianData", "Mapa Trigrama 3", nullptr));
        btnSave->setText(QApplication::translate("DlgMeridianData", "Confirmar", nullptr));
        btnSave_2->setText(QApplication::translate("DlgMeridianData", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgMeridianData: public Ui_DlgMeridianData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGMERIDIANDATA_H

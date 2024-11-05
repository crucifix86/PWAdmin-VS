/********************************************************************************
** Form generated from reading UI file 'dlgaddcash.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGADDCASH_H
#define UI_DLGADDCASH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgAddCash
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *txtUsuario;
    QLabel *label_2;
    QDoubleSpinBox *txtOuro;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QRadioButton *rdoProtocolo;
    QRadioButton *rdoMysql;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DlgAddCash)
    {
        if (DlgAddCash->objectName().isEmpty())
            DlgAddCash->setObjectName(QString::fromUtf8("DlgAddCash"));
        DlgAddCash->resize(241, 133);
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
        DlgAddCash->setPalette(palette);
        formLayoutWidget = new QWidget(DlgAddCash);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 221, 51));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(2);
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtUsuario = new QDoubleSpinBox(formLayoutWidget);
        txtUsuario->setObjectName(QString::fromUtf8("txtUsuario"));
        txtUsuario->setDecimals(0);
        txtUsuario->setMaximum(9999999999999.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, txtUsuario);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtOuro = new QDoubleSpinBox(formLayoutWidget);
        txtOuro->setObjectName(QString::fromUtf8("txtOuro"));
        txtOuro->setDecimals(0);
        txtOuro->setMaximum(9999999999999.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, txtOuro);

        pushButton = new QPushButton(DlgAddCash);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 90, 110, 31));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 85, 0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        horizontalLayoutWidget = new QWidget(DlgAddCash);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 60, 221, 21));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_3);

        rdoProtocolo = new QRadioButton(horizontalLayoutWidget);
        rdoProtocolo->setObjectName(QString::fromUtf8("rdoProtocolo"));
        rdoProtocolo->setChecked(true);

        horizontalLayout->addWidget(rdoProtocolo);

        rdoMysql = new QRadioButton(horizontalLayoutWidget);
        rdoMysql->setObjectName(QString::fromUtf8("rdoMysql"));
        rdoMysql->setChecked(false);

        horizontalLayout->addWidget(rdoMysql);

        pushButton_2 = new QPushButton(DlgAddCash);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(121, 90, 110, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 0, 0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        retranslateUi(DlgAddCash);

        QMetaObject::connectSlotsByName(DlgAddCash);
    } // setupUi

    void retranslateUi(QDialog *DlgAddCash)
    {
        DlgAddCash->setWindowTitle(QApplication::translate("DlgAddCash", "Enviar OURO", nullptr));
        label->setText(QApplication::translate("DlgAddCash", "ID de usu\303\241rio", nullptr));
        label_2->setText(QApplication::translate("DlgAddCash", "Qtde de OURO", nullptr));
        pushButton->setText(QApplication::translate("DlgAddCash", "Confirmar", nullptr));
        label_3->setText(QApplication::translate("DlgAddCash", "Tipo", nullptr));
        rdoProtocolo->setText(QApplication::translate("DlgAddCash", "Protocolo", nullptr));
        rdoMysql->setText(QApplication::translate("DlgAddCash", "MySQL", nullptr));
        pushButton_2->setText(QApplication::translate("DlgAddCash", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgAddCash: public Ui_DlgAddCash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGADDCASH_H

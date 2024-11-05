/********************************************************************************
** Form generated from reading UI file 'dlgclassmask.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCLASSMASK_H
#define UI_DLGCLASSMASK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgClassMask
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *txt_mask;
    QPushButton *pushButton;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QCheckBox *cb0;
    QCheckBox *cb1;
    QCheckBox *cb4;
    QCheckBox *cb3;
    QCheckBox *cb6;
    QCheckBox *cb5;
    QCheckBox *cb8;
    QCheckBox *cb7;
    QCheckBox *cb2;
    QCheckBox *cb9;
    QCheckBox *cb10;
    QCheckBox *cb13;
    QCheckBox *cb11;
    QCheckBox *cb12;
    QCheckBox *cb14;
    QCheckBox *cb15;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *DlgClassMask)
    {
        if (DlgClassMask->objectName().isEmpty())
            DlgClassMask->setObjectName(QString::fromUtf8("DlgClassMask"));
        DlgClassMask->resize(240, 330);
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
        DlgClassMask->setPalette(palette);
        formLayoutWidget = new QWidget(DlgClassMask);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 221, 25));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txt_mask = new QSpinBox(formLayoutWidget);
        txt_mask->setObjectName(QString::fromUtf8("txt_mask"));
        txt_mask->setMaximum(65535);

        formLayout->setWidget(0, QFormLayout::FieldRole, txt_mask);

        pushButton = new QPushButton(DlgClassMask);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 290, 110, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        formLayoutWidget_2 = new QWidget(DlgClassMask);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 40, 221, 196));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_2->setHorizontalSpacing(40);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        cb0 = new QCheckBox(formLayoutWidget_2);
        cb0->setObjectName(QString::fromUtf8("cb0"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, cb0);

        cb1 = new QCheckBox(formLayoutWidget_2);
        cb1->setObjectName(QString::fromUtf8("cb1"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, cb1);

        cb4 = new QCheckBox(formLayoutWidget_2);
        cb4->setObjectName(QString::fromUtf8("cb4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, cb4);

        cb3 = new QCheckBox(formLayoutWidget_2);
        cb3->setObjectName(QString::fromUtf8("cb3"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, cb3);

        cb6 = new QCheckBox(formLayoutWidget_2);
        cb6->setObjectName(QString::fromUtf8("cb6"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, cb6);

        cb5 = new QCheckBox(formLayoutWidget_2);
        cb5->setObjectName(QString::fromUtf8("cb5"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, cb5);

        cb8 = new QCheckBox(formLayoutWidget_2);
        cb8->setObjectName(QString::fromUtf8("cb8"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, cb8);

        cb7 = new QCheckBox(formLayoutWidget_2);
        cb7->setObjectName(QString::fromUtf8("cb7"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, cb7);

        cb2 = new QCheckBox(formLayoutWidget_2);
        cb2->setObjectName(QString::fromUtf8("cb2"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, cb2);

        cb9 = new QCheckBox(formLayoutWidget_2);
        cb9->setObjectName(QString::fromUtf8("cb9"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, cb9);

        cb10 = new QCheckBox(formLayoutWidget_2);
        cb10->setObjectName(QString::fromUtf8("cb10"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, cb10);

        cb13 = new QCheckBox(formLayoutWidget_2);
        cb13->setObjectName(QString::fromUtf8("cb13"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, cb13);

        cb11 = new QCheckBox(formLayoutWidget_2);
        cb11->setObjectName(QString::fromUtf8("cb11"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, cb11);

        cb12 = new QCheckBox(formLayoutWidget_2);
        cb12->setObjectName(QString::fromUtf8("cb12"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, cb12);

        cb14 = new QCheckBox(formLayoutWidget_2);
        cb14->setObjectName(QString::fromUtf8("cb14"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, cb14);

        cb15 = new QCheckBox(formLayoutWidget_2);
        cb15->setObjectName(QString::fromUtf8("cb15"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, cb15);

        pushButton_2 = new QPushButton(DlgClassMask);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 240, 111, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/CheckButtons_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_3 = new QPushButton(DlgClassMask);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 240, 111, 31));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/None_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_4 = new QPushButton(DlgClassMask);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(121, 290, 110, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);

        retranslateUi(DlgClassMask);

        QMetaObject::connectSlotsByName(DlgClassMask);
    } // setupUi

    void retranslateUi(QDialog *DlgClassMask)
    {
        DlgClassMask->setWindowTitle(QApplication::translate("DlgClassMask", "M\303\241scara de Classe", nullptr));
        label->setText(QApplication::translate("DlgClassMask", "M\303\241scara", nullptr));
        pushButton->setText(QApplication::translate("DlgClassMask", "Confirmar", nullptr));
        cb0->setText(QApplication::translate("DlgClassMask", "Guerreiro", nullptr));
        cb1->setText(QApplication::translate("DlgClassMask", "Mago", nullptr));
        cb4->setText(QApplication::translate("DlgClassMask", "B\303\241rbaro", nullptr));
        cb3->setText(QApplication::translate("DlgClassMask", "Feiticeira", nullptr));
        cb6->setText(QApplication::translate("DlgClassMask", "Arqueiro", nullptr));
        cb5->setText(QApplication::translate("DlgClassMask", "Mercen\303\241rio", nullptr));
        cb8->setText(QApplication::translate("DlgClassMask", "Arcano", nullptr));
        cb7->setText(QApplication::translate("DlgClassMask", "Sacerdote", nullptr));
        cb2->setText(QApplication::translate("DlgClassMask", "Espiritualista", nullptr));
        cb9->setText(QApplication::translate("DlgClassMask", "M\303\255stico", nullptr));
        cb10->setText(QApplication::translate("DlgClassMask", "Retalhador", nullptr));
        cb13->setText(QApplication::translate("DlgClassMask", "Paladino", nullptr));
        cb11->setText(QApplication::translate("DlgClassMask", "Tormentador", nullptr));
        cb12->setText(QApplication::translate("DlgClassMask", "Atiradora", nullptr));
        cb14->setText(QApplication::translate("DlgClassMask", "Macaco", nullptr));
        cb15->setText(QApplication::translate("DlgClassMask", "Bardo", nullptr));
        pushButton_2->setText(QApplication::translate("DlgClassMask", "Marcar Todos", nullptr));
        pushButton_3->setText(QApplication::translate("DlgClassMask", "Desmarcar Todos", nullptr));
        pushButton_4->setText(QApplication::translate("DlgClassMask", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgClassMask: public Ui_DlgClassMask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGCLASSMASK_H

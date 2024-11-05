/********************************************************************************
** Form generated from reading UI file 'dlgmanagment.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGMANAGMENT_H
#define UI_DLGMANAGMENT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgManagment
{
public:
    QGroupBox *groupBox;
    QLabel *label_20;
    QDoubleSpinBox *txtExp;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QCheckBox *checkComercio;
    QCheckBox *checkLeilao;
    QCheckBox *checkFaction;
    QCheckBox *checkLambda;
    QCheckBox *checkNegociacao;
    QCheckBox *checkCorreio;
    QCheckBox *checkDinheiro;
    QCheckBox *checkDrop;
    QCheckBox *checkAlma;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QPushButton *pushButton_2;
    QCheckBox *force;

    void setupUi(QDialog *DlgManagment)
    {
        if (DlgManagment->objectName().isEmpty())
            DlgManagment->setObjectName(QString::fromUtf8("DlgManagment"));
        DlgManagment->resize(328, 308);
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
        DlgManagment->setPalette(palette);
        groupBox = new QGroupBox(DlgManagment);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 311, 111));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 80, 18, 22));
        txtExp = new QDoubleSpinBox(groupBox);
        txtExp->setObjectName(QString::fromUtf8("txtExp"));
        txtExp->setGeometry(QRect(30, 81, 61, 22));
        txtExp->setInputMethodHints(Qt::ImhNone);
        txtExp->setWrapping(false);
        txtExp->setFrame(true);
        txtExp->setAlignment(Qt::AlignCenter);
        txtExp->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        txtExp->setKeyboardTracking(true);
        txtExp->setProperty("showGroupSeparator", QVariant(false));
        txtExp->setDecimals(1);
        txtExp->setMinimum(1.000000000000000);
        txtExp->setMaximum(20.000000000000000);
        txtExp->setSingleStep(0.500000000000000);
        gridLayoutWidget_2 = new QWidget(groupBox);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 291, 63));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        checkComercio = new QCheckBox(gridLayoutWidget_2);
        checkComercio->setObjectName(QString::fromUtf8("checkComercio"));

        gridLayout_2->addWidget(checkComercio, 1, 0, 1, 1);

        checkLeilao = new QCheckBox(gridLayoutWidget_2);
        checkLeilao->setObjectName(QString::fromUtf8("checkLeilao"));

        gridLayout_2->addWidget(checkLeilao, 1, 1, 1, 1);

        checkFaction = new QCheckBox(gridLayoutWidget_2);
        checkFaction->setObjectName(QString::fromUtf8("checkFaction"));

        gridLayout_2->addWidget(checkFaction, 0, 1, 1, 1);

        checkLambda = new QCheckBox(gridLayoutWidget_2);
        checkLambda->setObjectName(QString::fromUtf8("checkLambda"));

        gridLayout_2->addWidget(checkLambda, 0, 0, 1, 1);

        checkNegociacao = new QCheckBox(gridLayoutWidget_2);
        checkNegociacao->setObjectName(QString::fromUtf8("checkNegociacao"));

        gridLayout_2->addWidget(checkNegociacao, 0, 2, 1, 1);

        checkCorreio = new QCheckBox(gridLayoutWidget_2);
        checkCorreio->setObjectName(QString::fromUtf8("checkCorreio"));

        gridLayout_2->addWidget(checkCorreio, 1, 2, 1, 1);

        checkDinheiro = new QCheckBox(gridLayoutWidget_2);
        checkDinheiro->setObjectName(QString::fromUtf8("checkDinheiro"));

        gridLayout_2->addWidget(checkDinheiro, 2, 0, 1, 1);

        checkDrop = new QCheckBox(gridLayoutWidget_2);
        checkDrop->setObjectName(QString::fromUtf8("checkDrop"));

        gridLayout_2->addWidget(checkDrop, 2, 1, 1, 1);

        checkAlma = new QCheckBox(gridLayoutWidget_2);
        checkAlma->setObjectName(QString::fromUtf8("checkAlma"));

        gridLayout_2->addWidget(checkAlma, 2, 2, 1, 1);

        pushButton = new QPushButton(DlgManagment);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 210, 151, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/basic_foundation/scroll_run.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));
        progressBar = new QProgressBar(DlgManagment);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 180, 301, 23));
        progressBar->setValue(0);
        pushButton_2 = new QPushButton(DlgManagment);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 210, 151, 51));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconpack/basic_foundation/scroll_stop.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(32, 32));
        force = new QCheckBox(DlgManagment);
        force->setObjectName(QString::fromUtf8("force"));
        force->setGeometry(QRect(10, 270, 301, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush9(QColor(154, 154, 154, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush9);
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
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
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
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
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
        force->setPalette(palette1);
        force->setChecked(true);

        retranslateUi(DlgManagment);

        QMetaObject::connectSlotsByName(DlgManagment);
    } // setupUi

    void retranslateUi(QDialog *DlgManagment)
    {
        DlgManagment->setWindowTitle(QApplication::translate("DlgManagment", "Gerenciamento do Servidor", nullptr));
        groupBox->setTitle(QApplication::translate("DlgManagment", "Atributos", nullptr));
        label_20->setText(QApplication::translate("DlgManagment", "Exp", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        txtExp->setAccessibleName(QApplication::translate("DlgManagment", "204", nullptr));
#endif // QT_NO_ACCESSIBILITY
        txtExp->setSpecialValueText(QString());
        txtExp->setPrefix(QString());
        txtExp->setSuffix(QString());
#ifndef QT_NO_ACCESSIBILITY
        checkComercio->setAccessibleName(QApplication::translate("DlgManagment", "214", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkComercio->setText(QApplication::translate("DlgManagment", "Com\303\251rcio Off", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkLeilao->setAccessibleName(QApplication::translate("DlgManagment", "208", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkLeilao->setText(QApplication::translate("DlgManagment", "Leil\303\243o Off", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkFaction->setAccessibleName(QApplication::translate("DlgManagment", "210", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkFaction->setText(QApplication::translate("DlgManagment", "Fac\303\247\303\243o Off", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkLambda->setAccessibleName(QApplication::translate("DlgManagment", "205", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkLambda->setText(QApplication::translate("DlgManagment", "Lambda Off", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkNegociacao->setAccessibleName(QApplication::translate("DlgManagment", "207", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkNegociacao->setText(QApplication::translate("DlgManagment", "Negocia\303\247\303\243o Off", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkCorreio->setAccessibleName(QApplication::translate("DlgManagment", "209", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkCorreio->setText(QApplication::translate("DlgManagment", "Correio Off", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkDinheiro->setAccessibleName(QApplication::translate("DlgManagment", "211", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkDinheiro->setText(QApplication::translate("DlgManagment", "2x Dinheiro", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkDrop->setAccessibleName(QApplication::translate("DlgManagment", "212", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkDrop->setText(QApplication::translate("DlgManagment", "2x Drop", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        checkAlma->setAccessibleName(QApplication::translate("DlgManagment", "213", nullptr));
#endif // QT_NO_ACCESSIBILITY
        checkAlma->setText(QApplication::translate("DlgManagment", "2x Alma", nullptr));
        pushButton->setText(QApplication::translate("DlgManagment", "Iniciar Servidor", nullptr));
        pushButton_2->setText(QApplication::translate("DlgManagment", "Parar Servidor", nullptr));
        force->setText(QApplication::translate("DlgManagment", "For\303\247ar o logout de todos antes de parar o servidor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgManagment: public Ui_DlgManagment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGMANAGMENT_H

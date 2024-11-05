/********************************************************************************
** Form generated from reading UI file 'dlgteste.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGTESTE_H
#define UI_DLGTESTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DlgTeste
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *DlgTeste)
    {
        if (DlgTeste->objectName().isEmpty())
            DlgTeste->setObjectName(QString::fromUtf8("DlgTeste"));
        DlgTeste->resize(542, 315);
        pushButton = new QPushButton(DlgTeste);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 250, 211, 51));
        lineEdit = new QLineEdit(DlgTeste);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 30, 471, 21));

        retranslateUi(DlgTeste);

        QMetaObject::connectSlotsByName(DlgTeste);
    } // setupUi

    void retranslateUi(QDialog *DlgTeste)
    {
        DlgTeste->setWindowTitle(QApplication::translate("DlgTeste", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("DlgTeste", "PushButton", nullptr));
        lineEdit->setText(QApplication::translate("DlgTeste", "E:\\Cliente 173- Traduzido PT-BR\\element\\configs.pck", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgTeste: public Ui_DlgTeste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGTESTE_H

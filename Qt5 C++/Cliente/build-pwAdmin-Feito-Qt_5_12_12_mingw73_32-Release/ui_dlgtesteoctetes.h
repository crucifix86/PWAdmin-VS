/********************************************************************************
** Form generated from reading UI file 'dlgtesteoctetes.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGTESTEOCTETES_H
#define UI_DLGTESTEOCTETES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DlgTesteOctetes
{
public:
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *DlgTesteOctetes)
    {
        if (DlgTesteOctetes->objectName().isEmpty())
            DlgTesteOctetes->setObjectName(QString::fromUtf8("DlgTesteOctetes"));
        DlgTesteOctetes->resize(517, 356);
        plainTextEdit = new QPlainTextEdit(DlgTesteOctetes);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 20, 471, 101));
        pushButton = new QPushButton(DlgTesteOctetes);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 140, 80, 21));

        retranslateUi(DlgTesteOctetes);

        QMetaObject::connectSlotsByName(DlgTesteOctetes);
    } // setupUi

    void retranslateUi(QDialog *DlgTesteOctetes)
    {
        DlgTesteOctetes->setWindowTitle(QApplication::translate("DlgTesteOctetes", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("DlgTesteOctetes", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgTesteOctetes: public Ui_DlgTesteOctetes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGTESTEOCTETES_H

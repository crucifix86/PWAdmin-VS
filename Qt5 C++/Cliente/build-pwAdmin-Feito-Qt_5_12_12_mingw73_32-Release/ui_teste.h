/********************************************************************************
** Form generated from reading UI file 'teste.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTE_H
#define UI_TESTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Teste
{
public:
    QPushButton *pushButton;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *Teste)
    {
        if (Teste->objectName().isEmpty())
            Teste->setObjectName(QString::fromUtf8("Teste"));
        Teste->resize(945, 642);
        pushButton = new QPushButton(Teste);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 20, 91, 21));
        comboBox = new QComboBox(Teste);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 20, 171, 22));
        pushButton_2 = new QPushButton(Teste);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 20, 80, 21));
        scrollArea = new QScrollArea(Teste);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(40, 90, 841, 501));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 839, 499));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Teste);

        QMetaObject::connectSlotsByName(Teste);
    } // setupUi

    void retranslateUi(QDialog *Teste)
    {
        Teste->setWindowTitle(QApplication::translate("Teste", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Teste", "Carregar Mapas", nullptr));
        pushButton_2->setText(QApplication::translate("Teste", "Ver Mapa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Teste: public Ui_Teste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTE_H

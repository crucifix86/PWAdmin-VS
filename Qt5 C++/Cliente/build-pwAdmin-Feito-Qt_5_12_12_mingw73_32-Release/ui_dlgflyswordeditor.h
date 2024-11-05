/********************************************************************************
** Form generated from reading UI file 'dlgflyswordeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGFLYSWORDEDITOR_H
#define UI_DLGFLYSWORDEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgFlyswordEditor
{
public:
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txt_cur_time;
    QLabel *label_11;
    QLineEdit *txt_max_time;
    QLabel *label_2;
    QLineEdit *txt_require_level;
    QLabel *label_3;
    QLineEdit *txt_level;
    QLabel *label_4;
    QLineEdit *txt_require_class;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *txt_time_per_element;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *txt_speed_increase;
    QLabel *label_12;
    QLineEdit *txt_speed_increase2;
    QLabel *label_8;
    QLineEdit *txt_make_flag;
    QLabel *label_9;
    QLineEdit *txt_make_name;
    QLabel *label_10;
    QLineEdit *txt_crc;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DlgFlyswordEditor)
    {
        if (DlgFlyswordEditor->objectName().isEmpty())
            DlgFlyswordEditor->setObjectName(QString::fromUtf8("DlgFlyswordEditor"));
        DlgFlyswordEditor->resize(329, 332);
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
        DlgFlyswordEditor->setPalette(palette);
        pushButton = new QPushButton(DlgFlyswordEditor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 290, 151, 30));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: {255,255,255};"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        formLayoutWidget = new QWidget(DlgFlyswordEditor);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 308, 271));
        gridLayout = new QGridLayout(formLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 22));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        txt_cur_time = new QLineEdit(formLayoutWidget);
        txt_cur_time->setObjectName(QString::fromUtf8("txt_cur_time"));
        txt_cur_time->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(txt_cur_time);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout->addWidget(label_11);

        txt_max_time = new QLineEdit(formLayoutWidget);
        txt_max_time->setObjectName(QString::fromUtf8("txt_max_time"));
        txt_max_time->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(txt_max_time);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txt_require_level = new QLineEdit(formLayoutWidget);
        txt_require_level->setObjectName(QString::fromUtf8("txt_require_level"));
        txt_require_level->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_require_level, 1, 1, 1, 1);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        txt_level = new QLineEdit(formLayoutWidget);
        txt_level->setObjectName(QString::fromUtf8("txt_level"));
        txt_level->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_level, 2, 1, 1, 1);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        txt_require_class = new QLineEdit(formLayoutWidget);
        txt_require_class->setObjectName(QString::fromUtf8("txt_require_class"));
        txt_require_class->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_require_class, 3, 1, 1, 1);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 22));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));

        gridLayout->addWidget(label_6, 4, 1, 1, 1);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        txt_time_per_element = new QLineEdit(formLayoutWidget);
        txt_time_per_element->setObjectName(QString::fromUtf8("txt_time_per_element"));
        txt_time_per_element->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_time_per_element, 5, 1, 1, 1);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        txt_speed_increase = new QLineEdit(formLayoutWidget);
        txt_speed_increase->setObjectName(QString::fromUtf8("txt_speed_increase"));
        txt_speed_increase->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(txt_speed_increase);

        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_2->addWidget(label_12);

        txt_speed_increase2 = new QLineEdit(formLayoutWidget);
        txt_speed_increase2->setObjectName(QString::fromUtf8("txt_speed_increase2"));
        txt_speed_increase2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(txt_speed_increase2);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 1);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 22));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        txt_make_flag = new QLineEdit(formLayoutWidget);
        txt_make_flag->setObjectName(QString::fromUtf8("txt_make_flag"));
        txt_make_flag->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_make_flag, 7, 1, 1, 1);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        txt_make_name = new QLineEdit(formLayoutWidget);
        txt_make_name->setObjectName(QString::fromUtf8("txt_make_name"));
        txt_make_name->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_make_name, 8, 1, 1, 1);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        txt_crc = new QLineEdit(formLayoutWidget);
        txt_crc->setObjectName(QString::fromUtf8("txt_crc"));
        txt_crc->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(txt_crc, 9, 1, 1, 1);

        pushButton_2 = new QPushButton(DlgFlyswordEditor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 290, 151, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"color: {255,255,255};"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        retranslateUi(DlgFlyswordEditor);

        QMetaObject::connectSlotsByName(DlgFlyswordEditor);
    } // setupUi

    void retranslateUi(QDialog *DlgFlyswordEditor)
    {
        DlgFlyswordEditor->setWindowTitle(QApplication::translate("DlgFlyswordEditor", "Editor de V\303\264o", nullptr));
        pushButton->setText(QApplication::translate("DlgFlyswordEditor", "Confirmar", nullptr));
        label->setText(QApplication::translate("DlgFlyswordEditor", "Tempo de V\303\264o", nullptr));
        label_11->setText(QApplication::translate("DlgFlyswordEditor", "/", nullptr));
        label_2->setText(QApplication::translate("DlgFlyswordEditor", "N\303\255vel Requerido", nullptr));
        label_3->setText(QApplication::translate("DlgFlyswordEditor", "N\303\255vel", nullptr));
        label_4->setText(QApplication::translate("DlgFlyswordEditor", "Classe Requerida", nullptr));
        label_6->setText(QApplication::translate("DlgFlyswordEditor", "|", nullptr));
        label_5->setText(QApplication::translate("DlgFlyswordEditor", "Tempo por Elemento", nullptr));
        label_7->setText(QApplication::translate("DlgFlyswordEditor", "B\303\264nus Velocidade", nullptr));
        label_12->setText(QApplication::translate("DlgFlyswordEditor", "/", nullptr));
        label_8->setText(QApplication::translate("DlgFlyswordEditor", "M\303\251todo de Cria\303\247\303\243o", nullptr));
        label_9->setText(QApplication::translate("DlgFlyswordEditor", "Criado por", nullptr));
        label_10->setText(QApplication::translate("DlgFlyswordEditor", "Crc", nullptr));
        pushButton_2->setText(QApplication::translate("DlgFlyswordEditor", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgFlyswordEditor: public Ui_DlgFlyswordEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGFLYSWORDEDITOR_H

/********************************************************************************
** Form generated from reading UI file 'dlgcooldowneditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCOOLDOWNEDITOR_H
#define UI_DLGCOOLDOWNEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgCooldownEditor
{
public:
    QTableWidget *tableWidget;
    QPushButton *btn_slot_add;
    QPushButton *btn_slot_delete;
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *txt_timestamp;
    QLabel *txt_timestamp_label;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *txt_time;
    QLabel *txt_time_label;
    QLabel *label_6;
    QDoubleSpinBox *txt_id;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *txt_interval;
    QLabel *txt_interval_label;
    QPushButton *btnClose;

    void setupUi(QDialog *DlgCooldownEditor)
    {
        if (DlgCooldownEditor->objectName().isEmpty())
            DlgCooldownEditor->setObjectName(QString::fromUtf8("DlgCooldownEditor"));
        DlgCooldownEditor->resize(479, 242);
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
        DlgCooldownEditor->setPalette(palette);
        tableWidget = new QTableWidget(DlgCooldownEditor);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(330, 10, 101, 181));
        tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        btn_slot_add = new QPushButton(DlgCooldownEditor);
        btn_slot_add->setObjectName(QString::fromUtf8("btn_slot_add"));
        btn_slot_add->setGeometry(QRect(440, 10, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Add_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_slot_add->setIcon(icon);
        btn_slot_add->setIconSize(QSize(28, 28));
        btn_slot_delete = new QPushButton(DlgCooldownEditor);
        btn_slot_delete->setObjectName(QString::fromUtf8("btn_slot_delete"));
        btn_slot_delete->setGeometry(QRect(440, 40, 31, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Cancel_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_slot_delete->setIcon(icon1);
        btn_slot_delete->setIconSize(QSize(28, 28));
        pushButton = new QPushButton(DlgCooldownEditor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 200, 311, 31));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 85, 0);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        formLayoutWidget = new QWidget(DlgCooldownEditor);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 311, 181));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txt_timestamp = new QDoubleSpinBox(formLayoutWidget);
        txt_timestamp->setObjectName(QString::fromUtf8("txt_timestamp"));
        txt_timestamp->setMaximumSize(QSize(99, 16777215));
        txt_timestamp->setDecimals(0);
        txt_timestamp->setMaximum(999999999999.000000000000000);

        horizontalLayout->addWidget(txt_timestamp);

        txt_timestamp_label = new QLabel(formLayoutWidget);
        txt_timestamp_label->setObjectName(QString::fromUtf8("txt_timestamp_label"));
        txt_timestamp_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 170);"));

        horizontalLayout->addWidget(txt_timestamp_label);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        txt_time = new QDoubleSpinBox(formLayoutWidget);
        txt_time->setObjectName(QString::fromUtf8("txt_time"));
        txt_time->setMaximumSize(QSize(99, 16777215));
        txt_time->setDecimals(0);
        txt_time->setMaximum(999999999999.000000000000000);

        horizontalLayout_2->addWidget(txt_time);

        txt_time_label = new QLabel(formLayoutWidget);
        txt_time_label->setObjectName(QString::fromUtf8("txt_time_label"));
        txt_time_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 170);"));

        horizontalLayout_2->addWidget(txt_time_label);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_2);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        txt_id = new QDoubleSpinBox(formLayoutWidget);
        txt_id->setObjectName(QString::fromUtf8("txt_id"));
        txt_id->setMaximumSize(QSize(99, 16777215));
        txt_id->setDecimals(0);
        txt_id->setMaximum(999999999999.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, txt_id);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        txt_interval = new QDoubleSpinBox(formLayoutWidget);
        txt_interval->setObjectName(QString::fromUtf8("txt_interval"));
        txt_interval->setMaximumSize(QSize(99, 16777215));
        txt_interval->setDecimals(0);
        txt_interval->setMaximum(999999999999.000000000000000);

        horizontalLayout_3->addWidget(txt_interval);

        txt_interval_label = new QLabel(formLayoutWidget);
        txt_interval_label->setObjectName(QString::fromUtf8("txt_interval_label"));
        txt_interval_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 170);"));

        horizontalLayout_3->addWidget(txt_interval_label);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        btnClose = new QPushButton(DlgCooldownEditor);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(330, 200, 141, 31));
        btnClose->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 0, 0);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon3);

        retranslateUi(DlgCooldownEditor);

        QMetaObject::connectSlotsByName(DlgCooldownEditor);
    } // setupUi

    void retranslateUi(QDialog *DlgCooldownEditor)
    {
        DlgCooldownEditor->setWindowTitle(QApplication::translate("DlgCooldownEditor", "Editor de Tempo de Espera", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DlgCooldownEditor", "ID", nullptr));
        btn_slot_add->setText(QString());
        btn_slot_delete->setText(QString());
        pushButton->setText(QApplication::translate("DlgCooldownEditor", "Confirmar", nullptr));
        label->setText(QApplication::translate("DlgCooldownEditor", "Acaba em", nullptr));
        txt_timestamp_label->setText(QApplication::translate("DlgCooldownEditor", "|", nullptr));
        label_3->setText(QApplication::translate("DlgCooldownEditor", "Restam", nullptr));
        label_4->setText(QApplication::translate("DlgCooldownEditor", "Dura\303\247\303\243o", nullptr));
        txt_time->setSuffix(QApplication::translate("DlgCooldownEditor", " seg.", nullptr));
        txt_time_label->setText(QApplication::translate("DlgCooldownEditor", "|", nullptr));
        label_6->setText(QApplication::translate("DlgCooldownEditor", "ID", nullptr));
        txt_interval_label->setText(QApplication::translate("DlgCooldownEditor", "|", nullptr));
        btnClose->setText(QApplication::translate("DlgCooldownEditor", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgCooldownEditor: public Ui_DlgCooldownEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGCOOLDOWNEDITOR_H

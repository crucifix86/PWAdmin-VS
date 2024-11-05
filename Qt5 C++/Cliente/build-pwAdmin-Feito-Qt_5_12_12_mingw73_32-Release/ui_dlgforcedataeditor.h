/********************************************************************************
** Form generated from reading UI file 'dlgforcedataeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGFORCEDATAEDITOR_H
#define UI_DLGFORCEDATAEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgForceDataEditor
{
public:
    QTableWidget *tableWidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpinBox *txtOrdemAtual;
    QPushButton *btn_search;
    QLabel *txtOrdemAtualLabel;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QFormLayout *formLayout_4;
    QSpinBox *txtOrdem;
    QLabel *txtOrdemLabel;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_5;
    QLabel *label_5;
    QSpinBox *txtPrestigio;
    QLabel *label_6;
    QSpinBox *txtContribuicao;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *txtR1;
    QLineEdit *txtR2;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *txtR3;
    QLineEdit *txtR4;
    QLineEdit *txtR5;
    QLineEdit *txtR6;
    QLineEdit *txtR7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *btn_add;
    QPushButton *btn_delete;

    void setupUi(QDialog *DlgForceDataEditor)
    {
        if (DlgForceDataEditor->objectName().isEmpty())
            DlgForceDataEditor->setObjectName(QString::fromUtf8("DlgForceDataEditor"));
        DlgForceDataEditor->resize(293, 417);
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
        DlgForceDataEditor->setPalette(palette);
        tableWidget = new QTableWidget(DlgForceDataEditor);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 40, 251, 141));
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setAutoScroll(true);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        formLayoutWidget = new QWidget(DlgForceDataEditor);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 271, 28));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txtOrdemAtual = new QSpinBox(formLayoutWidget);
        txtOrdemAtual->setObjectName(QString::fromUtf8("txtOrdemAtual"));
        txtOrdemAtual->setMinimumSize(QSize(75, 0));
        txtOrdemAtual->setMaximumSize(QSize(75, 16777215));
        txtOrdemAtual->setMaximum(999999999);

        horizontalLayout->addWidget(txtOrdemAtual);

        btn_search = new QPushButton(formLayoutWidget);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));
        btn_search->setMaximumSize(QSize(22, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Zoom_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_search->setIcon(icon);

        horizontalLayout->addWidget(btn_search);

        txtOrdemAtualLabel = new QLabel(formLayoutWidget);
        txtOrdemAtualLabel->setObjectName(QString::fromUtf8("txtOrdemAtualLabel"));

        horizontalLayout->addWidget(txtOrdemAtualLabel);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        formLayoutWidget_3 = new QWidget(DlgForceDataEditor);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(10, 190, 271, 31));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        txtOrdem = new QSpinBox(formLayoutWidget_3);
        txtOrdem->setObjectName(QString::fromUtf8("txtOrdem"));
        txtOrdem->setMinimumSize(QSize(75, 0));
        txtOrdem->setMaximumSize(QSize(75, 16777215));
        txtOrdem->setMaximum(999999999);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, txtOrdem);

        txtOrdemLabel = new QLabel(formLayoutWidget_3);
        txtOrdemLabel->setObjectName(QString::fromUtf8("txtOrdemLabel"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, txtOrdemLabel);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, formLayout_4);

        formLayoutWidget_4 = new QWidget(DlgForceDataEditor);
        formLayoutWidget_4->setObjectName(QString::fromUtf8("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(10, 220, 138, 141));
        formLayout_5 = new QFormLayout(formLayoutWidget_4);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(formLayoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_5);

        txtPrestigio = new QSpinBox(formLayoutWidget_4);
        txtPrestigio->setObjectName(QString::fromUtf8("txtPrestigio"));
        txtPrestigio->setMaximum(999999999);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, txtPrestigio);

        label_6 = new QLabel(formLayoutWidget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_6);

        txtContribuicao = new QSpinBox(formLayoutWidget_4);
        txtContribuicao->setObjectName(QString::fromUtf8("txtContribuicao"));
        txtContribuicao->setMaximum(999999999);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, txtContribuicao);

        label_7 = new QLabel(formLayoutWidget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formLayoutWidget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_8);

        txtR1 = new QLineEdit(formLayoutWidget_4);
        txtR1->setObjectName(QString::fromUtf8("txtR1"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, txtR1);

        txtR2 = new QLineEdit(formLayoutWidget_4);
        txtR2->setObjectName(QString::fromUtf8("txtR2"));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, txtR2);

        formLayoutWidget_5 = new QWidget(DlgForceDataEditor);
        formLayoutWidget_5->setObjectName(QString::fromUtf8("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(150, 220, 131, 141));
        formLayout_6 = new QFormLayout(formLayoutWidget_5);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(formLayoutWidget_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(formLayoutWidget_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(formLayoutWidget_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(formLayoutWidget_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(formLayoutWidget_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_6->setWidget(4, QFormLayout::LabelRole, label_13);

        txtR3 = new QLineEdit(formLayoutWidget_5);
        txtR3->setObjectName(QString::fromUtf8("txtR3"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, txtR3);

        txtR4 = new QLineEdit(formLayoutWidget_5);
        txtR4->setObjectName(QString::fromUtf8("txtR4"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, txtR4);

        txtR5 = new QLineEdit(formLayoutWidget_5);
        txtR5->setObjectName(QString::fromUtf8("txtR5"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, txtR5);

        txtR6 = new QLineEdit(formLayoutWidget_5);
        txtR6->setObjectName(QString::fromUtf8("txtR6"));

        formLayout_6->setWidget(3, QFormLayout::FieldRole, txtR6);

        txtR7 = new QLineEdit(formLayoutWidget_5);
        txtR7->setObjectName(QString::fromUtf8("txtR7"));

        formLayout_6->setWidget(4, QFormLayout::FieldRole, txtR7);

        pushButton = new QPushButton(DlgForceDataEditor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 370, 131, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0,85, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton_2 = new QPushButton(DlgForceDataEditor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 370, 131, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85,0, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        btn_add = new QPushButton(DlgForceDataEditor);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setGeometry(QRect(260, 40, 32, 32));
        btn_add->setMaximumSize(QSize(32, 32));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/Add_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_add->setIcon(icon3);
        btn_add->setIconSize(QSize(28, 28));
        btn_delete = new QPushButton(DlgForceDataEditor);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setGeometry(QRect(260, 72, 32, 32));
        btn_delete->setMaximumSize(QSize(32, 32));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/Cancel_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_delete->setIcon(icon4);
        btn_delete->setIconSize(QSize(28, 28));

        retranslateUi(DlgForceDataEditor);

        QMetaObject::connectSlotsByName(DlgForceDataEditor);
    } // setupUi

    void retranslateUi(QDialog *DlgForceDataEditor)
    {
        DlgForceDataEditor->setWindowTitle(QApplication::translate("DlgForceDataEditor", "Editor de Ordem", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DlgForceDataEditor", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DlgForceDataEditor", "Nome", nullptr));
        label->setText(QApplication::translate("DlgForceDataEditor", "Ordem Atual", nullptr));
        btn_search->setText(QString());
        txtOrdemAtualLabel->setText(QApplication::translate("DlgForceDataEditor", "|", nullptr));
        label_3->setText(QApplication::translate("DlgForceDataEditor", "Ordem", nullptr));
        txtOrdemLabel->setText(QApplication::translate("DlgForceDataEditor", "|", nullptr));
        label_5->setText(QApplication::translate("DlgForceDataEditor", "Prest\303\255gio", nullptr));
        label_6->setText(QApplication::translate("DlgForceDataEditor", "Contrib.", nullptr));
        label_7->setText(QApplication::translate("DlgForceDataEditor", "reserved1", nullptr));
        label_8->setText(QApplication::translate("DlgForceDataEditor", "reserved2", nullptr));
        label_9->setText(QApplication::translate("DlgForceDataEditor", "reserved3", nullptr));
        label_10->setText(QApplication::translate("DlgForceDataEditor", "reserved4", nullptr));
        label_11->setText(QApplication::translate("DlgForceDataEditor", "reserved5", nullptr));
        label_12->setText(QApplication::translate("DlgForceDataEditor", "reserved6", nullptr));
        label_13->setText(QApplication::translate("DlgForceDataEditor", "reserved7", nullptr));
        pushButton->setText(QApplication::translate("DlgForceDataEditor", "Confirmar", nullptr));
        pushButton_2->setText(QApplication::translate("DlgForceDataEditor", "Fechar", nullptr));
        btn_add->setText(QString());
        btn_delete->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DlgForceDataEditor: public Ui_DlgForceDataEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGFORCEDATAEDITOR_H

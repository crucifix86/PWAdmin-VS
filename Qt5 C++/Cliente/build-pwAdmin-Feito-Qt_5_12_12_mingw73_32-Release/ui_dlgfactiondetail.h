/********************************************************************************
** Form generated from reading UI file 'dlgfactiondetail.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGFACTIONDETAIL_H
#define UI_DLGFACTIONDETAIL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgFactionDetail
{
public:
    QGroupBox *groupBox;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *txtId;
    QLabel *label_3;
    QDoubleSpinBox *txtNivel;
    QLabel *label_4;
    QDoubleSpinBox *txtMarechal;
    QLabel *label_7;
    QDoubleSpinBox *txtUltOp;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLabel *label_5;
    QPlainTextEdit *txtDescricao;
    QFormLayout *formLayout_3;
    QLineEdit *txtNome;
    QFormLayout *formLayout_4;
    QLabel *label_6;
    QLineEdit *txtSysinfo;
    QGroupBox *groupBox_3;
    QTableWidget *tabelaMembros;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *DlgFactionDetail)
    {
        if (DlgFactionDetail->objectName().isEmpty())
            DlgFactionDetail->setObjectName(QString::fromUtf8("DlgFactionDetail"));
        DlgFactionDetail->resize(1143, 588);
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
        DlgFactionDetail->setPalette(palette);
        groupBox = new QGroupBox(DlgFactionDetail);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 241, 571));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(5, 23, 231, 541));
        QFont font;
        font.setPointSize(8);
        tableWidget->setFont(font);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(false);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setMinimumSectionSize(40);
        tableWidget->horizontalHeader()->setDefaultSectionSize(40);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        groupBox_2 = new QGroupBox(DlgFactionDetail);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(260, 10, 871, 141));
        formLayoutWidget = new QWidget(groupBox_2);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 151, 112));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtId = new QDoubleSpinBox(formLayoutWidget);
        txtId->setObjectName(QString::fromUtf8("txtId"));
        txtId->setDecimals(0);
        txtId->setMaximum(99999999999.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, txtId);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        txtNivel = new QDoubleSpinBox(formLayoutWidget);
        txtNivel->setObjectName(QString::fromUtf8("txtNivel"));
        txtNivel->setDecimals(0);
        txtNivel->setMaximum(99999999999.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, txtNivel);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        txtMarechal = new QDoubleSpinBox(formLayoutWidget);
        txtMarechal->setObjectName(QString::fromUtf8("txtMarechal"));
        txtMarechal->setDecimals(0);
        txtMarechal->setMaximum(99999999999.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, txtMarechal);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        txtUltOp = new QDoubleSpinBox(formLayoutWidget);
        txtUltOp->setObjectName(QString::fromUtf8("txtUltOp"));
        txtUltOp->setDecimals(0);
        txtUltOp->setMaximum(99999999999.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, txtUltOp);

        formLayoutWidget_2 = new QWidget(groupBox_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(170, 20, 601, 111));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        txtDescricao = new QPlainTextEdit(formLayoutWidget_2);
        txtDescricao->setObjectName(QString::fromUtf8("txtDescricao"));
        txtDescricao->setMaximumSize(QSize(1000, 77));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, txtDescricao);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFormAlignment(Qt::AlignCenter);
        txtNome = new QLineEdit(formLayoutWidget_2);
        txtNome->setObjectName(QString::fromUtf8("txtNome"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, txtNome);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFormAlignment(Qt::AlignCenter);
        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_6);

        txtSysinfo = new QLineEdit(formLayoutWidget_2);
        txtSysinfo->setObjectName(QString::fromUtf8("txtSysinfo"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, txtSysinfo);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, formLayout_4);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, formLayout_3);

        groupBox_3 = new QGroupBox(DlgFactionDetail);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(260, 160, 871, 231));
        tabelaMembros = new QTableWidget(groupBox_3);
        if (tabelaMembros->columnCount() < 14)
            tabelaMembros->setColumnCount(14);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabelaMembros->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabelaMembros->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabelaMembros->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabelaMembros->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabelaMembros->setHorizontalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabelaMembros->setHorizontalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabelaMembros->setHorizontalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tabelaMembros->setHorizontalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tabelaMembros->setHorizontalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tabelaMembros->setHorizontalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tabelaMembros->setHorizontalHeaderItem(10, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tabelaMembros->setHorizontalHeaderItem(11, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tabelaMembros->setHorizontalHeaderItem(12, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tabelaMembros->setHorizontalHeaderItem(13, __qtablewidgetitem15);
        tabelaMembros->setObjectName(QString::fromUtf8("tabelaMembros"));
        tabelaMembros->setGeometry(QRect(5, 23, 861, 201));
        tabelaMembros->setSelectionMode(QAbstractItemView::MultiSelection);
        tabelaMembros->setSelectionBehavior(QAbstractItemView::SelectRows);
        tabelaMembros->horizontalHeader()->setDefaultSectionSize(90);
        tabelaMembros->horizontalHeader()->setStretchLastSection(true);
        pushButton_2 = new QPushButton(DlgFactionDetail);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 400, 151, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/NewMail_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_3 = new QPushButton(DlgFactionDetail);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(410, 400, 181, 31));
        pushButton_3->setIcon(icon);
        pushButton_5 = new QPushButton(DlgFactionDetail);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(260, 430, 151, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/coins.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon1);
        pushButton_6 = new QPushButton(DlgFactionDetail);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(410, 430, 181, 31));
        pushButton_6->setIcon(icon1);

        retranslateUi(DlgFactionDetail);

        QMetaObject::connectSlotsByName(DlgFactionDetail);
    } // setupUi

    void retranslateUi(QDialog *DlgFactionDetail)
    {
        DlgFactionDetail->setWindowTitle(QApplication::translate("DlgFactionDetail", "Gerenciamento de Cl\303\243s", nullptr));
        groupBox->setTitle(QApplication::translate("DlgFactionDetail", "Lista de Cl\303\243s", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DlgFactionDetail", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DlgFactionDetail", "Nome", nullptr));
        groupBox_2->setTitle(QApplication::translate("DlgFactionDetail", "Informa\303\247\303\265es do Cl\303\243", nullptr));
        label->setText(QApplication::translate("DlgFactionDetail", "ID", nullptr));
        label_3->setText(QApplication::translate("DlgFactionDetail", "N\303\255vel", nullptr));
        label_4->setText(QApplication::translate("DlgFactionDetail", "Marechal", nullptr));
        label_7->setText(QApplication::translate("DlgFactionDetail", "Ult. Op.", nullptr));
        label_2->setText(QApplication::translate("DlgFactionDetail", "Nome", nullptr));
        label_5->setText(QApplication::translate("DlgFactionDetail", "Descri\303\247\303\243o", nullptr));
        label_6->setText(QApplication::translate("DlgFactionDetail", "sysinfo", nullptr));
        txtSysinfo->setText(QString());
        groupBox_3->setTitle(QApplication::translate("DlgFactionDetail", "Membros", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabelaMembros->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("DlgFactionDetail", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabelaMembros->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("DlgFactionDetail", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tabelaMembros->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("DlgFactionDetail", "N\303\255vel", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tabelaMembros->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("DlgFactionDetail", "Classe", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tabelaMembros->horizontalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("DlgFactionDetail", "G\303\252nero", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tabelaMembros->horizontalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("DlgFactionDetail", "Cargo", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tabelaMembros->horizontalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("DlgFactionDetail", "Apelido", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tabelaMembros->horizontalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("DlgFactionDetail", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tabelaMembros->horizontalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("DlgFactionDetail", "Reputa\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tabelaMembros->horizontalHeaderItem(9);
        ___qtablewidgetitem11->setText(QApplication::translate("DlgFactionDetail", "Contribui\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tabelaMembros->horizontalHeaderItem(10);
        ___qtablewidgetitem12->setText(QApplication::translate("DlgFactionDetail", "Reincarna\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tabelaMembros->horizontalHeaderItem(11);
        ___qtablewidgetitem13->setText(QApplication::translate("DlgFactionDetail", "Tempo de Login", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tabelaMembros->horizontalHeaderItem(12);
        ___qtablewidgetitem14->setText(QApplication::translate("DlgFactionDetail", "delayexpel", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tabelaMembros->horizontalHeaderItem(13);
        ___qtablewidgetitem15->setText(QApplication::translate("DlgFactionDetail", "expeltime", nullptr));
        pushButton_2->setText(QApplication::translate("DlgFactionDetail", "Enviar item para todos", nullptr));
        pushButton_3->setText(QApplication::translate("DlgFactionDetail", "Enviar item para selecionados", nullptr));
        pushButton_5->setText(QApplication::translate("DlgFactionDetail", "Enviar GOLD para todos", nullptr));
        pushButton_6->setText(QApplication::translate("DlgFactionDetail", "Enviar GOLD para selecionados", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgFactionDetail: public Ui_DlgFactionDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGFACTIONDETAIL_H

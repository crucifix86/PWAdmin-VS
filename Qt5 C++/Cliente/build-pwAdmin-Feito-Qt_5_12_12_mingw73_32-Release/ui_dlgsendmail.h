/********************************************************************************
** Form generated from reading UI file 'dlgsendmail.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSENDMAIL_H
#define UI_DLGSENDMAIL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgSendMail
{
public:
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *txtIdEmail;
    QLabel *label_2;
    QSpinBox *txtSistema;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QSpinBox *txtDestino;
    QLabel *label_6;
    QComboBox *cbTipo;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QLineEdit *txtTitulo;
    QLabel *label_5;
    QPlainTextEdit *txtMensagem;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_57;
    QHBoxLayout *horizontalLayout_23;
    QFormLayout *formLayout_16;
    QDoubleSpinBox *txt_id;
    QPushButton *pushButton_7;
    QLabel *label_58;
    QDoubleSpinBox *txt_pos;
    QLabel *label_94;
    QFormLayout *formLayout_5;
    QFormLayout *formLayout_9;
    QLabel *label_95;
    QDoubleSpinBox *txt_maxcount;
    QDoubleSpinBox *txt_count;
    QLabel *label_96;
    QFormLayout *formLayout_10;
    QLabel *label_97;
    QDoubleSpinBox *txt_proctype;
    QLabel *label_98;
    QFormLayout *formLayout_11;
    QLabel *label_100;
    QDoubleSpinBox *txt_expiredata;
    QLabel *label_101;
    QFormLayout *formLayout_12;
    QLabel *label_104;
    QDoubleSpinBox *txt_guid1;
    QLabel *label_102;
    QFormLayout *formLayout_13;
    QLabel *label_105;
    QDoubleSpinBox *txt_guid2;
    QLabel *label_103;
    QFormLayout *formLayout_14;
    QLabel *label_106;
    QDoubleSpinBox *txt_mask;
    QLabel *label_107;
    QFormLayout *formLayout_15;
    QLineEdit *txt_data;
    QPushButton *pushButton;
    QLabel *label_7;
    QDoubleSpinBox *txt_moedas;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *DlgSendMail)
    {
        if (DlgSendMail->objectName().isEmpty())
            DlgSendMail->setObjectName(QString::fromUtf8("DlgSendMail"));
        DlgSendMail->resize(822, 358);
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
        DlgSendMail->setPalette(palette);
        groupBox = new QGroupBox(DlgSendMail);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 351, 301));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 161, 61));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtIdEmail = new QSpinBox(formLayoutWidget);
        txtIdEmail->setObjectName(QString::fromUtf8("txtIdEmail"));
        txtIdEmail->setMaximum(999999999);

        formLayout->setWidget(0, QFormLayout::FieldRole, txtIdEmail);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtSistema = new QSpinBox(formLayoutWidget);
        txtSistema->setObjectName(QString::fromUtf8("txtSistema"));
        txtSistema->setMaximum(999999999);

        formLayout->setWidget(1, QFormLayout::FieldRole, txtSistema);

        formLayoutWidget_2 = new QWidget(groupBox);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(180, 20, 161, 61));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        txtDestino = new QSpinBox(formLayoutWidget_2);
        txtDestino->setObjectName(QString::fromUtf8("txtDestino"));
        txtDestino->setMaximum(999999999);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtDestino);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        cbTipo = new QComboBox(formLayoutWidget_2);
        cbTipo->addItem(QString());
        cbTipo->addItem(QString());
        cbTipo->addItem(QString());
        cbTipo->addItem(QString());
        cbTipo->addItem(QString());
        cbTipo->setObjectName(QString::fromUtf8("cbTipo"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, cbTipo);

        formLayoutWidget_3 = new QWidget(groupBox);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(10, 90, 331, 201));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        txtTitulo = new QLineEdit(formLayoutWidget_3);
        txtTitulo->setObjectName(QString::fromUtf8("txtTitulo"));
        txtTitulo->setMaxLength(400);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, txtTitulo);

        label_5 = new QLabel(formLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_5);

        txtMensagem = new QPlainTextEdit(formLayoutWidget_3);
        txtMensagem->setObjectName(QString::fromUtf8("txtMensagem"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, txtMensagem);

        groupBox_2 = new QGroupBox(DlgSendMail);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(365, 10, 445, 301));
        formLayoutWidget_4 = new QWidget(groupBox_2);
        formLayoutWidget_4->setObjectName(QString::fromUtf8("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(10, 20, 428, 271));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_4->setHorizontalSpacing(6);
        formLayout_4->setVerticalSpacing(0);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_57 = new QLabel(formLayoutWidget_4);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_57);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(0);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(-1, 0, -1, -1);
        formLayout_16 = new QFormLayout();
        formLayout_16->setObjectName(QString::fromUtf8("formLayout_16"));
        formLayout_16->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_16->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout_16->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_16->setFormAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        formLayout_16->setHorizontalSpacing(0);
        formLayout_16->setVerticalSpacing(0);
        formLayout_16->setContentsMargins(-1, 0, -1, -1);
        txt_id = new QDoubleSpinBox(formLayoutWidget_4);
        txt_id->setObjectName(QString::fromUtf8("txt_id"));
        txt_id->setMinimumSize(QSize(90, 0));
        txt_id->setMaximumSize(QSize(90, 16777215));
        txt_id->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 50);\n"
"color: rgb(255, 255, 255);"));
        txt_id->setDecimals(0);
        txt_id->setMaximum(999999999999.000000000000000);

        formLayout_16->setWidget(0, QFormLayout::LabelRole, txt_id);

        pushButton_7 = new QPushButton(formLayoutWidget_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("text-align: left;\n"
"padding: 3px;\n"
"background-color: rgb(16, 16, 16);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/0.gif"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon);
        pushButton_7->setFlat(false);

        formLayout_16->setWidget(0, QFormLayout::FieldRole, pushButton_7);


        horizontalLayout_23->addLayout(formLayout_16);


        formLayout_4->setLayout(0, QFormLayout::FieldRole, horizontalLayout_23);

        label_58 = new QLabel(formLayoutWidget_4);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_58);

        txt_pos = new QDoubleSpinBox(formLayoutWidget_4);
        txt_pos->setObjectName(QString::fromUtf8("txt_pos"));
        txt_pos->setMinimumSize(QSize(90, 0));
        txt_pos->setMaximumSize(QSize(90, 16777215));
        txt_pos->setDecimals(0);
        txt_pos->setMaximum(999999999999.000000000000000);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, txt_pos);

        label_94 = new QLabel(formLayoutWidget_4);
        label_94->setObjectName(QString::fromUtf8("label_94"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_94);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName(QString::fromUtf8("formLayout_9"));
        label_95 = new QLabel(formLayoutWidget_4);
        label_95->setObjectName(QString::fromUtf8("label_95"));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, label_95);

        txt_maxcount = new QDoubleSpinBox(formLayoutWidget_4);
        txt_maxcount->setObjectName(QString::fromUtf8("txt_maxcount"));
        txt_maxcount->setMinimumSize(QSize(90, 0));
        txt_maxcount->setMaximumSize(QSize(90, 16777215));
        txt_maxcount->setDecimals(0);
        txt_maxcount->setMaximum(999999999999.000000000000000);

        formLayout_9->setWidget(0, QFormLayout::FieldRole, txt_maxcount);


        formLayout_5->setLayout(0, QFormLayout::FieldRole, formLayout_9);

        txt_count = new QDoubleSpinBox(formLayoutWidget_4);
        txt_count->setObjectName(QString::fromUtf8("txt_count"));
        txt_count->setMinimumSize(QSize(90, 0));
        txt_count->setMaximumSize(QSize(90, 16777215));
        txt_count->setDecimals(0);
        txt_count->setMaximum(999999999999.000000000000000);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, txt_count);


        formLayout_4->setLayout(2, QFormLayout::FieldRole, formLayout_5);

        label_96 = new QLabel(formLayoutWidget_4);
        label_96->setObjectName(QString::fromUtf8("label_96"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_96);

        formLayout_10 = new QFormLayout();
        formLayout_10->setObjectName(QString::fromUtf8("formLayout_10"));
        label_97 = new QLabel(formLayoutWidget_4);
        label_97->setObjectName(QString::fromUtf8("label_97"));

        formLayout_10->setWidget(0, QFormLayout::FieldRole, label_97);

        txt_proctype = new QDoubleSpinBox(formLayoutWidget_4);
        txt_proctype->setObjectName(QString::fromUtf8("txt_proctype"));
        txt_proctype->setMinimumSize(QSize(90, 0));
        txt_proctype->setMaximumSize(QSize(90, 16777215));
        txt_proctype->setDecimals(0);
        txt_proctype->setMaximum(999999999999.000000000000000);

        formLayout_10->setWidget(0, QFormLayout::LabelRole, txt_proctype);


        formLayout_4->setLayout(3, QFormLayout::FieldRole, formLayout_10);

        label_98 = new QLabel(formLayoutWidget_4);
        label_98->setObjectName(QString::fromUtf8("label_98"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_98);

        formLayout_11 = new QFormLayout();
        formLayout_11->setObjectName(QString::fromUtf8("formLayout_11"));
        label_100 = new QLabel(formLayoutWidget_4);
        label_100->setObjectName(QString::fromUtf8("label_100"));

        formLayout_11->setWidget(0, QFormLayout::FieldRole, label_100);

        txt_expiredata = new QDoubleSpinBox(formLayoutWidget_4);
        txt_expiredata->setObjectName(QString::fromUtf8("txt_expiredata"));
        txt_expiredata->setMinimumSize(QSize(90, 0));
        txt_expiredata->setMaximumSize(QSize(90, 16777215));
        txt_expiredata->setDecimals(0);
        txt_expiredata->setMaximum(999999999999.000000000000000);

        formLayout_11->setWidget(0, QFormLayout::LabelRole, txt_expiredata);


        formLayout_4->setLayout(4, QFormLayout::FieldRole, formLayout_11);

        label_101 = new QLabel(formLayoutWidget_4);
        label_101->setObjectName(QString::fromUtf8("label_101"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_101);

        formLayout_12 = new QFormLayout();
        formLayout_12->setObjectName(QString::fromUtf8("formLayout_12"));
        label_104 = new QLabel(formLayoutWidget_4);
        label_104->setObjectName(QString::fromUtf8("label_104"));

        formLayout_12->setWidget(0, QFormLayout::FieldRole, label_104);

        txt_guid1 = new QDoubleSpinBox(formLayoutWidget_4);
        txt_guid1->setObjectName(QString::fromUtf8("txt_guid1"));
        txt_guid1->setMinimumSize(QSize(90, 0));
        txt_guid1->setMaximumSize(QSize(90, 16777215));
        txt_guid1->setDecimals(0);
        txt_guid1->setMaximum(999999999999.000000000000000);

        formLayout_12->setWidget(0, QFormLayout::LabelRole, txt_guid1);


        formLayout_4->setLayout(5, QFormLayout::FieldRole, formLayout_12);

        label_102 = new QLabel(formLayoutWidget_4);
        label_102->setObjectName(QString::fromUtf8("label_102"));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, label_102);

        formLayout_13 = new QFormLayout();
        formLayout_13->setObjectName(QString::fromUtf8("formLayout_13"));
        label_105 = new QLabel(formLayoutWidget_4);
        label_105->setObjectName(QString::fromUtf8("label_105"));

        formLayout_13->setWidget(0, QFormLayout::FieldRole, label_105);

        txt_guid2 = new QDoubleSpinBox(formLayoutWidget_4);
        txt_guid2->setObjectName(QString::fromUtf8("txt_guid2"));
        txt_guid2->setMinimumSize(QSize(90, 0));
        txt_guid2->setMaximumSize(QSize(90, 16777215));
        txt_guid2->setDecimals(0);
        txt_guid2->setMaximum(999999999999.000000000000000);

        formLayout_13->setWidget(0, QFormLayout::LabelRole, txt_guid2);


        formLayout_4->setLayout(6, QFormLayout::FieldRole, formLayout_13);

        label_103 = new QLabel(formLayoutWidget_4);
        label_103->setObjectName(QString::fromUtf8("label_103"));

        formLayout_4->setWidget(7, QFormLayout::LabelRole, label_103);

        formLayout_14 = new QFormLayout();
        formLayout_14->setObjectName(QString::fromUtf8("formLayout_14"));
        label_106 = new QLabel(formLayoutWidget_4);
        label_106->setObjectName(QString::fromUtf8("label_106"));

        formLayout_14->setWidget(0, QFormLayout::FieldRole, label_106);

        txt_mask = new QDoubleSpinBox(formLayoutWidget_4);
        txt_mask->setObjectName(QString::fromUtf8("txt_mask"));
        txt_mask->setMinimumSize(QSize(90, 0));
        txt_mask->setMaximumSize(QSize(90, 16777215));
        txt_mask->setDecimals(0);
        txt_mask->setMaximum(999999999999.000000000000000);

        formLayout_14->setWidget(0, QFormLayout::LabelRole, txt_mask);


        formLayout_4->setLayout(7, QFormLayout::FieldRole, formLayout_14);

        label_107 = new QLabel(formLayoutWidget_4);
        label_107->setObjectName(QString::fromUtf8("label_107"));
        label_107->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(8, QFormLayout::LabelRole, label_107);

        formLayout_15 = new QFormLayout();
        formLayout_15->setObjectName(QString::fromUtf8("formLayout_15"));
        formLayout_15->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout_15->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        txt_data = new QLineEdit(formLayoutWidget_4);
        txt_data->setObjectName(QString::fromUtf8("txt_data"));
        txt_data->setMinimumSize(QSize(330, 0));

        formLayout_15->setWidget(0, QFormLayout::LabelRole, txt_data);

        pushButton = new QPushButton(formLayoutWidget_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(22, 22));
        pushButton->setMaximumSize(QSize(22, 22));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconpack/software_graphics_media/pencil.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        formLayout_15->setWidget(0, QFormLayout::FieldRole, pushButton);


        formLayout_4->setLayout(8, QFormLayout::FieldRole, formLayout_15);

        label_7 = new QLabel(formLayoutWidget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));

        formLayout_4->setWidget(9, QFormLayout::LabelRole, label_7);

        txt_moedas = new QDoubleSpinBox(formLayoutWidget_4);
        txt_moedas->setObjectName(QString::fromUtf8("txt_moedas"));
        txt_moedas->setMinimumSize(QSize(90, 0));
        txt_moedas->setMaximumSize(QSize(90, 16777215));
        txt_moedas->setDecimals(0);
        txt_moedas->setMaximum(999999999999.000000000000000);

        formLayout_4->setWidget(9, QFormLayout::FieldRole, txt_moedas);

        pushButton_2 = new QPushButton(DlgSendMail);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(680, 320, 131, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85,0, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_3 = new QPushButton(DlgSendMail);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(540, 320, 131, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0,85, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);

        retranslateUi(DlgSendMail);

        QMetaObject::connectSlotsByName(DlgSendMail);
    } // setupUi

    void retranslateUi(QDialog *DlgSendMail)
    {
        DlgSendMail->setWindowTitle(QApplication::translate("DlgSendMail", "Enviar item", nullptr));
        groupBox->setTitle(QApplication::translate("DlgSendMail", "Informa\303\247\303\265es da mensagem", nullptr));
        label->setText(QApplication::translate("DlgSendMail", "ID do Email", nullptr));
        label_2->setText(QApplication::translate("DlgSendMail", "ID Sistema", nullptr));
        label_4->setText(QApplication::translate("DlgSendMail", "ID Destino", nullptr));
        label_6->setText(QApplication::translate("DlgSendMail", "Tipo", nullptr));
        cbTipo->setItemText(0, QApplication::translate("DlgSendMail", "Jogador", nullptr));
        cbTipo->setItemText(1, QApplication::translate("DlgSendMail", "Npc", nullptr));
        cbTipo->setItemText(2, QApplication::translate("DlgSendMail", "Leil\303\243o", nullptr));
        cbTipo->setItemText(3, QApplication::translate("DlgSendMail", "Internet", nullptr));
        cbTipo->setItemText(4, QApplication::translate("DlgSendMail", "Batalha", nullptr));

        label_3->setText(QApplication::translate("DlgSendMail", "T\303\255tulo", nullptr));
        label_5->setText(QApplication::translate("DlgSendMail", "Mensagem", nullptr));
        groupBox_2->setTitle(QApplication::translate("DlgSendMail", "Anexo", nullptr));
        label_57->setText(QApplication::translate("DlgSendMail", "ID Item", nullptr));
        pushButton_7->setText(QApplication::translate("DlgSendMail", "Nome do item", nullptr));
        label_58->setText(QApplication::translate("DlgSendMail", "Posi\303\247\303\243o", nullptr));
        label_94->setText(QApplication::translate("DlgSendMail", "Qtde", nullptr));
        label_95->setText(QApplication::translate("DlgSendMail", "Qtde M\303\241x", nullptr));
        label_96->setText(QApplication::translate("DlgSendMail", "Proctype", nullptr));
        label_97->setText(QApplication::translate("DlgSendMail", "|", nullptr));
        label_98->setText(QApplication::translate("DlgSendMail", "Expira\303\247\303\243o", nullptr));
        label_100->setText(QApplication::translate("DlgSendMail", "|", nullptr));
        label_101->setText(QApplication::translate("DlgSendMail", "GUID1", nullptr));
        label_104->setText(QApplication::translate("DlgSendMail", "|", nullptr));
        label_102->setText(QApplication::translate("DlgSendMail", "GUID2", nullptr));
        label_105->setText(QApplication::translate("DlgSendMail", "|", nullptr));
        label_103->setText(QApplication::translate("DlgSendMail", "M\303\241scara", nullptr));
        label_106->setText(QApplication::translate("DlgSendMail", "|", nullptr));
        label_107->setText(QApplication::translate("DlgSendMail", "Data", nullptr));
        pushButton->setText(QString());
        label_7->setText(QApplication::translate("DlgSendMail", "Moedas", nullptr));
        pushButton_2->setText(QApplication::translate("DlgSendMail", "Fechar", nullptr));
        pushButton_3->setText(QApplication::translate("DlgSendMail", "Confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgSendMail: public Ui_DlgSendMail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSENDMAIL_H

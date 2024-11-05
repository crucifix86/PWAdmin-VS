/********************************************************************************
** Form generated from reading UI file 'dlgextrapropeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGEXTRAPROPEDITOR_H
#define UI_DLGEXTRAPROPEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgExtraPropEditor
{
public:
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *TOUCH_HALF_TRADE;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_6;
    QDoubleSpinBox *doubleSpinBox_7;
    QWidget *DAILY_SIGN_IN;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QDoubleSpinBox *doubleSpinBox_9;
    QDoubleSpinBox *doubleSpinBox_10;
    QDoubleSpinBox *doubleSpinBox_11;
    QDoubleSpinBox *doubleSpinBox_12;
    QDoubleSpinBox *doubleSpinBox_13;
    QDoubleSpinBox *doubleSpinBox_14;
    QWidget *GIFTCARD_HALF_REDEEM;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_15;
    QDoubleSpinBox *doubleSpinBox_15;
    QLabel *label_16;
    QDoubleSpinBox *doubleSpinBox_16;
    QLabel *label_17;
    QDoubleSpinBox *doubleSpinBox_17;
    QLabel *label_18;
    QLineEdit *lineEdit;
    QWidget *LEADERSHIP;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_19;
    QDoubleSpinBox *doubleSpinBox_18;
    QWidget *GENERALCARD_COLLECTION;
    QPlainTextEdit *plainTextEdit;
    QWidget *FATERING;
    QPlainTextEdit *plainTextEdit_2;
    QWidget *CLOCK_DATA;
    QPlainTextEdit *plainTextEdit_3;
    QWidget *RAND_MALL_DATA;
    QPlainTextEdit *plainTextEdit_4;
    QWidget *WORLD_CONTRIBUTION;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_20;
    QLabel *label_21;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QWidget *ASTROLABE_EXTERN;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QLabel *label_22;
    QLabel *label_23;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *DlgExtraPropEditor)
    {
        if (DlgExtraPropEditor->objectName().isEmpty())
            DlgExtraPropEditor->setObjectName(QString::fromUtf8("DlgExtraPropEditor"));
        DlgExtraPropEditor->resize(444, 258);
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
        DlgExtraPropEditor->setPalette(palette);
        listWidget = new QListWidget(DlgExtraPropEditor);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 131, 211));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidget->setMovement(QListView::Static);
        listWidget->setResizeMode(QListView::Fixed);
        listWidget->setLayoutMode(QListView::Batched);
        listWidget->setSpacing(5);
        listWidget->setGridSize(QSize(10, 20));
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setUniformItemSizes(true);
        listWidget->setBatchSize(10);
        listWidget->setSelectionRectVisible(false);
        stackedWidget = new QStackedWidget(DlgExtraPropEditor);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(150, 10, 281, 211));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
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
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
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
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
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
        stackedWidget->setPalette(palette1);
        TOUCH_HALF_TRADE = new QWidget();
        TOUCH_HALF_TRADE->setObjectName(QString::fromUtf8("TOUCH_HALF_TRADE"));
        formLayoutWidget = new QWidget(TOUCH_HALF_TRADE);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 10, 201, 199));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        doubleSpinBox = new QDoubleSpinBox(formLayoutWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(0);
        doubleSpinBox->setMaximum(9999999999999999583119736832.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, doubleSpinBox);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        doubleSpinBox_2 = new QDoubleSpinBox(formLayoutWidget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(0);
        doubleSpinBox_2->setMaximum(9999999999999999583119736832.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_2);

        doubleSpinBox_3 = new QDoubleSpinBox(formLayoutWidget);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setDecimals(0);
        doubleSpinBox_3->setMaximum(9999999999999999583119736832.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_3);

        doubleSpinBox_4 = new QDoubleSpinBox(formLayoutWidget);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setDecimals(0);
        doubleSpinBox_4->setMaximum(9999999999999999583119736832.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, doubleSpinBox_4);

        doubleSpinBox_5 = new QDoubleSpinBox(formLayoutWidget);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setDecimals(0);
        doubleSpinBox_5->setMaximum(9999999999999999583119736832.000000000000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, doubleSpinBox_5);

        doubleSpinBox_6 = new QDoubleSpinBox(formLayoutWidget);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));
        doubleSpinBox_6->setDecimals(0);
        doubleSpinBox_6->setMaximum(9999999999999999583119736832.000000000000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, doubleSpinBox_6);

        doubleSpinBox_7 = new QDoubleSpinBox(formLayoutWidget);
        doubleSpinBox_7->setObjectName(QString::fromUtf8("doubleSpinBox_7"));
        doubleSpinBox_7->setDecimals(0);
        doubleSpinBox_7->setMaximum(9999999999999999583119736832.000000000000000);

        formLayout->setWidget(6, QFormLayout::FieldRole, doubleSpinBox_7);

        stackedWidget->addWidget(TOUCH_HALF_TRADE);
        DAILY_SIGN_IN = new QWidget();
        DAILY_SIGN_IN->setObjectName(QString::fromUtf8("DAILY_SIGN_IN"));
        formLayoutWidget_2 = new QWidget(DAILY_SIGN_IN);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(0, 8, 191, 201));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_8);

        doubleSpinBox_8 = new QDoubleSpinBox(formLayoutWidget_2);
        doubleSpinBox_8->setObjectName(QString::fromUtf8("doubleSpinBox_8"));
        doubleSpinBox_8->setDecimals(0);
        doubleSpinBox_8->setMaximum(9999999999.000000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_8);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(formLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(formLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(formLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_13);

        label_14 = new QLabel(formLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_14);

        doubleSpinBox_9 = new QDoubleSpinBox(formLayoutWidget_2);
        doubleSpinBox_9->setObjectName(QString::fromUtf8("doubleSpinBox_9"));
        doubleSpinBox_9->setDecimals(0);
        doubleSpinBox_9->setMaximum(9999999999.000000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_9);

        doubleSpinBox_10 = new QDoubleSpinBox(formLayoutWidget_2);
        doubleSpinBox_10->setObjectName(QString::fromUtf8("doubleSpinBox_10"));
        doubleSpinBox_10->setDecimals(0);
        doubleSpinBox_10->setMaximum(9999999999.000000000000000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_10);

        doubleSpinBox_11 = new QDoubleSpinBox(formLayoutWidget_2);
        doubleSpinBox_11->setObjectName(QString::fromUtf8("doubleSpinBox_11"));
        doubleSpinBox_11->setDecimals(0);
        doubleSpinBox_11->setMaximum(9999999999.000000000000000);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, doubleSpinBox_11);

        doubleSpinBox_12 = new QDoubleSpinBox(formLayoutWidget_2);
        doubleSpinBox_12->setObjectName(QString::fromUtf8("doubleSpinBox_12"));
        doubleSpinBox_12->setDecimals(0);
        doubleSpinBox_12->setMaximum(9999999999.000000000000000);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, doubleSpinBox_12);

        doubleSpinBox_13 = new QDoubleSpinBox(formLayoutWidget_2);
        doubleSpinBox_13->setObjectName(QString::fromUtf8("doubleSpinBox_13"));
        doubleSpinBox_13->setDecimals(0);
        doubleSpinBox_13->setMaximum(9999999999.000000000000000);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, doubleSpinBox_13);

        doubleSpinBox_14 = new QDoubleSpinBox(formLayoutWidget_2);
        doubleSpinBox_14->setObjectName(QString::fromUtf8("doubleSpinBox_14"));
        doubleSpinBox_14->setDecimals(0);
        doubleSpinBox_14->setMaximum(9999999999.000000000000000);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, doubleSpinBox_14);

        stackedWidget->addWidget(DAILY_SIGN_IN);
        GIFTCARD_HALF_REDEEM = new QWidget();
        GIFTCARD_HALF_REDEEM->setObjectName(QString::fromUtf8("GIFTCARD_HALF_REDEEM"));
        formLayoutWidget_3 = new QWidget(GIFTCARD_HALF_REDEEM);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(0, 10, 251, 199));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(formLayoutWidget_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_15);

        doubleSpinBox_15 = new QDoubleSpinBox(formLayoutWidget_3);
        doubleSpinBox_15->setObjectName(QString::fromUtf8("doubleSpinBox_15"));
        doubleSpinBox_15->setDecimals(0);
        doubleSpinBox_15->setMaximum(9999999999.000000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_15);

        label_16 = new QLabel(formLayoutWidget_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_16);

        doubleSpinBox_16 = new QDoubleSpinBox(formLayoutWidget_3);
        doubleSpinBox_16->setObjectName(QString::fromUtf8("doubleSpinBox_16"));
        doubleSpinBox_16->setDecimals(0);
        doubleSpinBox_16->setMaximum(9999999999.000000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_16);

        label_17 = new QLabel(formLayoutWidget_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_17);

        doubleSpinBox_17 = new QDoubleSpinBox(formLayoutWidget_3);
        doubleSpinBox_17->setObjectName(QString::fromUtf8("doubleSpinBox_17"));
        doubleSpinBox_17->setDecimals(0);
        doubleSpinBox_17->setMaximum(9999999999.000000000000000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_17);

        label_18 = new QLabel(formLayoutWidget_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_18);

        lineEdit = new QLineEdit(formLayoutWidget_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaxLength(20);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, lineEdit);

        stackedWidget->addWidget(GIFTCARD_HALF_REDEEM);
        LEADERSHIP = new QWidget();
        LEADERSHIP->setObjectName(QString::fromUtf8("LEADERSHIP"));
        horizontalLayoutWidget = new QWidget(LEADERSHIP);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 141, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(horizontalLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout->addWidget(label_19);

        doubleSpinBox_18 = new QDoubleSpinBox(horizontalLayoutWidget);
        doubleSpinBox_18->setObjectName(QString::fromUtf8("doubleSpinBox_18"));
        doubleSpinBox_18->setDecimals(0);
        doubleSpinBox_18->setMaximum(9999999999.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox_18);

        stackedWidget->addWidget(LEADERSHIP);
        GENERALCARD_COLLECTION = new QWidget();
        GENERALCARD_COLLECTION->setObjectName(QString::fromUtf8("GENERALCARD_COLLECTION"));
        plainTextEdit = new QPlainTextEdit(GENERALCARD_COLLECTION);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 10, 241, 201));
        stackedWidget->addWidget(GENERALCARD_COLLECTION);
        FATERING = new QWidget();
        FATERING->setObjectName(QString::fromUtf8("FATERING"));
        plainTextEdit_2 = new QPlainTextEdit(FATERING);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(0, 10, 241, 201));
        stackedWidget->addWidget(FATERING);
        CLOCK_DATA = new QWidget();
        CLOCK_DATA->setObjectName(QString::fromUtf8("CLOCK_DATA"));
        plainTextEdit_3 = new QPlainTextEdit(CLOCK_DATA);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(0, 10, 241, 201));
        stackedWidget->addWidget(CLOCK_DATA);
        RAND_MALL_DATA = new QWidget();
        RAND_MALL_DATA->setObjectName(QString::fromUtf8("RAND_MALL_DATA"));
        plainTextEdit_4 = new QPlainTextEdit(RAND_MALL_DATA);
        plainTextEdit_4->setObjectName(QString::fromUtf8("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(0, 10, 241, 201));
        stackedWidget->addWidget(RAND_MALL_DATA);
        WORLD_CONTRIBUTION = new QWidget();
        WORLD_CONTRIBUTION->setObjectName(QString::fromUtf8("WORLD_CONTRIBUTION"));
        formLayoutWidget_4 = new QWidget(WORLD_CONTRIBUTION);
        formLayoutWidget_4->setObjectName(QString::fromUtf8("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(0, 10, 161, 201));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(formLayoutWidget_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_20);

        label_21 = new QLabel(formLayoutWidget_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_21);

        spinBox = new QSpinBox(formLayoutWidget_4);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, spinBox);

        spinBox_2 = new QSpinBox(formLayoutWidget_4);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, spinBox_2);

        stackedWidget->addWidget(WORLD_CONTRIBUTION);
        ASTROLABE_EXTERN = new QWidget();
        ASTROLABE_EXTERN->setObjectName(QString::fromUtf8("ASTROLABE_EXTERN"));
        formLayoutWidget_5 = new QWidget(ASTROLABE_EXTERN);
        formLayoutWidget_5->setObjectName(QString::fromUtf8("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(0, 10, 151, 201));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(formLayoutWidget_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_22);

        label_23 = new QLabel(formLayoutWidget_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_23);

        spinBox_3 = new QSpinBox(formLayoutWidget_5);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, spinBox_3);

        spinBox_4 = new QSpinBox(formLayoutWidget_5);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, spinBox_4);

        stackedWidget->addWidget(ASTROLABE_EXTERN);
        pushButton = new QPushButton(DlgExtraPropEditor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 222, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Add_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(28, 28));
        pushButton_2 = new QPushButton(DlgExtraPropEditor);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 222, 31, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Cancel_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(28, 28));
        pushButton_3 = new QPushButton(DlgExtraPropEditor);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 220, 135, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_4 = new QPushButton(DlgExtraPropEditor);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 220, 135, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);

        retranslateUi(DlgExtraPropEditor);

        listWidget->setCurrentRow(-1);
        stackedWidget->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(DlgExtraPropEditor);
    } // setupUi

    void retranslateUi(QDialog *DlgExtraPropEditor)
    {
        DlgExtraPropEditor->setWindowTitle(QApplication::translate("DlgExtraPropEditor", "Editor de Propriedades Extras", nullptr));
        label->setText(QApplication::translate("DlgExtraPropEditor", "N\302\272 Serial", nullptr));
        label_2->setText(QApplication::translate("DlgExtraPropEditor", "State", nullptr));
        label_3->setText(QApplication::translate("DlgExtraPropEditor", "Custo", nullptr));
        label_4->setText(QApplication::translate("DlgExtraPropEditor", "Lotes", nullptr));
        label_5->setText(QApplication::translate("DlgExtraPropEditor", "Qtde", nullptr));
        label_6->setText(QApplication::translate("DlgExtraPropEditor", "Tipo", nullptr));
        label_7->setText(QApplication::translate("DlgExtraPropEditor", "Expira em", nullptr));
        label_8->setText(QApplication::translate("DlgExtraPropEditor", "Tempo Atualiz.", nullptr));
        label_9->setText(QApplication::translate("DlgExtraPropEditor", "M\303\252s", nullptr));
        label_10->setText(QApplication::translate("DlgExtraPropEditor", "Ano Atual", nullptr));
        label_11->setText(QApplication::translate("DlgExtraPropEditor", "Ano Anterior", nullptr));
        label_12->setText(QApplication::translate("DlgExtraPropEditor", "Qtde Premiada", nullptr));
        label_13->setText(QApplication::translate("DlgExtraPropEditor", "Qtde Login Tardio", nullptr));
        label_14->setText(QApplication::translate("DlgExtraPropEditor", "reserved", nullptr));
        label_15->setText(QApplication::translate("DlgExtraPropEditor", "Estado", nullptr));
        label_16->setText(QApplication::translate("DlgExtraPropEditor", "Tipo", nullptr));
        label_17->setText(QApplication::translate("DlgExtraPropEditor", "Tipo prim\303\241rio", nullptr));
        label_18->setText(QApplication::translate("DlgExtraPropEditor", "N\302\272 do Cart\303\243o", nullptr));
        lineEdit->setText(QString());
        label_19->setText(QApplication::translate("DlgExtraPropEditor", "Lideran\303\247a", nullptr));
        label_20->setText(QApplication::translate("DlgExtraPropEditor", "Contrib.", nullptr));
        label_21->setText(QApplication::translate("DlgExtraPropEditor", "Custo", nullptr));
        label_22->setText(QApplication::translate("DlgExtraPropEditor", "N\303\255vel", nullptr));
        label_23->setText(QApplication::translate("DlgExtraPropEditor", "Exp.", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QApplication::translate("DlgExtraPropEditor", "Confirmar", nullptr));
        pushButton_4->setText(QApplication::translate("DlgExtraPropEditor", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgExtraPropEditor: public Ui_DlgExtraPropEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGEXTRAPROPEDITOR_H

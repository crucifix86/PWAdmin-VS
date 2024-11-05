/********************************************************************************
** Form generated from reading UI file 'pwadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PWADMIN_H
#define UI_PWADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pwAdmin
{
public:
    QWidget *centralwidget;
    QListWidget *lpanel;
    QStackedWidget *rpanel;
    QWidget *page;
    QPushButton *btnConnection;
    QPushButton *btnStartMap;
    QPushButton *btnShutdownMap;
    QPushButton *btnManagement;
    QPushButton *btnCleanCache;
    QTextEdit *txtLog;
    QGroupBox *groupBox_6;
    QTableWidget *tableMemoriaTroca;
    QTableWidget *tableContasOnlineTotalContas;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *lbServerVersion;
    QLabel *lbZoneID;
    QLabel *label_5;
    QLabel *lbAID;
    QLabel *label_7;
    QLabel *lbServerName;
    QGroupBox *groupBox_5;
    QTableWidget *tableContasGM;
    QGroupBox *groupBox_2;
    QTableWidget *tableProcessos;
    QGroupBox *groupBox_7;
    QTableWidget *tableMapas;
    QPushButton *pushButton_2;
    QWidget *page_3;
    QPushButton *btnGM;
    QGroupBox *groupBox_8;
    QTableWidget *tableContas;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_23;
    QLineEdit *txtPesquisar;
    QPushButton *btnPesquisar;
    QPushButton *btnContasOnline;
    QPushButton *pushButton_8;
    QPushButton *btnAutoLock;
    QPushButton *btnCriarConta;
    QPushButton *btnEditarConta;
    QGroupBox *groupBox_9;
    QTableWidget *tableRoles;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *btnContasOnline_2;
    QWidget *page_2;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *txtSurfaces;
    QLabel *label_9;
    QLineEdit *txtConfigs;
    QLabel *label_12;
    QLineEdit *txtElements;
    QLabel *label_11;
    QToolButton *btnLoadElements;
    QToolButton *btnLoadConfigs;
    QToolButton *btnLoadSurfaces;
    QPushButton *btnSaveConfigs;
    QGroupBox *groupBox_4;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QLineEdit *txtServerIp;
    QLabel *label_21;
    QLineEdit *txtServerPort;
    QLabel *label_19;
    QLineEdit *txtIntervaloDados;
    QLabel *label_20;
    QLineEdit *txtServerPassword;
    QLabel *label_22;
    QLineEdit *txtProfileName;
    QPushButton *btnTestConnectionServer;
    QToolButton *btnSelectElementsPath;
    QGroupBox *groupBox;
    QLabel *label_13;
    QLineEdit *txtKey1;
    QLineEdit *txtKey2;
    QLabel *label_14;
    QLineEdit *txtAsig1;
    QLabel *label_15;
    QLineEdit *txtAsig2;
    QLabel *label_16;
    QLineEdit *txtFsig1;
    QLabel *label_17;
    QLineEdit *txtFsig2;
    QLabel *label_18;
    QPushButton *btnConnection_2;
    QListWidget *listProfiles;
    QPushButton *btnAddProfile;
    QPushButton *btnDeleteProfile;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QMainWindow *pwAdmin)
    {
        if (pwAdmin->objectName().isEmpty())
            pwAdmin->setObjectName(QString::fromUtf8("pwAdmin"));
        pwAdmin->resize(1005, 598);
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
        pwAdmin->setPalette(palette);
        pwAdmin->setStyleSheet(QString::fromUtf8("QMessageBox {\n"
"    background-color: #121212;\n"
"}\n"
"QMessageBox QLabel {\n"
"    color: #fff;\n"
"}\n"
"QMessageBox QPushButton{\n"
"	color: #fff;\n"
"	background-color: #121212;\n"
"}"));
        centralwidget = new QWidget(pwAdmin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lpanel = new QListWidget(centralwidget);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/business_finance_data/data_red.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush9(QColor(255, 255, 255, 255));
        brush9.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(lpanel);
        __qlistwidgetitem->setForeground(brush9);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconpack/business_finance_data/table2_view.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(lpanel);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/iconpack/business_finance_data/data_gear.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(lpanel);
        __qlistwidgetitem2->setIcon(icon2);
        lpanel->setObjectName(QString::fromUtf8("lpanel"));
        lpanel->setGeometry(QRect(10, 38, 151, 551));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush10(QColor(20, 20, 20, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush11(QColor(0, 60, 100, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush11);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush12(QColor(255, 255, 255, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        QBrush brush13(QColor(255, 255, 255, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        QBrush brush14(QColor(255, 255, 255, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        lpanel->setPalette(palette1);
        lpanel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color:rgb(20, 20, 20);\n"
"selection-background-color: rgb(0, 60, 100);\n"
"padding-top:5px;"));
        lpanel->setFrameShape(QFrame::NoFrame);
        lpanel->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lpanel->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lpanel->setProperty("showDropIndicator", QVariant(false));
        lpanel->setDefaultDropAction(Qt::IgnoreAction);
        lpanel->setSelectionBehavior(QAbstractItemView::SelectRows);
        lpanel->setIconSize(QSize(32, 32));
        lpanel->setGridSize(QSize(0, 40));
        lpanel->setViewMode(QListView::ListMode);
        lpanel->setUniformItemSizes(false);
        lpanel->setSelectionRectVisible(false);
        lpanel->setItemAlignment(Qt::AlignHCenter|Qt::AlignLeading|Qt::AlignLeft);
        rpanel = new QStackedWidget(centralwidget);
        rpanel->setObjectName(QString::fromUtf8("rpanel"));
        rpanel->setGeometry(QRect(170, 38, 821, 551));
        rpanel->setStyleSheet(QString::fromUtf8("background-color:rgb(20, 20, 20);\n"
"color: rgb(255, 255, 255);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        btnConnection = new QPushButton(page);
        btnConnection->setObjectName(QString::fromUtf8("btnConnection"));
        btnConnection->setGeometry(QRect(340, 477, 141, 62));
        btnConnection->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"padding-left:10px;\n"
"text-align: left;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/iconpack/basic_foundation/bullet_triangle_glass_green.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnConnection->setIcon(icon3);
        btnConnection->setIconSize(QSize(32, 32));
        btnStartMap = new QPushButton(page);
        btnStartMap->setObjectName(QString::fromUtf8("btnStartMap"));
        btnStartMap->setGeometry(QRect(482, 477, 131, 31));
        btnStartMap->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 0, 85);\n"
"color: {255,255,255};\n"
"padding-left:10px;\n"
"text-align: left;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/iconpack/computer_network_security/earth_add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnStartMap->setIcon(icon4);
        btnStartMap->setIconSize(QSize(22, 22));
        btnShutdownMap = new QPushButton(page);
        btnShutdownMap->setObjectName(QString::fromUtf8("btnShutdownMap"));
        btnShutdownMap->setGeometry(QRect(482, 508, 131, 31));
        btnShutdownMap->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 50, 0);\n"
"color: {255,255,255};\n"
"padding-left:10px;\n"
"text-align: left;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/iconpack/computer_network_security/earth_delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnShutdownMap->setIcon(icon5);
        btnShutdownMap->setIconSize(QSize(22, 22));
        btnManagement = new QPushButton(page);
        btnManagement->setObjectName(QString::fromUtf8("btnManagement"));
        btnManagement->setGeometry(QRect(614, 508, 121, 31));
        btnManagement->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 50, 100);\n"
"color: rgb(255, 255, 255);\n"
"padding-left:10px;\n"
"text-align: left;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/iconpack/computer_network_security/server.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnManagement->setIcon(icon6);
        btnManagement->setIconSize(QSize(22, 22));
        btnCleanCache = new QPushButton(page);
        btnCleanCache->setObjectName(QString::fromUtf8("btnCleanCache"));
        btnCleanCache->setGeometry(QRect(614, 477, 121, 31));
        btnCleanCache->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 100, 50);\n"
"color: {255,255,255};\n"
"padding-left:10px;\n"
"text-align: left;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/iconpack/basic_foundation/refresh.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnCleanCache->setIcon(icon7);
        btnCleanCache->setIconSize(QSize(22, 22));
        txtLog = new QTextEdit(page);
        txtLog->setObjectName(QString::fromUtf8("txtLog"));
        txtLog->setGeometry(QRect(10, 477, 321, 62));
        txtLog->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(10, 10, 10);"));
        txtLog->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        txtLog->setUndoRedoEnabled(false);
        txtLog->setReadOnly(true);
        txtLog->setTextInteractionFlags(Qt::NoTextInteraction);
        groupBox_6 = new QGroupBox(page);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(340, 0, 471, 185));
        tableMemoriaTroca = new QTableWidget(groupBox_6);
        if (tableMemoriaTroca->columnCount() < 2)
            tableMemoriaTroca->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableMemoriaTroca->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableMemoriaTroca->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableMemoriaTroca->rowCount() < 3)
            tableMemoriaTroca->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        tableMemoriaTroca->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        tableMemoriaTroca->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        tableMemoriaTroca->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QBrush brush15(QColor(255, 170, 0, 255));
        brush15.setStyle(Qt::NoBrush);
        QFont font;
        font.setFamily(QString::fromUtf8("Tahoma"));
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem5->setFont(font);
        __qtablewidgetitem5->setForeground(brush15);
        __qtablewidgetitem5->setFlags(Qt::ItemIsEnabled);
        tableMemoriaTroca->setItem(0, 0, __qtablewidgetitem5);
        QBrush brush16(QColor(255, 170, 0, 255));
        brush16.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font);
        __qtablewidgetitem6->setForeground(brush16);
        __qtablewidgetitem6->setFlags(Qt::ItemIsEnabled);
        tableMemoriaTroca->setItem(0, 1, __qtablewidgetitem6);
        QBrush brush17(QColor(0, 170, 255, 255));
        brush17.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem7->setFont(font);
        __qtablewidgetitem7->setForeground(brush17);
        __qtablewidgetitem7->setFlags(Qt::ItemIsEnabled);
        tableMemoriaTroca->setItem(1, 0, __qtablewidgetitem7);
        QBrush brush18(QColor(0, 170, 255, 255));
        brush18.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem8->setFont(font);
        __qtablewidgetitem8->setForeground(brush18);
        __qtablewidgetitem8->setFlags(Qt::ItemIsEnabled);
        tableMemoriaTroca->setItem(1, 1, __qtablewidgetitem8);
        QBrush brush19(QColor(0, 121, 0, 255));
        brush19.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem9->setFont(font);
        __qtablewidgetitem9->setForeground(brush19);
        __qtablewidgetitem9->setFlags(Qt::ItemIsEnabled);
        tableMemoriaTroca->setItem(2, 0, __qtablewidgetitem9);
        QBrush brush20(QColor(0, 121, 0, 255));
        brush20.setStyle(Qt::NoBrush);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Tahoma"));
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(true);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem10->setFont(font1);
        __qtablewidgetitem10->setForeground(brush20);
        __qtablewidgetitem10->setFlags(Qt::ItemIsEnabled);
        tableMemoriaTroca->setItem(2, 1, __qtablewidgetitem10);
        tableMemoriaTroca->setObjectName(QString::fromUtf8("tableMemoriaTroca"));
        tableMemoriaTroca->setGeometry(QRect(5, 20, 251, 111));
        tableMemoriaTroca->setLayoutDirection(Qt::LeftToRight);
        tableMemoriaTroca->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableMemoriaTroca->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableMemoriaTroca->setAutoScroll(false);
        tableMemoriaTroca->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableMemoriaTroca->setSelectionMode(QAbstractItemView::SingleSelection);
        tableMemoriaTroca->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableMemoriaTroca->horizontalHeader()->setVisible(false);
        tableMemoriaTroca->horizontalHeader()->setDefaultSectionSize(125);
        tableMemoriaTroca->horizontalHeader()->setStretchLastSection(true);
        tableMemoriaTroca->verticalHeader()->setVisible(false);
        tableMemoriaTroca->verticalHeader()->setCascadingSectionResizes(false);
        tableMemoriaTroca->verticalHeader()->setStretchLastSection(false);
        tableContasOnlineTotalContas = new QTableWidget(groupBox_6);
        if (tableContasOnlineTotalContas->columnCount() < 2)
            tableContasOnlineTotalContas->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableContasOnlineTotalContas->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableContasOnlineTotalContas->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        if (tableContasOnlineTotalContas->rowCount() < 1)
            tableContasOnlineTotalContas->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableContasOnlineTotalContas->setVerticalHeaderItem(0, __qtablewidgetitem13);
        QBrush brush21(QColor(0, 121, 0, 255));
        brush21.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem14->setFont(font);
        __qtablewidgetitem14->setForeground(brush21);
        __qtablewidgetitem14->setFlags(Qt::ItemIsEnabled);
        tableContasOnlineTotalContas->setItem(0, 0, __qtablewidgetitem14);
        QBrush brush22(QColor(150, 0, 100, 255));
        brush22.setStyle(Qt::NoBrush);
        QBrush brush23(QColor(0, 0, 0, 0));
        brush23.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem15->setFont(font);
        __qtablewidgetitem15->setBackground(brush23);
        __qtablewidgetitem15->setForeground(brush22);
        __qtablewidgetitem15->setFlags(Qt::ItemIsEnabled);
        tableContasOnlineTotalContas->setItem(0, 1, __qtablewidgetitem15);
        tableContasOnlineTotalContas->setObjectName(QString::fromUtf8("tableContasOnlineTotalContas"));
        tableContasOnlineTotalContas->setGeometry(QRect(5, 130, 251, 51));
        tableContasOnlineTotalContas->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableContasOnlineTotalContas->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableContasOnlineTotalContas->setAutoScroll(false);
        tableContasOnlineTotalContas->setSelectionMode(QAbstractItemView::SingleSelection);
        tableContasOnlineTotalContas->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableContasOnlineTotalContas->horizontalHeader()->setVisible(false);
        tableContasOnlineTotalContas->horizontalHeader()->setMinimumSectionSize(100);
        tableContasOnlineTotalContas->horizontalHeader()->setDefaultSectionSize(125);
        tableContasOnlineTotalContas->horizontalHeader()->setStretchLastSection(true);
        tableContasOnlineTotalContas->verticalHeader()->setVisible(false);
        formLayoutWidget = new QWidget(groupBox_6);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(270, 20, 191, 161));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(12);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lbServerVersion = new QLabel(formLayoutWidget);
        lbServerVersion->setObjectName(QString::fromUtf8("lbServerVersion"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lbServerVersion);

        lbZoneID = new QLabel(formLayoutWidget);
        lbZoneID->setObjectName(QString::fromUtf8("lbZoneID"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lbZoneID);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lbAID = new QLabel(formLayoutWidget);
        lbAID->setObjectName(QString::fromUtf8("lbAID"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lbAID);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_7);

        lbServerName = new QLabel(formLayoutWidget);
        lbServerName->setObjectName(QString::fromUtf8("lbServerName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lbServerName);

        groupBox_5 = new QGroupBox(page);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 0, 321, 185));
        groupBox_5->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableContasGM = new QTableWidget(groupBox_5);
        if (tableContasGM->columnCount() < 3)
            tableContasGM->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        tableContasGM->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        tableContasGM->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        tableContasGM->setHorizontalHeaderItem(2, __qtablewidgetitem18);
        tableContasGM->setObjectName(QString::fromUtf8("tableContasGM"));
        tableContasGM->setGeometry(QRect(5, 20, 311, 161));
        tableContasGM->setAutoFillBackground(false);
        tableContasGM->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableContasGM->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableContasGM->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableContasGM->setAutoScroll(false);
        tableContasGM->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableContasGM->setSelectionMode(QAbstractItemView::SingleSelection);
        tableContasGM->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableContasGM->horizontalHeader()->setVisible(false);
        tableContasGM->horizontalHeader()->setDefaultSectionSize(60);
        tableContasGM->horizontalHeader()->setStretchLastSection(true);
        tableContasGM->verticalHeader()->setVisible(false);
        tableContasGM->verticalHeader()->setDefaultSectionSize(20);
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 190, 321, 281));
        tableProcessos = new QTableWidget(groupBox_2);
        if (tableProcessos->columnCount() < 3)
            tableProcessos->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableProcessos->setHorizontalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableProcessos->setHorizontalHeaderItem(1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableProcessos->setHorizontalHeaderItem(2, __qtablewidgetitem21);
        tableProcessos->setObjectName(QString::fromUtf8("tableProcessos"));
        tableProcessos->setGeometry(QRect(5, 20, 310, 257));
        tableProcessos->setAutoFillBackground(false);
        tableProcessos->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableProcessos->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableProcessos->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableProcessos->setAutoScroll(false);
        tableProcessos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableProcessos->setSelectionMode(QAbstractItemView::SingleSelection);
        tableProcessos->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableProcessos->horizontalHeader()->setVisible(false);
        tableProcessos->horizontalHeader()->setDefaultSectionSize(35);
        tableProcessos->horizontalHeader()->setStretchLastSection(true);
        tableProcessos->verticalHeader()->setVisible(false);
        tableProcessos->verticalHeader()->setDefaultSectionSize(20);
        groupBox_7 = new QGroupBox(page);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(340, 190, 471, 281));
        tableMapas = new QTableWidget(groupBox_7);
        if (tableMapas->columnCount() < 4)
            tableMapas->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignCenter);
        tableMapas->setHorizontalHeaderItem(0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableMapas->setHorizontalHeaderItem(1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableMapas->setHorizontalHeaderItem(2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableMapas->setHorizontalHeaderItem(3, __qtablewidgetitem25);
        tableMapas->setObjectName(QString::fromUtf8("tableMapas"));
        tableMapas->setGeometry(QRect(5, 20, 461, 256));
        tableMapas->setAutoFillBackground(true);
        tableMapas->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableMapas->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableMapas->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableMapas->setAutoScroll(false);
        tableMapas->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableMapas->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableMapas->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableMapas->horizontalHeader()->setVisible(false);
        tableMapas->horizontalHeader()->setDefaultSectionSize(35);
        tableMapas->horizontalHeader()->setStretchLastSection(true);
        tableMapas->verticalHeader()->setDefaultSectionSize(20);
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(740, 490, 80, 21));
        rpanel->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        btnGM = new QPushButton(page_3);
        btnGM->setObjectName(QString::fromUtf8("btnGM"));
        btnGM->setEnabled(true);
        btnGM->setGeometry(QRect(10, 232, 28, 28));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icons/gm.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnGM->setIcon(icon8);
        groupBox_8 = new QGroupBox(page_3);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 0, 801, 231));
        tableContas = new QTableWidget(groupBox_8);
        if (tableContas->columnCount() < 6)
            tableContas->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableContas->setHorizontalHeaderItem(0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableContas->setHorizontalHeaderItem(1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableContas->setHorizontalHeaderItem(2, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableContas->setHorizontalHeaderItem(3, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableContas->setHorizontalHeaderItem(4, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableContas->setHorizontalHeaderItem(5, __qtablewidgetitem31);
        tableContas->setObjectName(QString::fromUtf8("tableContas"));
        tableContas->setGeometry(QRect(5, 50, 791, 178));
        tableContas->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableContas->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableContas->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableContas->setAlternatingRowColors(false);
        tableContas->setSelectionMode(QAbstractItemView::SingleSelection);
        tableContas->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableContas->setWordWrap(false);
        tableContas->horizontalHeader()->setDefaultSectionSize(35);
        tableContas->horizontalHeader()->setStretchLastSection(true);
        tableContas->verticalHeader()->setDefaultSectionSize(22);
        horizontalLayoutWidget = new QWidget(groupBox_8);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 20, 801, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 0, 6, 0);
        label_23 = new QLabel(horizontalLayoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout->addWidget(label_23);

        txtPesquisar = new QLineEdit(horizontalLayoutWidget);
        txtPesquisar->setObjectName(QString::fromUtf8("txtPesquisar"));
        txtPesquisar->setClearButtonEnabled(true);

        horizontalLayout->addWidget(txtPesquisar);

        btnPesquisar = new QPushButton(horizontalLayoutWidget);
        btnPesquisar->setObjectName(QString::fromUtf8("btnPesquisar"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icons/Zoom_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPesquisar->setIcon(icon9);
        btnPesquisar->setAutoDefault(true);
        btnPesquisar->setFlat(false);

        horizontalLayout->addWidget(btnPesquisar);

        btnContasOnline = new QPushButton(page_3);
        btnContasOnline->setObjectName(QString::fromUtf8("btnContasOnline"));
        btnContasOnline->setGeometry(QRect(290, 232, 100, 28));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Icons/IconSetSigns3_16x16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnContasOnline->setIcon(icon10);
        pushButton_8 = new QPushButton(page_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(390, 232, 131, 28));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Icons/UserGroup_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon11);
        btnAutoLock = new QPushButton(page_3);
        btnAutoLock->setObjectName(QString::fromUtf8("btnAutoLock"));
        btnAutoLock->setEnabled(false);
        btnAutoLock->setGeometry(QRect(40, 232, 71, 28));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Icons/lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAutoLock->setIcon(icon12);
        btnCriarConta = new QPushButton(page_3);
        btnCriarConta->setObjectName(QString::fromUtf8("btnCriarConta"));
        btnCriarConta->setGeometry(QRect(110, 232, 91, 28));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Icons/group_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCriarConta->setIcon(icon13);
        btnEditarConta = new QPushButton(page_3);
        btnEditarConta->setObjectName(QString::fromUtf8("btnEditarConta"));
        btnEditarConta->setEnabled(true);
        btnEditarConta->setGeometry(QRect(200, 232, 91, 28));
        btnEditarConta->setStyleSheet(QString::fromUtf8(""));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Icons/EditContact_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditarConta->setIcon(icon14);
        groupBox_9 = new QGroupBox(page_3);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 300, 801, 201));
        tableRoles = new QTableWidget(groupBox_9);
        if (tableRoles->columnCount() < 8)
            tableRoles->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setTextAlignment(Qt::AlignCenter);
        tableRoles->setHorizontalHeaderItem(0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setTextAlignment(Qt::AlignCenter);
        tableRoles->setHorizontalHeaderItem(1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setTextAlignment(Qt::AlignCenter);
        tableRoles->setHorizontalHeaderItem(2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setTextAlignment(Qt::AlignCenter);
        tableRoles->setHorizontalHeaderItem(3, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setTextAlignment(Qt::AlignCenter);
        tableRoles->setHorizontalHeaderItem(4, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setTextAlignment(Qt::AlignCenter);
        tableRoles->setHorizontalHeaderItem(5, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setTextAlignment(Qt::AlignCenter);
        tableRoles->setHorizontalHeaderItem(6, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setTextAlignment(Qt::AlignCenter);
        tableRoles->setHorizontalHeaderItem(7, __qtablewidgetitem39);
        tableRoles->setObjectName(QString::fromUtf8("tableRoles"));
        tableRoles->setGeometry(QRect(5, 20, 791, 178));
        tableRoles->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableRoles->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableRoles->setSelectionMode(QAbstractItemView::SingleSelection);
        tableRoles->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableRoles->setTextElideMode(Qt::ElideMiddle);
        tableRoles->setWordWrap(false);
        tableRoles->setColumnCount(8);
        tableRoles->horizontalHeader()->setVisible(false);
        tableRoles->horizontalHeader()->setCascadingSectionResizes(false);
        tableRoles->horizontalHeader()->setMinimumSectionSize(1);
        tableRoles->horizontalHeader()->setDefaultSectionSize(35);
        tableRoles->horizontalHeader()->setHighlightSections(true);
        tableRoles->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableRoles->horizontalHeader()->setStretchLastSection(true);
        tableRoles->verticalHeader()->setVisible(false);
        tableRoles->verticalHeader()->setDefaultSectionSize(22);
        pushButton_9 = new QPushButton(page_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(520, 232, 91, 28));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Icons/BOContact2_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon15);
        pushButton_10 = new QPushButton(page_3);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(610, 232, 101, 28));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Icons/coins_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon16);
        btnContasOnline_2 = new QPushButton(page_3);
        btnContasOnline_2->setObjectName(QString::fromUtf8("btnContasOnline_2"));
        btnContasOnline_2->setGeometry(QRect(10, 260, 131, 28));
        btnContasOnline_2->setIcon(icon10);
        rpanel->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        groupBox_3 = new QGroupBox(page_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 0, 601, 111));
        groupBox_3->setStyleSheet(QString::fromUtf8(""));
        groupBox_3->setFlat(false);
        gridLayoutWidget = new QWidget(groupBox_3);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 20, 601, 86));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 0, 6, 0);
        txtSurfaces = new QLineEdit(gridLayoutWidget);
        txtSurfaces->setObjectName(QString::fromUtf8("txtSurfaces"));

        gridLayout->addWidget(txtSurfaces, 2, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        txtConfigs = new QLineEdit(gridLayoutWidget);
        txtConfigs->setObjectName(QString::fromUtf8("txtConfigs"));

        gridLayout->addWidget(txtConfigs, 1, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 2, 0, 1, 1);

        txtElements = new QLineEdit(gridLayoutWidget);
        txtElements->setObjectName(QString::fromUtf8("txtElements"));

        gridLayout->addWidget(txtElements, 0, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        btnLoadElements = new QToolButton(gridLayoutWidget);
        btnLoadElements->setObjectName(QString::fromUtf8("btnLoadElements"));

        gridLayout->addWidget(btnLoadElements, 0, 2, 1, 1);

        btnLoadConfigs = new QToolButton(gridLayoutWidget);
        btnLoadConfigs->setObjectName(QString::fromUtf8("btnLoadConfigs"));

        gridLayout->addWidget(btnLoadConfigs, 1, 2, 1, 1);

        btnLoadSurfaces = new QToolButton(gridLayoutWidget);
        btnLoadSurfaces->setObjectName(QString::fromUtf8("btnLoadSurfaces"));

        gridLayout->addWidget(btnLoadSurfaces, 2, 2, 1, 1);

        btnSaveConfigs = new QPushButton(page_2);
        btnSaveConfigs->setObjectName(QString::fromUtf8("btnSaveConfigs"));
        btnSaveConfigs->setGeometry(QRect(10, 560, 291, 61));
        btnSaveConfigs->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/Resources/Save_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSaveConfigs->setIcon(icon17);
        btnSaveConfigs->setIconSize(QSize(32, 32));
        groupBox_4 = new QGroupBox(page_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 140, 300, 211));
        groupBox_4->setStyleSheet(QString::fromUtf8(""));
        formLayoutWidget_2 = new QWidget(groupBox_4);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 20, 281, 141));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setContentsMargins(6, 0, 6, 0);
        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setLayoutDirection(Qt::LeftToRight);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10->setWordWrap(false);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        txtServerIp = new QLineEdit(formLayoutWidget_2);
        txtServerIp->setObjectName(QString::fromUtf8("txtServerIp"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtServerIp);

        label_21 = new QLabel(formLayoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setLayoutDirection(Qt::LeftToRight);
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_21->setWordWrap(false);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_21);

        txtServerPort = new QLineEdit(formLayoutWidget_2);
        txtServerPort->setObjectName(QString::fromUtf8("txtServerPort"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, txtServerPort);

        label_19 = new QLabel(formLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setLayoutDirection(Qt::LeftToRight);
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_19->setWordWrap(true);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_19);

        txtIntervaloDados = new QLineEdit(formLayoutWidget_2);
        txtIntervaloDados->setObjectName(QString::fromUtf8("txtIntervaloDados"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, txtIntervaloDados);

        label_20 = new QLabel(formLayoutWidget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_20);

        txtServerPassword = new QLineEdit(formLayoutWidget_2);
        txtServerPassword->setObjectName(QString::fromUtf8("txtServerPassword"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, txtServerPassword);

        label_22 = new QLabel(formLayoutWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_22);

        txtProfileName = new QLineEdit(formLayoutWidget_2);
        txtProfileName->setObjectName(QString::fromUtf8("txtProfileName"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, txtProfileName);

        btnTestConnectionServer = new QPushButton(groupBox_4);
        btnTestConnectionServer->setObjectName(QString::fromUtf8("btnTestConnectionServer"));
        btnTestConnectionServer->setGeometry(QRect(10, 170, 281, 31));
        btnTestConnectionServer->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 35, 97);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/C:/Program Files/DevExpress 22.2/Components/Sources/Win/DevExpress.Images/Images/Communication/Radio_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnTestConnectionServer->setIcon(icon18);
        btnTestConnectionServer->setIconSize(QSize(22, 22));
        btnSelectElementsPath = new QToolButton(page_2);
        btnSelectElementsPath->setObjectName(QString::fromUtf8("btnSelectElementsPath"));
        btnSelectElementsPath->setGeometry(QRect(340, 111, 271, 21));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(320, 140, 291, 211));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(12, 30, 41, 22));
        label_13->setLayoutDirection(Qt::LeftToRight);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_13->setWordWrap(false);
        txtKey1 = new QLineEdit(groupBox);
        txtKey1->setObjectName(QString::fromUtf8("txtKey1"));
        txtKey1->setGeometry(QRect(59, 30, 221, 22));
        txtKey2 = new QLineEdit(groupBox);
        txtKey2->setObjectName(QString::fromUtf8("txtKey2"));
        txtKey2->setGeometry(QRect(59, 60, 221, 22));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(12, 60, 41, 22));
        label_14->setLayoutDirection(Qt::LeftToRight);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_14->setWordWrap(false);
        txtAsig1 = new QLineEdit(groupBox);
        txtAsig1->setObjectName(QString::fromUtf8("txtAsig1"));
        txtAsig1->setGeometry(QRect(59, 90, 221, 22));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(12, 90, 41, 22));
        label_15->setLayoutDirection(Qt::LeftToRight);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_15->setWordWrap(false);
        txtAsig2 = new QLineEdit(groupBox);
        txtAsig2->setObjectName(QString::fromUtf8("txtAsig2"));
        txtAsig2->setGeometry(QRect(59, 120, 221, 22));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(12, 120, 41, 22));
        label_16->setLayoutDirection(Qt::LeftToRight);
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_16->setWordWrap(false);
        txtFsig1 = new QLineEdit(groupBox);
        txtFsig1->setObjectName(QString::fromUtf8("txtFsig1"));
        txtFsig1->setGeometry(QRect(59, 150, 221, 22));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(12, 150, 41, 22));
        label_17->setLayoutDirection(Qt::LeftToRight);
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_17->setWordWrap(false);
        txtFsig2 = new QLineEdit(groupBox);
        txtFsig2->setObjectName(QString::fromUtf8("txtFsig2"));
        txtFsig2->setGeometry(QRect(59, 180, 221, 22));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(12, 180, 41, 22));
        label_18->setLayoutDirection(Qt::LeftToRight);
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_18->setWordWrap(false);
        btnConnection_2 = new QPushButton(page_2);
        btnConnection_2->setObjectName(QString::fromUtf8("btnConnection_2"));
        btnConnection_2->setGeometry(QRect(620, 390, 181, 61));
        btnConnection_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);"));
        listProfiles = new QListWidget(page_2);
        listProfiles->setObjectName(QString::fromUtf8("listProfiles"));
        listProfiles->setGeometry(QRect(620, 20, 181, 331));
        listProfiles->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color:rgb(20, 20, 20);\n"
"selection-background-color: rgb(0, 60, 100);"));
        btnAddProfile = new QPushButton(page_2);
        btnAddProfile->setObjectName(QString::fromUtf8("btnAddProfile"));
        btnAddProfile->setGeometry(QRect(620, 360, 91, 31));
        btnAddProfile->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        btnDeleteProfile = new QPushButton(page_2);
        btnDeleteProfile->setObjectName(QString::fromUtf8("btnDeleteProfile"));
        btnDeleteProfile->setGeometry(QRect(710, 360, 91, 31));
        btnDeleteProfile->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        rpanel->addWidget(page_2);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(818, 4, 141, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("padding-left:10px;\n"
"text-align: left;"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/iconpack/computer_network_security/certificate_information.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon19);
        pushButton_3->setIconSize(QSize(22, 22));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(959, 4, 31, 31));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/Icons/discord.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon20);
        pushButton->setIconSize(QSize(22, 22));
        pwAdmin->setCentralWidget(centralwidget);

        retranslateUi(pwAdmin);

        lpanel->setCurrentRow(-1);
        rpanel->setCurrentIndex(1);
        btnPesquisar->setDefault(true);


        QMetaObject::connectSlotsByName(pwAdmin);
    } // setupUi

    void retranslateUi(QMainWindow *pwAdmin)
    {
        pwAdmin->setWindowTitle(QApplication::translate("pwAdmin", "pwAdmin - Criado por Alien", nullptr));

        const bool __sortingEnabled = lpanel->isSortingEnabled();
        lpanel->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lpanel->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("pwAdmin", "Gerenciar Servidor", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = lpanel->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("pwAdmin", "Gerenciar Contas", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = lpanel->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("pwAdmin", "Configura\303\247\303\265es", nullptr));
        lpanel->setSortingEnabled(__sortingEnabled);

        btnConnection->setText(QApplication::translate("pwAdmin", "Conectar", nullptr));
        btnStartMap->setText(QApplication::translate("pwAdmin", "Iniciar Inst\303\242ncia", nullptr));
        btnShutdownMap->setText(QApplication::translate("pwAdmin", "Desligar Inst\303\242ncia", nullptr));
        btnManagement->setText(QApplication::translate("pwAdmin", "Gerenciamento", nullptr));
        btnCleanCache->setText(QApplication::translate("pwAdmin", "Limpar Cach\303\252", nullptr));
        txtLog->setHtml(QApplication::translate("pwAdmin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        groupBox_6->setTitle(QApplication::translate("pwAdmin", "Informa\303\247\303\265es do Servidor", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableMemoriaTroca->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("pwAdmin", "Mem\303\263ria", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableMemoriaTroca->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("pwAdmin", "Troca", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableMemoriaTroca->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("pwAdmin", "Total", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableMemoriaTroca->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("pwAdmin", "Utilizado", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableMemoriaTroca->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("pwAdmin", "Sobra", nullptr));

        const bool __sortingEnabled1 = tableMemoriaTroca->isSortingEnabled();
        tableMemoriaTroca->setSortingEnabled(false);
        tableMemoriaTroca->setSortingEnabled(__sortingEnabled1);

        QTableWidgetItem *___qtablewidgetitem5 = tableContasOnlineTotalContas->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("pwAdmin", "Contas Online", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableContasOnlineTotalContas->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("pwAdmin", "Total de Contas", nullptr));

        const bool __sortingEnabled2 = tableContasOnlineTotalContas->isSortingEnabled();
        tableContasOnlineTotalContas->setSortingEnabled(false);
        tableContasOnlineTotalContas->setSortingEnabled(__sortingEnabled2);

        label->setText(QApplication::translate("pwAdmin", "Vers\303\243o", nullptr));
        label_2->setText(QApplication::translate("pwAdmin", "ZoneID", nullptr));
        lbServerVersion->setText(QApplication::translate("pwAdmin", "-", nullptr));
        lbZoneID->setText(QApplication::translate("pwAdmin", "-", nullptr));
        label_5->setText(QApplication::translate("pwAdmin", "AID", nullptr));
        lbAID->setText(QApplication::translate("pwAdmin", "-", nullptr));
        label_7->setText(QApplication::translate("pwAdmin", "Nome", nullptr));
        lbServerName->setText(QApplication::translate("pwAdmin", "-", nullptr));
        groupBox_5->setTitle(QApplication::translate("pwAdmin", "Contas de GM", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableContasGM->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("pwAdmin", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableContasGM->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("pwAdmin", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableContasGM->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("pwAdmin", "Regras", nullptr));
        groupBox_2->setTitle(QApplication::translate("pwAdmin", "Lista de Processos", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableProcessos->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("pwAdmin", "Processos", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableProcessos->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("pwAdmin", "Mem (%)", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableProcessos->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("pwAdmin", "CPU (%)", nullptr));
        groupBox_7->setTitle(QApplication::translate("pwAdmin", "Lista de Mapas Ativos", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableMapas->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("pwAdmin", "Tag", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableMapas->horizontalHeaderItem(1);
        ___qtablewidgetitem14->setText(QApplication::translate("pwAdmin", "Inst\303\242ncia", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableMapas->horizontalHeaderItem(2);
        ___qtablewidgetitem15->setText(QApplication::translate("pwAdmin", "Mem (%)", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableMapas->horizontalHeaderItem(3);
        ___qtablewidgetitem16->setText(QApplication::translate("pwAdmin", "CPU (%)", nullptr));
        pushButton_2->setText(QApplication::translate("pwAdmin", "PushButton", nullptr));
        btnGM->setText(QString());
        groupBox_8->setTitle(QApplication::translate("pwAdmin", "Lista de Contas", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableContas->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QApplication::translate("pwAdmin", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableContas->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QApplication::translate("pwAdmin", "Usu\303\241rio", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableContas->horizontalHeaderItem(2);
        ___qtablewidgetitem19->setText(QApplication::translate("pwAdmin", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableContas->horizontalHeaderItem(3);
        ___qtablewidgetitem20->setText(QApplication::translate("pwAdmin", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableContas->horizontalHeaderItem(4);
        ___qtablewidgetitem21->setText(QApplication::translate("pwAdmin", "Endere\303\247o de IP", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableContas->horizontalHeaderItem(5);
        ___qtablewidgetitem22->setText(QApplication::translate("pwAdmin", "Criado em", nullptr));
        label_23->setText(QApplication::translate("pwAdmin", "Pesquisar", nullptr));
        txtPesquisar->setPlaceholderText(QString());
        btnPesquisar->setText(QString());
        btnContasOnline->setText(QApplication::translate("pwAdmin", "Contas Online", nullptr));
        pushButton_8->setText(QApplication::translate("pwAdmin", "Personagens Iniciais", nullptr));
        btnAutoLock->setText(QApplication::translate("pwAdmin", "Autolock", nullptr));
        btnCriarConta->setText(QApplication::translate("pwAdmin", "Criar Conta", nullptr));
        btnEditarConta->setText(QApplication::translate("pwAdmin", "Editar Conta", nullptr));
        groupBox_9->setTitle(QApplication::translate("pwAdmin", "Lista de Personagens", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableRoles->horizontalHeaderItem(0);
        ___qtablewidgetitem23->setText(QApplication::translate("pwAdmin", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableRoles->horizontalHeaderItem(1);
        ___qtablewidgetitem24->setText(QApplication::translate("pwAdmin", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableRoles->horizontalHeaderItem(2);
        ___qtablewidgetitem25->setText(QApplication::translate("pwAdmin", "N\303\255vel", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableRoles->horizontalHeaderItem(3);
        ___qtablewidgetitem26->setText(QApplication::translate("pwAdmin", "Classe", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableRoles->horizontalHeaderItem(4);
        ___qtablewidgetitem27->setText(QApplication::translate("pwAdmin", "Cultivo", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableRoles->horizontalHeaderItem(5);
        ___qtablewidgetitem28->setText(QApplication::translate("pwAdmin", "Cl\303\243", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableRoles->horizontalHeaderItem(6);
        ___qtablewidgetitem29->setText(QApplication::translate("pwAdmin", "Reputa\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableRoles->horizontalHeaderItem(7);
        ___qtablewidgetitem30->setText(QApplication::translate("pwAdmin", "Criado em", nullptr));
        pushButton_9->setText(QApplication::translate("pwAdmin", "Lista de Cl\303\243s", nullptr));
        pushButton_10->setText(QApplication::translate("pwAdmin", "Enviar OURO", nullptr));
        btnContasOnline_2->setText(QApplication::translate("pwAdmin", "Jogadores Online", nullptr));
        groupBox_3->setTitle(QApplication::translate("pwAdmin", "Selecionar arquivos", nullptr));
        label_9->setText(QApplication::translate("pwAdmin", "elements.data", nullptr));
        label_12->setText(QApplication::translate("pwAdmin", "surfaces.pck", nullptr));
        label_11->setText(QApplication::translate("pwAdmin", "configs.pck", nullptr));
        btnLoadElements->setText(QApplication::translate("pwAdmin", "...", nullptr));
        btnLoadConfigs->setText(QApplication::translate("pwAdmin", "...", nullptr));
        btnLoadSurfaces->setText(QApplication::translate("pwAdmin", "...", nullptr));
        btnSaveConfigs->setText(QApplication::translate("pwAdmin", "Salvar Todas as Configura\303\247\303\265es", nullptr));
        groupBox_4->setTitle(QApplication::translate("pwAdmin", "Configura\303\247\303\265es do Servidor", nullptr));
        label_10->setText(QApplication::translate("pwAdmin", "IP Servidor", nullptr));
        txtServerIp->setPlaceholderText(QString());
        label_21->setText(QApplication::translate("pwAdmin", "Porta Servidor", nullptr));
        txtServerPort->setPlaceholderText(QString());
        label_19->setText(QApplication::translate("pwAdmin", "Intervalo entre dados(ms)", nullptr));
        txtIntervaloDados->setText(QApplication::translate("pwAdmin", "2000", nullptr));
        txtIntervaloDados->setPlaceholderText(QString());
        label_20->setText(QApplication::translate("pwAdmin", "Senha", nullptr));
        label_22->setText(QApplication::translate("pwAdmin", "Nome", nullptr));
        btnTestConnectionServer->setText(QApplication::translate("pwAdmin", "Verificar Conex\303\243o", nullptr));
#ifndef QT_NO_TOOLTIP
        btnSelectElementsPath->setToolTip(QApplication::translate("pwAdmin", "Seleciona a pasta element para preencher automaticamente os campos abaixo", nullptr));
#endif // QT_NO_TOOLTIP
        btnSelectElementsPath->setText(QApplication::translate("pwAdmin", "Selecionar pasta element para ajuste automatico...", nullptr));
        groupBox->setTitle(QApplication::translate("pwAdmin", "PCK Keys", nullptr));
        label_13->setText(QApplication::translate("pwAdmin", "KEY#1", nullptr));
        txtKey1->setText(QApplication::translate("pwAdmin", "-1466731422", nullptr));
        txtKey1->setPlaceholderText(QApplication::translate("pwAdmin", "-1466731422", nullptr));
        txtKey2->setText(QApplication::translate("pwAdmin", "-240896429", nullptr));
        txtKey2->setPlaceholderText(QApplication::translate("pwAdmin", "-240896429", nullptr));
        label_14->setText(QApplication::translate("pwAdmin", "KEY#2", nullptr));
        txtAsig1->setText(QApplication::translate("pwAdmin", "-33685778", nullptr));
        txtAsig1->setPlaceholderText(QApplication::translate("pwAdmin", "-33685778", nullptr));
        label_15->setText(QApplication::translate("pwAdmin", "ASIG#1", nullptr));
        txtAsig2->setText(QApplication::translate("pwAdmin", "-267534609", nullptr));
        txtAsig2->setPlaceholderText(QApplication::translate("pwAdmin", "-267534609", nullptr));
        label_16->setText(QApplication::translate("pwAdmin", "ASIG#2", nullptr));
        txtFsig1->setText(QApplication::translate("pwAdmin", "1305093103", nullptr));
        txtFsig1->setPlaceholderText(QApplication::translate("pwAdmin", "1305093103", nullptr));
        label_17->setText(QApplication::translate("pwAdmin", "FSIG#1", nullptr));
        txtFsig2->setText(QApplication::translate("pwAdmin", "1453361591", nullptr));
        txtFsig2->setPlaceholderText(QApplication::translate("pwAdmin", "1453361591", nullptr));
        label_18->setText(QApplication::translate("pwAdmin", "FSIG#2", nullptr));
        btnConnection_2->setText(QApplication::translate("pwAdmin", "Salvar Configura\303\247\303\265es", nullptr));
        btnAddProfile->setText(QApplication::translate("pwAdmin", "Adicionar", nullptr));
        btnDeleteProfile->setText(QApplication::translate("pwAdmin", "Remover", nullptr));
        pushButton_3->setText(QApplication::translate("pwAdmin", "Alien", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pwAdmin: public Ui_pwAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PWADMIN_H

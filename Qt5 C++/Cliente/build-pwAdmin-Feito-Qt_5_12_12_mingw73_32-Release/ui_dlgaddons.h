/********************************************************************************
** Form generated from reading UI file 'dlgaddons.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGADDONS_H
#define UI_DLGADDONS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgAddons
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QListWidget *addon_todos_tipos;
    QGroupBox *groupBox_2;
    QListWidget *addon_todos_addons;
    QWidget *tab_2;
    QGroupBox *groupBox_3;
    QListWidget *addon_refino_addons;
    QGroupBox *groupBox_4;
    QListWidget *addon_refino_tipos;
    QWidget *tab_3;
    QGroupBox *groupBox_5;
    QListWidget *addon_pedra_addons;
    QGroupBox *groupBox_6;
    QListWidget *addon_pedra_tipos;
    QWidget *tab_4;
    QGroupBox *groupBox_7;
    QListWidget *addon_gravura_addons;
    QGroupBox *groupBox_8;
    QListWidget *addon_gravura_tipos;
    QWidget *tab_6;
    QGroupBox *groupBox_11;
    QListWidget *addon_astrolabio_addons;
    QGroupBox *groupBox_12;
    QListWidget *addon_astrolabio_tipos;
    QWidget *tab_5;
    QGroupBox *groupBox_9;
    QListWidget *addon_165_addons;
    QGroupBox *groupBox_10;
    QListWidget *addon_165_tipos;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpinBox *spinBox;
    QLabel *label;

    void setupUi(QDialog *DlgAddons)
    {
        if (DlgAddons->objectName().isEmpty())
            DlgAddons->setObjectName(QString::fromUtf8("DlgAddons"));
        DlgAddons->resize(780, 418);
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
        DlgAddons->setPalette(palette);
        tabWidget = new QTabWidget(DlgAddons);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 761, 361));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 251, 331));
        addon_todos_tipos = new QListWidget(groupBox);
        addon_todos_tipos->setObjectName(QString::fromUtf8("addon_todos_tipos"));
        addon_todos_tipos->setGeometry(QRect(3, 20, 245, 308));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(270, 0, 481, 331));
        addon_todos_addons = new QListWidget(groupBox_2);
        addon_todos_addons->setObjectName(QString::fromUtf8("addon_todos_addons"));
        addon_todos_addons->setGeometry(QRect(3, 20, 475, 308));
        addon_todos_addons->setEditTriggers(QAbstractItemView::NoEditTriggers);
        addon_todos_addons->setSelectionBehavior(QAbstractItemView::SelectRows);
        addon_todos_addons->setTextElideMode(Qt::ElideNone);
        addon_todos_addons->setUniformItemSizes(false);
        addon_todos_addons->setBatchSize(30);
        addon_todos_addons->setWordWrap(false);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(270, 0, 481, 331));
        addon_refino_addons = new QListWidget(groupBox_3);
        addon_refino_addons->setObjectName(QString::fromUtf8("addon_refino_addons"));
        addon_refino_addons->setGeometry(QRect(3, 20, 475, 308));
        addon_refino_addons->setEditTriggers(QAbstractItemView::NoEditTriggers);
        addon_refino_addons->setSelectionBehavior(QAbstractItemView::SelectRows);
        addon_refino_addons->setUniformItemSizes(true);
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 0, 251, 331));
        addon_refino_tipos = new QListWidget(groupBox_4);
        addon_refino_tipos->setObjectName(QString::fromUtf8("addon_refino_tipos"));
        addon_refino_tipos->setGeometry(QRect(3, 20, 245, 308));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox_5 = new QGroupBox(tab_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(270, 0, 481, 331));
        addon_pedra_addons = new QListWidget(groupBox_5);
        addon_pedra_addons->setObjectName(QString::fromUtf8("addon_pedra_addons"));
        addon_pedra_addons->setGeometry(QRect(3, 20, 475, 308));
        addon_pedra_addons->setEditTriggers(QAbstractItemView::NoEditTriggers);
        addon_pedra_addons->setSelectionBehavior(QAbstractItemView::SelectRows);
        addon_pedra_addons->setUniformItemSizes(true);
        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 0, 251, 331));
        addon_pedra_tipos = new QListWidget(groupBox_6);
        addon_pedra_tipos->setObjectName(QString::fromUtf8("addon_pedra_tipos"));
        addon_pedra_tipos->setGeometry(QRect(3, 20, 245, 308));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        groupBox_7 = new QGroupBox(tab_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(270, 0, 481, 331));
        addon_gravura_addons = new QListWidget(groupBox_7);
        addon_gravura_addons->setObjectName(QString::fromUtf8("addon_gravura_addons"));
        addon_gravura_addons->setGeometry(QRect(3, 20, 475, 308));
        addon_gravura_addons->setEditTriggers(QAbstractItemView::NoEditTriggers);
        addon_gravura_addons->setSelectionBehavior(QAbstractItemView::SelectRows);
        addon_gravura_addons->setUniformItemSizes(true);
        groupBox_8 = new QGroupBox(tab_4);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 0, 251, 331));
        addon_gravura_tipos = new QListWidget(groupBox_8);
        addon_gravura_tipos->setObjectName(QString::fromUtf8("addon_gravura_tipos"));
        addon_gravura_tipos->setGeometry(QRect(3, 20, 245, 308));
        tabWidget->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        groupBox_11 = new QGroupBox(tab_6);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(270, 0, 481, 331));
        addon_astrolabio_addons = new QListWidget(groupBox_11);
        addon_astrolabio_addons->setObjectName(QString::fromUtf8("addon_astrolabio_addons"));
        addon_astrolabio_addons->setGeometry(QRect(3, 20, 475, 308));
        addon_astrolabio_addons->setEditTriggers(QAbstractItemView::NoEditTriggers);
        addon_astrolabio_addons->setSelectionBehavior(QAbstractItemView::SelectRows);
        addon_astrolabio_addons->setUniformItemSizes(true);
        groupBox_12 = new QGroupBox(tab_6);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(10, 0, 251, 331));
        addon_astrolabio_tipos = new QListWidget(groupBox_12);
        addon_astrolabio_tipos->setObjectName(QString::fromUtf8("addon_astrolabio_tipos"));
        addon_astrolabio_tipos->setGeometry(QRect(3, 20, 245, 308));
        tabWidget->addTab(tab_6, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        groupBox_9 = new QGroupBox(tab_5);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(270, 0, 481, 331));
        addon_165_addons = new QListWidget(groupBox_9);
        addon_165_addons->setObjectName(QString::fromUtf8("addon_165_addons"));
        addon_165_addons->setGeometry(QRect(3, 20, 475, 308));
        addon_165_addons->setEditTriggers(QAbstractItemView::NoEditTriggers);
        addon_165_addons->setSelectionBehavior(QAbstractItemView::SelectRows);
        addon_165_addons->setUniformItemSizes(true);
        groupBox_10 = new QGroupBox(tab_5);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 0, 251, 331));
        addon_165_tipos = new QListWidget(groupBox_10);
        addon_165_tipos->setObjectName(QString::fromUtf8("addon_165_tipos"));
        addon_165_tipos->setGeometry(QRect(3, 20, 245, 308));
        tabWidget->addTab(tab_5, QString());
        pushButton = new QPushButton(DlgAddons);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 370, 121, 31));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 0, 0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(DlgAddons);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 370, 121, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 85, 0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        spinBox = new QSpinBox(DlgAddons);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(10, 371, 81, 31));
        spinBox->setReadOnly(true);
        spinBox->setMaximum(999999999);
        label = new QLabel(DlgAddons);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 372, 411, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);"));

        retranslateUi(DlgAddons);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DlgAddons);
    } // setupUi

    void retranslateUi(QDialog *DlgAddons)
    {
        DlgAddons->setWindowTitle(QApplication::translate("DlgAddons", "Selecione um addon", nullptr));
        groupBox->setTitle(QApplication::translate("DlgAddons", "Tipos", nullptr));
        groupBox_2->setTitle(QApplication::translate("DlgAddons", "Addons", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DlgAddons", "Todos os Addons", nullptr));
        groupBox_3->setTitle(QApplication::translate("DlgAddons", "Addons", nullptr));
        groupBox_4->setTitle(QApplication::translate("DlgAddons", "Tipos", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DlgAddons", "Refino", nullptr));
        groupBox_5->setTitle(QApplication::translate("DlgAddons", "Addons", nullptr));
        groupBox_6->setTitle(QApplication::translate("DlgAddons", "Tipos", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("DlgAddons", "Pedra", nullptr));
        groupBox_7->setTitle(QApplication::translate("DlgAddons", "Addons", nullptr));
        groupBox_8->setTitle(QApplication::translate("DlgAddons", "Tipos", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("DlgAddons", "Gravura", nullptr));
        groupBox_11->setTitle(QApplication::translate("DlgAddons", "Addons", nullptr));
        groupBox_12->setTitle(QApplication::translate("DlgAddons", "Tipos", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("DlgAddons", "Astrol\303\241bio", nullptr));
        groupBox_9->setTitle(QApplication::translate("DlgAddons", "Addons", nullptr));
        groupBox_10->setTitle(QApplication::translate("DlgAddons", "Tipos", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("DlgAddons", "Novos", nullptr));
        pushButton->setText(QApplication::translate("DlgAddons", "Fechar", nullptr));
        pushButton_2->setText(QApplication::translate("DlgAddons", "Selecionar", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DlgAddons: public Ui_DlgAddons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGADDONS_H

/********************************************************************************
** Form generated from reading UI file 'gmprivileges.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GMPRIVILEGES_H
#define UI_GMPRIVILEGES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GMPrivileges
{
public:
    QPushButton *btnConfirm;
    QListWidget *listWidget;
    QPushButton *btn_uncheckAll;
    QPushButton *btn_checkAll;
    QPushButton *btnCancel;

    void setupUi(QDialog *GMPrivileges)
    {
        if (GMPrivileges->objectName().isEmpty())
            GMPrivileges->setObjectName(QString::fromUtf8("GMPrivileges"));
        GMPrivileges->resize(552, 321);
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
        GMPrivileges->setPalette(palette);
        GMPrivileges->setStyleSheet(QString::fromUtf8("QMessageBox {\n"
"    background-color: #121212;\n"
"}\n"
"QMessageBox QLabel {\n"
"    color: #fff;\n"
"}\n"
"QMessageBox QPushButton{\n"
"	color: #fff;\n"
"	background-color: #121212;\n"
"}"));
        btnConfirm = new QPushButton(GMPrivileges);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));
        btnConfirm->setGeometry(QRect(270, 280, 131, 30));
        btnConfirm->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: {255,255,255};"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnConfirm->setIcon(icon);
        listWidget = new QListWidget(GMPrivileges);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 6, 531, 271));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(18, 18, 18);\n"
"color: rgb(255, 255, 255)"));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setAutoScroll(false);
        listWidget->setMovement(QListView::Static);
        listWidget->setFlow(QListView::TopToBottom);
        listWidget->setProperty("isWrapping", QVariant(true));
        listWidget->setResizeMode(QListView::Fixed);
        listWidget->setLayoutMode(QListView::SinglePass);
        listWidget->setGridSize(QSize(250, 15));
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setModelColumn(0);
        listWidget->setUniformItemSizes(true);
        listWidget->setBatchSize(100);
        listWidget->setWordWrap(false);
        listWidget->setSelectionRectVisible(false);
        btn_uncheckAll = new QPushButton(GMPrivileges);
        btn_uncheckAll->setObjectName(QString::fromUtf8("btn_uncheckAll"));
        btn_uncheckAll->setGeometry(QRect(140, 280, 121, 30));
        btn_uncheckAll->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 22, 22);\n"
"color: rgb(255, 255, 255)"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/None_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_uncheckAll->setIcon(icon1);
        btn_checkAll = new QPushButton(GMPrivileges);
        btn_checkAll->setObjectName(QString::fromUtf8("btn_checkAll"));
        btn_checkAll->setGeometry(QRect(10, 280, 121, 30));
        btn_checkAll->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 22, 22);\n"
"color: rgb(255, 255, 255)"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/CheckButtons_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_checkAll->setIcon(icon2);
        btnCancel = new QPushButton(GMPrivileges);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(410, 280, 131, 30));
        btnCancel->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"color: {255,255,255};"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon3);

        retranslateUi(GMPrivileges);

        QMetaObject::connectSlotsByName(GMPrivileges);
    } // setupUi

    void retranslateUi(QDialog *GMPrivileges)
    {
        GMPrivileges->setWindowTitle(QApplication::translate("GMPrivileges", "Editar privil\303\251gios do GM", nullptr));
        btnConfirm->setText(QApplication::translate("GMPrivileges", "Confirmar", nullptr));
        btn_uncheckAll->setText(QApplication::translate("GMPrivileges", "Desmarcar Todos", nullptr));
        btn_checkAll->setText(QApplication::translate("GMPrivileges", "Marcar Todos", nullptr));
        btnCancel->setText(QApplication::translate("GMPrivileges", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GMPrivileges: public Ui_GMPrivileges {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GMPRIVILEGES_H

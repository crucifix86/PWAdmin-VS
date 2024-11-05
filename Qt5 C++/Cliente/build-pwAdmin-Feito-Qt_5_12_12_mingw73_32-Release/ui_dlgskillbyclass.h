/********************************************************************************
** Form generated from reading UI file 'dlgskillbyclass.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSKILLBYCLASS_H
#define UI_DLGSKILLBYCLASS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgSkillByClass
{
public:
    QTableWidget *tableWidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QCheckBox *cbGod;
    QCheckBox *cbEvil;
    QCheckBox *cb79;
    QCheckBox *cb100;
    QCheckBox *cbNormal;
    QCheckBox *cbRuna;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DlgSkillByClass)
    {
        if (DlgSkillByClass->objectName().isEmpty())
            DlgSkillByClass->setObjectName(QString::fromUtf8("DlgSkillByClass"));
        DlgSkillByClass->resize(741, 589);
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
        DlgSkillByClass->setPalette(palette);
        tableWidget = new QTableWidget(DlgSkillByClass);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 130, 341, 411));
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        formLayoutWidget = new QWidget(DlgSkillByClass);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(360, 10, 151, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        cbGod = new QCheckBox(formLayoutWidget);
        cbGod->setObjectName(QString::fromUtf8("cbGod"));

        formLayout->setWidget(0, QFormLayout::LabelRole, cbGod);

        cbEvil = new QCheckBox(formLayoutWidget);
        cbEvil->setObjectName(QString::fromUtf8("cbEvil"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cbEvil);

        cb79 = new QCheckBox(formLayoutWidget);
        cb79->setObjectName(QString::fromUtf8("cb79"));

        formLayout->setWidget(1, QFormLayout::LabelRole, cb79);

        cb100 = new QCheckBox(formLayoutWidget);
        cb100->setObjectName(QString::fromUtf8("cb100"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cb100);

        cbNormal = new QCheckBox(formLayoutWidget);
        cbNormal->setObjectName(QString::fromUtf8("cbNormal"));

        formLayout->setWidget(2, QFormLayout::LabelRole, cbNormal);

        cbRuna = new QCheckBox(formLayoutWidget);
        cbRuna->setObjectName(QString::fromUtf8("cbRuna"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cbRuna);

        pushButton = new QPushButton(DlgSkillByClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 550, 341, 30));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconpack/basic_foundation/check.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        listWidget = new QListWidget(DlgSkillByClass);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 341, 111));
        listWidget->setLayoutDirection(Qt::LeftToRight);
        listWidget->setFrameShape(QFrame::StyledPanel);
        listWidget->setMovement(QListView::Static);
        listWidget->setFlow(QListView::LeftToRight);
        listWidget->setProperty("isWrapping", QVariant(true));
        listWidget->setResizeMode(QListView::Fixed);
        listWidget->setLayoutMode(QListView::SinglePass);
        listWidget->setSpacing(5);
        listWidget->setGridSize(QSize(100, 20));
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setModelColumn(0);
        listWidget->setUniformItemSizes(false);
        listWidget->setBatchSize(100);
        listWidget->setWordWrap(true);
        textBrowser = new QTextBrowser(DlgSkillByClass);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(360, 130, 371, 411));
        pushButton_2 = new QPushButton(DlgSkillByClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 550, 371, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"color: {255,255,255};"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconpack/basic_foundation/delete.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        retranslateUi(DlgSkillByClass);

        QMetaObject::connectSlotsByName(DlgSkillByClass);
    } // setupUi

    void retranslateUi(QDialog *DlgSkillByClass)
    {
        DlgSkillByClass->setWindowTitle(QApplication::translate("DlgSkillByClass", "Adicionar habilidades por classe", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DlgSkillByClass", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DlgSkillByClass", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DlgSkillByClass", "Rank", nullptr));
        cbGod->setText(QApplication::translate("DlgSkillByClass", "God", nullptr));
        cbEvil->setText(QApplication::translate("DlgSkillByClass", "Evil", nullptr));
        cb79->setText(QApplication::translate("DlgSkillByClass", "79", nullptr));
        cb100->setText(QApplication::translate("DlgSkillByClass", "100", nullptr));
        cbNormal->setText(QApplication::translate("DlgSkillByClass", "Normal", nullptr));
        cbRuna->setText(QApplication::translate("DlgSkillByClass", "Runa", nullptr));
        pushButton->setText(QApplication::translate("DlgSkillByClass", "Selecionar", nullptr));
        pushButton_2->setText(QApplication::translate("DlgSkillByClass", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgSkillByClass: public Ui_DlgSkillByClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSKILLBYCLASS_H

/****************************************************************************
** Meta object code from reading C++ file 'dlgforcedataeditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pwAdmin-Feito/dlgforcedataeditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgforcedataeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DlgForceDataEditor_t {
    QByteArrayData data[17];
    char stringdata0[316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DlgForceDataEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DlgForceDataEditor_t qt_meta_stringdata_DlgForceDataEditor = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DlgForceDataEditor"
QT_MOC_LITERAL(1, 19, 11), // "textChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "str"
QT_MOC_LITERAL(4, 36, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 58, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(6, 82, 26), // "on_tableWidget_itemClicked"
QT_MOC_LITERAL(7, 109, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(8, 127, 4), // "item"
QT_MOC_LITERAL(9, 132, 29), // "on_txtOrdemAtual_valueChanged"
QT_MOC_LITERAL(10, 162, 4), // "arg1"
QT_MOC_LITERAL(11, 167, 21), // "on_btn_search_clicked"
QT_MOC_LITERAL(12, 189, 24), // "on_txtOrdem_valueChanged"
QT_MOC_LITERAL(13, 214, 28), // "on_txtPrestigio_valueChanged"
QT_MOC_LITERAL(14, 243, 31), // "on_txtContribuicao_valueChanged"
QT_MOC_LITERAL(15, 275, 18), // "on_btn_add_clicked"
QT_MOC_LITERAL(16, 294, 21) // "on_btn_delete_clicked"

    },
    "DlgForceDataEditor\0textChanged\0\0str\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_tableWidget_itemClicked\0QTableWidgetItem*\0"
    "item\0on_txtOrdemAtual_valueChanged\0"
    "arg1\0on_btn_search_clicked\0"
    "on_txtOrdem_valueChanged\0"
    "on_txtPrestigio_valueChanged\0"
    "on_txtContribuicao_valueChanged\0"
    "on_btn_add_clicked\0on_btn_delete_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DlgForceDataEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    1,   79,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
       9,    1,   86,    2, 0x08 /* Private */,
      12,    1,   89,    2, 0x08 /* Private */,
      13,    1,   92,    2, 0x08 /* Private */,
      14,    1,   95,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DlgForceDataEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgForceDataEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_tableWidget_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_txtOrdemAtual_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_btn_search_clicked(); break;
        case 6: _t->on_txtOrdemAtual_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_txtOrdem_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_txtPrestigio_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_txtContribuicao_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_btn_add_clicked(); break;
        case 11: _t->on_btn_delete_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DlgForceDataEditor::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DlgForceDataEditor.data,
    qt_meta_data_DlgForceDataEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DlgForceDataEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DlgForceDataEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DlgForceDataEditor.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DlgForceDataEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

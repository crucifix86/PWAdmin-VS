/****************************************************************************
** Meta object code from reading C++ file 'dlgclassmask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pwAdmin-Feito/dlgclassmask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgclassmask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DlgClassMask_t {
    QByteArrayData data[13];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DlgClassMask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DlgClassMask_t qt_meta_stringdata_DlgClassMask = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DlgClassMask"
QT_MOC_LITERAL(1, 13, 20), // "checkBoxStateChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "state"
QT_MOC_LITERAL(4, 41, 25), // "on_listWidget_itemChanged"
QT_MOC_LITERAL(5, 67, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(6, 84, 4), // "item"
QT_MOC_LITERAL(7, 89, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 111, 20), // "on_cb13_stateChanged"
QT_MOC_LITERAL(9, 132, 4), // "arg1"
QT_MOC_LITERAL(10, 137, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(11, 161, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(12, 185, 23) // "on_pushButton_4_clicked"

    },
    "DlgClassMask\0checkBoxStateChanged\0\0"
    "state\0on_listWidget_itemChanged\0"
    "QListWidgetItem*\0item\0on_pushButton_clicked\0"
    "on_cb13_stateChanged\0arg1\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DlgClassMask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,
      11,    0,   60,    2, 0x08 /* Private */,
      12,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DlgClassMask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgClassMask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkBoxStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_listWidget_itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_cb13_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DlgClassMask::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DlgClassMask.data,
    qt_meta_data_DlgClassMask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DlgClassMask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DlgClassMask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DlgClassMask.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DlgClassMask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

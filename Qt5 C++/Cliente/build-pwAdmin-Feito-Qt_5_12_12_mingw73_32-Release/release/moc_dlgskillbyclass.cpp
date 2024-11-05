/****************************************************************************
** Meta object code from reading C++ file 'dlgskillbyclass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pwAdmin-Feito/dlgskillbyclass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgskillbyclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DlgSkillByClass_t {
    QByteArrayData data[13];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DlgSkillByClass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DlgSkillByClass_t qt_meta_stringdata_DlgSkillByClass = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DlgSkillByClass"
QT_MOC_LITERAL(1, 16, 26), // "on_tableWidget_itemClicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(4, 62, 4), // "item"
QT_MOC_LITERAL(5, 67, 25), // "on_listWidget_itemChanged"
QT_MOC_LITERAL(6, 93, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(7, 110, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 132, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(9, 156, 22), // "on_cbEvil_stateChanged"
QT_MOC_LITERAL(10, 179, 4), // "arg1"
QT_MOC_LITERAL(11, 184, 21), // "on_cbGod_stateChanged"
QT_MOC_LITERAL(12, 206, 22) // "on_cbRuna_stateChanged"

    },
    "DlgSkillByClass\0on_tableWidget_itemClicked\0"
    "\0QTableWidgetItem*\0item\0"
    "on_listWidget_itemChanged\0QListWidgetItem*\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_cbEvil_stateChanged\0arg1\0"
    "on_cbGod_stateChanged\0on_cbRuna_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DlgSkillByClass[] = {

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
       5,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,
      11,    1,   60,    2, 0x08 /* Private */,
      12,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void DlgSkillByClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgSkillByClass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tableWidget_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_listWidget_itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_cbEvil_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_cbGod_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_cbRuna_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DlgSkillByClass::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DlgSkillByClass.data,
    qt_meta_data_DlgSkillByClass,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DlgSkillByClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DlgSkillByClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DlgSkillByClass.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DlgSkillByClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

/****************************************************************************
** Meta object code from reading C++ file 'dlgmanagment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pwAdmin-Feito/dlgmanagment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgmanagment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DlgManagment_t {
    QByteArrayData data[17];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DlgManagment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DlgManagment_t qt_meta_stringdata_DlgManagment = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DlgManagment"
QT_MOC_LITERAL(1, 13, 16), // "processCompleted"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "startWork"
QT_MOC_LITERAL(4, 41, 6), // "msleep"
QT_MOC_LITERAL(5, 48, 8), // "progress"
QT_MOC_LITERAL(6, 57, 10), // "InitServer"
QT_MOC_LITERAL(7, 68, 10), // "InitFinish"
QT_MOC_LITERAL(8, 79, 10), // "StopServer"
QT_MOC_LITERAL(9, 90, 10), // "StopFinish"
QT_MOC_LITERAL(10, 101, 20), // "checkBoxStateChanged"
QT_MOC_LITERAL(11, 122, 5), // "state"
QT_MOC_LITERAL(12, 128, 22), // "on_txtExp_valueChanged"
QT_MOC_LITERAL(13, 151, 4), // "arg1"
QT_MOC_LITERAL(14, 156, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(15, 178, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(16, 202, 23) // "on_pushButton_3_clicked"

    },
    "DlgManagment\0processCompleted\0\0startWork\0"
    "msleep\0progress\0InitServer\0InitFinish\0"
    "StopServer\0StopFinish\0checkBoxStateChanged\0"
    "state\0on_txtExp_valueChanged\0arg1\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DlgManagment[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    2,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   75,    2, 0x08 /* Private */,
       7,    1,   76,    2, 0x08 /* Private */,
       8,    0,   79,    2, 0x08 /* Private */,
       9,    1,   80,    2, 0x08 /* Private */,
      10,    1,   83,    2, 0x08 /* Private */,
      12,    1,   86,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DlgManagment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgManagment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processCompleted(); break;
        case 1: _t->startWork((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->InitServer(); break;
        case 3: _t->InitFinish((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->StopServer(); break;
        case 5: _t->StopFinish((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->checkBoxStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_txtExp_valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DlgManagment::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DlgManagment::processCompleted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DlgManagment::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DlgManagment::startWork)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DlgManagment::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DlgManagment.data,
    qt_meta_data_DlgManagment,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DlgManagment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DlgManagment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DlgManagment.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DlgManagment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void DlgManagment::processCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DlgManagment::startWork(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

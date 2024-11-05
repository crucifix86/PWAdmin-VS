/****************************************************************************
** Meta object code from reading C++ file 'Worker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pwAdmin-Feito/Worker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Worker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Worker_t {
    QByteArrayData data[20];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Worker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Worker_t qt_meta_stringdata_Worker = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Worker"
QT_MOC_LITERAL(1, 7, 7), // "logWork"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 3), // "log"
QT_MOC_LITERAL(4, 20, 3), // "ret"
QT_MOC_LITERAL(5, 24, 4), // "time"
QT_MOC_LITERAL(6, 29, 5), // "color"
QT_MOC_LITERAL(7, 35, 15), // "connectedServer"
QT_MOC_LITERAL(8, 51, 12), // "workFinished"
QT_MOC_LITERAL(9, 64, 8), // "progress"
QT_MOC_LITERAL(10, 73, 20), // "readElementsFinished"
QT_MOC_LITERAL(11, 94, 9), // "arquivos&"
QT_MOC_LITERAL(12, 104, 2), // "pw"
QT_MOC_LITERAL(13, 107, 16), // "readPcksFinished"
QT_MOC_LITERAL(14, 124, 9), // "doConnect"
QT_MOC_LITERAL(15, 134, 15), // "WorkerReadDatas"
QT_MOC_LITERAL(16, 150, 14), // "WorkerReadData"
QT_MOC_LITERAL(17, 165, 6), // "doWork"
QT_MOC_LITERAL(18, 172, 6), // "msleep"
QT_MOC_LITERAL(19, 179, 14) // "WorkerReadPcks"

    },
    "Worker\0logWork\0\0log\0ret\0time\0color\0"
    "connectedServer\0workFinished\0progress\0"
    "readElementsFinished\0arquivos&\0pw\0"
    "readPcksFinished\0doConnect\0WorkerReadDatas\0"
    "WorkerReadData\0doWork\0msleep\0"
    "WorkerReadPcks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Worker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   79,    2, 0x06 /* Public */,
       1,    3,   88,    2, 0x26 /* Public | MethodCloned */,
       1,    2,   95,    2, 0x26 /* Public | MethodCloned */,
       1,    1,  100,    2, 0x26 /* Public | MethodCloned */,
       7,    0,  103,    2, 0x06 /* Public */,
       8,    1,  104,    2, 0x06 /* Public */,
      10,    1,  107,    2, 0x06 /* Public */,
      13,    1,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  113,    2, 0x0a /* Public */,
      15,    0,  114,    2, 0x0a /* Public */,
      16,    0,  115,    2, 0x0a /* Public */,
      17,    2,  116,    2, 0x0a /* Public */,
      19,    0,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, QMetaType::QColor,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,    9,
    QMetaType::Void,

       0        // eod
};

void Worker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Worker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logWork((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QColor(*)>(_a[4]))); break;
        case 1: _t->logWork((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->logWork((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->logWork((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->connectedServer(); break;
        case 5: _t->workFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->readElementsFinished((*reinterpret_cast< arquivos(*)>(_a[1]))); break;
        case 7: _t->readPcksFinished((*reinterpret_cast< arquivos(*)>(_a[1]))); break;
        case 8: _t->doConnect(); break;
        case 9: _t->WorkerReadDatas(); break;
        case 10: _t->WorkerReadData(); break;
        case 11: _t->doWork((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->WorkerReadPcks(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Worker::*)(QString , bool , bool , QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::logWork)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::connectedServer)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Worker::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::workFinished)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Worker::*)(arquivos & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::readElementsFinished)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Worker::*)(arquivos & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::readPcksFinished)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Worker::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Worker.data,
    qt_meta_data_Worker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Worker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Worker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Worker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Worker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Worker::logWork(QString _t1, bool _t2, bool _t3, QColor _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 4
void Worker::connectedServer()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Worker::workFinished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Worker::readElementsFinished(arquivos & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Worker::readPcksFinished(arquivos & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'dlgskills.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pwAdmin-Feito/dlgskills.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgskills.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DlgSkills_t {
    QByteArrayData data[19];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DlgSkills_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DlgSkills_t qt_meta_stringdata_DlgSkills = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DlgSkills"
QT_MOC_LITERAL(1, 10, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 26), // "on_tableWidget_itemClicked"
QT_MOC_LITERAL(4, 62, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(5, 80, 4), // "item"
QT_MOC_LITERAL(6, 85, 27), // "on_btn_add_by_class_clicked"
QT_MOC_LITERAL(7, 113, 30), // "on_btn_remove_selected_clicked"
QT_MOC_LITERAL(8, 144, 24), // "on_btn_max_level_clicked"
QT_MOC_LITERAL(9, 169, 26), // "on_tableWidget_cellChanged"
QT_MOC_LITERAL(10, 196, 3), // "row"
QT_MOC_LITERAL(11, 200, 6), // "column"
QT_MOC_LITERAL(12, 207, 33), // "on_tableWidget_currentCellCha..."
QT_MOC_LITERAL(13, 241, 10), // "currentRow"
QT_MOC_LITERAL(14, 252, 13), // "currentColumn"
QT_MOC_LITERAL(15, 266, 11), // "previousRow"
QT_MOC_LITERAL(16, 278, 14), // "previousColumn"
QT_MOC_LITERAL(17, 293, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(18, 315, 23) // "on_pushButton_3_clicked"

    },
    "DlgSkills\0on_pushButton_2_clicked\0\0"
    "on_tableWidget_itemClicked\0QTableWidgetItem*\0"
    "item\0on_btn_add_by_class_clicked\0"
    "on_btn_remove_selected_clicked\0"
    "on_btn_max_level_clicked\0"
    "on_tableWidget_cellChanged\0row\0column\0"
    "on_tableWidget_currentCellChanged\0"
    "currentRow\0currentColumn\0previousRow\0"
    "previousColumn\0on_pushButton_clicked\0"
    "on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DlgSkills[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    2,   66,    2, 0x08 /* Private */,
      12,    4,   71,    2, 0x08 /* Private */,
      17,    0,   80,    2, 0x08 /* Private */,
      18,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DlgSkills::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgSkills *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_tableWidget_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_btn_add_by_class_clicked(); break;
        case 3: _t->on_btn_remove_selected_clicked(); break;
        case 4: _t->on_btn_max_level_clicked(); break;
        case 5: _t->on_tableWidget_cellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->on_tableWidget_currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DlgSkills::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DlgSkills.data,
    qt_meta_data_DlgSkills,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DlgSkills::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DlgSkills::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DlgSkills.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DlgSkills::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

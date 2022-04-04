/****************************************************************************
** Meta object code from reading C++ file 'CheckDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CheckDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CheckDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CheckDlg_t {
    QByteArrayData data[7];
    char stringdata[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CheckDlg_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CheckDlg_t qt_meta_stringdata_CheckDlg = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 28),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 26),
QT_MOC_LITERAL(4, 66, 31),
QT_MOC_LITERAL(5, 98, 30),
QT_MOC_LITERAL(6, 129, 29)
    },
    "CheckDlg\0on_pushButton_Exit_2_clicked\0"
    "\0on_pushButton_Exit_clicked\0"
    "on_pushButton_Withdrawl_clicked\0"
    "on_pushButton_Transfer_clicked\0"
    "on_pushButton_Deposit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CheckDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CheckDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CheckDlg *_t = static_cast<CheckDlg *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_Exit_2_clicked(); break;
        case 1: _t->on_pushButton_Exit_clicked(); break;
        case 2: _t->on_pushButton_Withdrawl_clicked(); break;
        case 3: _t->on_pushButton_Transfer_clicked(); break;
        case 4: _t->on_pushButton_Deposit_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CheckDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CheckDlg.data,
      qt_meta_data_CheckDlg,  qt_static_metacall, 0, 0}
};


const QMetaObject *CheckDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CheckDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CheckDlg.stringdata))
        return static_cast<void*>(const_cast< CheckDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CheckDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'main_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/rostest/include/rostest/main_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_waytous__calibration__gui__MainWindowDesign_t {
    QByteArrayData data[13];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_waytous__calibration__gui__MainWindowDesign_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_waytous__calibration__gui__MainWindowDesign_t qt_meta_stringdata_waytous__calibration__gui__MainWindowDesign = {
    {
QT_MOC_LITERAL(0, 0, 43), // "waytous::calibration::gui::Ma..."
QT_MOC_LITERAL(1, 44, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 91, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(5, 115, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(6, 139, 29), // "on_doubleSpinBox_valueChanged"
QT_MOC_LITERAL(7, 169, 4), // "arg1"
QT_MOC_LITERAL(8, 174, 31), // "on_doubleSpinBox_2_valueChanged"
QT_MOC_LITERAL(9, 206, 31), // "on_doubleSpinBox_3_valueChanged"
QT_MOC_LITERAL(10, 238, 31), // "on_doubleSpinBox_4_valueChanged"
QT_MOC_LITERAL(11, 270, 31), // "on_doubleSpinBox_5_valueChanged"
QT_MOC_LITERAL(12, 302, 31) // "on_doubleSpinBox_6_valueChanged"

    },
    "waytous::calibration::gui::MainWindowDesign\0"
    "on_pushButton_clicked\0\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
    "on_doubleSpinBox_valueChanged\0arg1\0"
    "on_doubleSpinBox_2_valueChanged\0"
    "on_doubleSpinBox_3_valueChanged\0"
    "on_doubleSpinBox_4_valueChanged\0"
    "on_doubleSpinBox_5_valueChanged\0"
    "on_doubleSpinBox_6_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_waytous__calibration__gui__MainWindowDesign[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    1,   68,    2, 0x0a /* Public */,
       8,    1,   71,    2, 0x0a /* Public */,
       9,    1,   74,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x0a /* Public */,
      11,    1,   80,    2, 0x0a /* Public */,
      12,    1,   83,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,

       0        // eod
};

void waytous::calibration::gui::MainWindowDesign::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindowDesign *_t = static_cast<MainWindowDesign *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_pushButton_4_clicked(); break;
        case 4: _t->on_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_doubleSpinBox_2_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_doubleSpinBox_3_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_doubleSpinBox_4_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->on_doubleSpinBox_5_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->on_doubleSpinBox_6_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject waytous::calibration::gui::MainWindowDesign::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_waytous__calibration__gui__MainWindowDesign.data,
      qt_meta_data_waytous__calibration__gui__MainWindowDesign,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *waytous::calibration::gui::MainWindowDesign::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *waytous::calibration::gui::MainWindowDesign::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_waytous__calibration__gui__MainWindowDesign.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int waytous::calibration::gui::MainWindowDesign::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

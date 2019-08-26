/****************************************************************************
** Meta object code from reading C++ file 'lednumber.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MyQTCustomWidgets/lednumber.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lednumber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NumberObj_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NumberObj_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NumberObj_t qt_meta_stringdata_NumberObj = {
    {
QT_MOC_LITERAL(0, 0, 9) // "NumberObj"

    },
    "NumberObj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NumberObj[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void NumberObj::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject NumberObj::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_NumberObj.data,
    qt_meta_data_NumberObj,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NumberObj::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NumberObj::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NumberObj.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NumberObj::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LedNumber_t {
    QByteArrayData data[22];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LedNumber_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LedNumber_t qt_meta_stringdata_LedNumber = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LedNumber"
QT_MOC_LITERAL(1, 10, 9), // "setNumber"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 6), // "number"
QT_MOC_LITERAL(4, 28, 8), // "setSpace"
QT_MOC_LITERAL(5, 37, 5), // "space"
QT_MOC_LITERAL(6, 43, 10), // "setPadding"
QT_MOC_LITERAL(7, 54, 7), // "padding"
QT_MOC_LITERAL(8, 62, 9), // "setRadius"
QT_MOC_LITERAL(9, 72, 6), // "radius"
QT_MOC_LITERAL(10, 79, 15), // "setBgColorStart"
QT_MOC_LITERAL(11, 95, 12), // "bgColorStart"
QT_MOC_LITERAL(12, 108, 13), // "setBgColorEnd"
QT_MOC_LITERAL(13, 122, 10), // "bgColorEnd"
QT_MOC_LITERAL(14, 133, 21), // "setNumberBgColorStart"
QT_MOC_LITERAL(15, 155, 18), // "numberBgColorStart"
QT_MOC_LITERAL(16, 174, 19), // "setNumberBgColorEnd"
QT_MOC_LITERAL(17, 194, 16), // "numberBgColorEnd"
QT_MOC_LITERAL(18, 211, 19), // "setNumberColorStart"
QT_MOC_LITERAL(19, 231, 16), // "numberColorStart"
QT_MOC_LITERAL(20, 248, 17), // "setNumberColorEnd"
QT_MOC_LITERAL(21, 266, 14) // "numberColorEnd"

    },
    "LedNumber\0setNumber\0\0number\0setSpace\0"
    "space\0setPadding\0padding\0setRadius\0"
    "radius\0setBgColorStart\0bgColorStart\0"
    "setBgColorEnd\0bgColorEnd\0setNumberBgColorStart\0"
    "numberBgColorStart\0setNumberBgColorEnd\0"
    "numberBgColorEnd\0setNumberColorStart\0"
    "numberColorStart\0setNumberColorEnd\0"
    "numberColorEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LedNumber[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    1,   67,    2, 0x0a /* Public */,
       6,    1,   70,    2, 0x0a /* Public */,
       8,    1,   73,    2, 0x0a /* Public */,
      10,    1,   76,    2, 0x0a /* Public */,
      12,    1,   79,    2, 0x0a /* Public */,
      14,    1,   82,    2, 0x0a /* Public */,
      16,    1,   85,    2, 0x0a /* Public */,
      18,    1,   88,    2, 0x0a /* Public */,
      20,    1,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QColor,   11,
    QMetaType::Void, QMetaType::QColor,   13,
    QMetaType::Void, QMetaType::QColor,   15,
    QMetaType::Void, QMetaType::QColor,   17,
    QMetaType::Void, QMetaType::QColor,   19,
    QMetaType::Void, QMetaType::QColor,   21,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       7, QMetaType::Int, 0x00095103,
       9, QMetaType::Int, 0x00095103,
      11, QMetaType::QColor, 0x00095103,
      13, QMetaType::QColor, 0x00095103,
      15, QMetaType::QColor, 0x00095103,
      17, QMetaType::QColor, 0x00095103,
      19, QMetaType::QColor, 0x00095103,
      21, QMetaType::QColor, 0x00095103,

       0        // eod
};

void LedNumber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LedNumber *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setSpace((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setPadding((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setBgColorStart((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->setBgColorEnd((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->setNumberBgColorStart((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 7: _t->setNumberBgColorEnd((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->setNumberColorStart((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 9: _t->setNumberColorEnd((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LedNumber *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getNumber(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getSpace(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getPadding(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getRadius(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getBgColorStart(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getBgColorEnd(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->getNumberBgColorStart(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->getNumberBgColorEnd(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = _t->getNumberColorStart(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = _t->getNumberColorEnd(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LedNumber *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNumber(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setSpace(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setPadding(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setRadius(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setBgColorStart(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setBgColorEnd(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setNumberBgColorStart(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setNumberBgColorEnd(*reinterpret_cast< QColor*>(_v)); break;
        case 8: _t->setNumberColorStart(*reinterpret_cast< QColor*>(_v)); break;
        case 9: _t->setNumberColorEnd(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LedNumber::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_LedNumber.data,
    qt_meta_data_LedNumber,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LedNumber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LedNumber::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LedNumber.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LedNumber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

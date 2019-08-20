/****************************************************************************
** Meta object code from reading C++ file 'qpotmet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MyQTCustomWidgets/qpotmet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpotmet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPotMet_t {
    QByteArrayData data[26];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPotMet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPotMet_t qt_meta_stringdata_QPotMet = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QPotMet"
QT_MOC_LITERAL(1, 8, 12), // "valueChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "setMinValue"
QT_MOC_LITERAL(4, 34, 11), // "setMaxValue"
QT_MOC_LITERAL(5, 46, 10), // "setDotStep"
QT_MOC_LITERAL(6, 57, 12), // "setWheelStep"
QT_MOC_LITERAL(7, 70, 10), // "setFontDim"
QT_MOC_LITERAL(8, 81, 12), // "setPrecision"
QT_MOC_LITERAL(9, 94, 11), // "setFstColor"
QT_MOC_LITERAL(10, 106, 10), // "MeterColor"
QT_MOC_LITERAL(11, 117, 11), // "setSndColor"
QT_MOC_LITERAL(12, 129, 8), // "minValue"
QT_MOC_LITERAL(13, 138, 8), // "maxValue"
QT_MOC_LITERAL(14, 147, 7), // "dotStep"
QT_MOC_LITERAL(15, 155, 9), // "wheelStep"
QT_MOC_LITERAL(16, 165, 7), // "fontDim"
QT_MOC_LITERAL(17, 173, 7), // "numPrec"
QT_MOC_LITERAL(18, 181, 10), // "startColor"
QT_MOC_LITERAL(19, 192, 8), // "endColor"
QT_MOC_LITERAL(20, 201, 5), // "white"
QT_MOC_LITERAL(21, 207, 5), // "green"
QT_MOC_LITERAL(22, 213, 3), // "red"
QT_MOC_LITERAL(23, 217, 6), // "yellow"
QT_MOC_LITERAL(24, 224, 7), // "magenta"
QT_MOC_LITERAL(25, 232, 4) // "blue"

    },
    "QPotMet\0valueChanged\0\0setMinValue\0"
    "setMaxValue\0setDotStep\0setWheelStep\0"
    "setFontDim\0setPrecision\0setFstColor\0"
    "MeterColor\0setSndColor\0minValue\0"
    "maxValue\0dotStep\0wheelStep\0fontDim\0"
    "numPrec\0startColor\0endColor\0white\0"
    "green\0red\0yellow\0magenta\0blue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPotMet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       8,   86, // properties
       1,  110, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   62,    2, 0x0a /* Public */,
       4,    1,   65,    2, 0x0a /* Public */,
       5,    1,   68,    2, 0x0a /* Public */,
       6,    1,   71,    2, 0x0a /* Public */,
       7,    1,   74,    2, 0x0a /* Public */,
       8,    1,   77,    2, 0x0a /* Public */,
       9,    1,   80,    2, 0x0a /* Public */,
      11,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,

 // properties: name, type, flags
      12, QMetaType::Double, 0x00095103,
      13, QMetaType::Double, 0x00095103,
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::Int, 0x00095103,
      16, QMetaType::Int, 0x00095103,
      17, QMetaType::Int, 0x00095003,
      18, 0x80000000 | 10, 0x0009500b,
      19, 0x80000000 | 10, 0x0009500b,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    6,  115,

 // enum data: key, value
      20, uint(QPotMet::white),
      21, uint(QPotMet::green),
      22, uint(QPotMet::red),
      23, uint(QPotMet::yellow),
      24, uint(QPotMet::magenta),
      25, uint(QPotMet::blue),

       0        // eod
};

void QPotMet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPotMet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setMinValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setMaxValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setDotStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setWheelStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setFontDim((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setPrecision((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setFstColor((*reinterpret_cast< MeterColor(*)>(_a[1]))); break;
        case 8: _t->setSndColor((*reinterpret_cast< MeterColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPotMet::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPotMet::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QPotMet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->minValue(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->maxValue(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->dotStep(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->wheelStep(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->fontDim(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->numPrec(); break;
        case 6: *reinterpret_cast< MeterColor*>(_v) = _t->fstcolor(); break;
        case 7: *reinterpret_cast< MeterColor*>(_v) = _t->sndcolor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QPotMet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinValue(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setMaxValue(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setDotStep(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setWheelStep(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setFontDim(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setFstColor(*reinterpret_cast< MeterColor*>(_v)); break;
        case 7: _t->setSndColor(*reinterpret_cast< MeterColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QPotMet::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QPotMet.data,
    qt_meta_data_QPotMet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPotMet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPotMet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPotMet.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QPotMet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPotMet::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'qprog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MyQTCustomWidgets/qprog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QProg_t {
    QByteArrayData data[15];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QProg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QProg_t qt_meta_stringdata_QProg = {
    {
QT_MOC_LITERAL(0, 0, 5), // "QProg"
QT_MOC_LITERAL(1, 6, 12), // "valueChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "setValue"
QT_MOC_LITERAL(4, 29, 11), // "setMaxValue"
QT_MOC_LITERAL(5, 41, 11), // "setMinValue"
QT_MOC_LITERAL(6, 53, 10), // "setFontDim"
QT_MOC_LITERAL(7, 64, 12), // "setPrecision"
QT_MOC_LITERAL(8, 77, 11), // "setBarColor"
QT_MOC_LITERAL(9, 89, 5), // "value"
QT_MOC_LITERAL(10, 95, 3), // "min"
QT_MOC_LITERAL(11, 99, 3), // "max"
QT_MOC_LITERAL(12, 103, 4), // "font"
QT_MOC_LITERAL(13, 108, 7), // "numPrec"
QT_MOC_LITERAL(14, 116, 5) // "color"

    },
    "QProg\0valueChanged\0\0setValue\0setMaxValue\0"
    "setMinValue\0setFontDim\0setPrecision\0"
    "setBarColor\0value\0min\0max\0font\0numPrec\0"
    "color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QProg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       6,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   52,    2, 0x0a /* Public */,
       4,    1,   55,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       6,    1,   61,    2, 0x0a /* Public */,
       7,    1,   64,    2, 0x0a /* Public */,
       8,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QColor,    2,

 // properties: name, type, flags
       9, QMetaType::Double, 0x00095103,
      10, QMetaType::Double, 0x00095003,
      11, QMetaType::Double, 0x00095003,
      12, QMetaType::Int, 0x00095003,
      13, QMetaType::Int, 0x00095003,
      14, QMetaType::QColor, 0x00095003,

       0        // eod
};

void QProg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QProg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setMaxValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setMinValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setFontDim((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setPrecision((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setBarColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QProg::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QProg::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QProg *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->minValue(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->maxValue(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->font(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->numPrec(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QProg *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setMinValue(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setMaxValue(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setFontDim(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setBarColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QProg::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QProg.data,
    qt_meta_data_QProg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QProg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QProg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QProg.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QProg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QProg::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

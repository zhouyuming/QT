/****************************************************************************
** Meta object code from reading C++ file 'qvcursor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MyQTCustomWidgets/qvcursor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvcursor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QVCursor_t {
    QByteArrayData data[19];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVCursor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVCursor_t qt_meta_stringdata_QVCursor = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QVCursor"
QT_MOC_LITERAL(1, 9, 12), // "valueChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "setColorBg"
QT_MOC_LITERAL(4, 34, 13), // "setColorScale"
QT_MOC_LITERAL(5, 48, 13), // "setColorValue"
QT_MOC_LITERAL(6, 62, 11), // "setValueDim"
QT_MOC_LITERAL(7, 74, 11), // "setScaleDim"
QT_MOC_LITERAL(8, 86, 12), // "setPrecValue"
QT_MOC_LITERAL(9, 99, 11), // "setMinValue"
QT_MOC_LITERAL(10, 111, 11), // "setMaxValue"
QT_MOC_LITERAL(11, 123, 7), // "colorBg"
QT_MOC_LITERAL(12, 131, 10), // "colorValue"
QT_MOC_LITERAL(13, 142, 10), // "colorScale"
QT_MOC_LITERAL(14, 153, 8), // "valueDim"
QT_MOC_LITERAL(15, 162, 8), // "scaleDim"
QT_MOC_LITERAL(16, 171, 3), // "min"
QT_MOC_LITERAL(17, 175, 3), // "max"
QT_MOC_LITERAL(18, 179, 9) // "precision"

    },
    "QVCursor\0valueChanged\0\0setColorBg\0"
    "setColorScale\0setColorValue\0setValueDim\0"
    "setScaleDim\0setPrecValue\0setMinValue\0"
    "setMaxValue\0colorBg\0colorValue\0"
    "colorScale\0valueDim\0scaleDim\0min\0max\0"
    "precision"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVCursor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       8,   86, // properties
       0,    0, // enums/sets
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
      10,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // properties: name, type, flags
      11, QMetaType::QColor, 0x00095103,
      12, QMetaType::QColor, 0x00095103,
      13, QMetaType::QColor, 0x00095103,
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::Int, 0x00095103,
      16, QMetaType::Double, 0x00095003,
      17, QMetaType::Double, 0x00095003,
      18, QMetaType::Int, 0x00095003,

       0        // eod
};

void QVCursor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QVCursor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setColorBg((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->setColorScale((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->setColorValue((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->setValueDim((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setScaleDim((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setPrecValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setMinValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setMaxValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QVCursor::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVCursor::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QVCursor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->colorBg(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->colorValue(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->colorScale(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->valueDim(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->scaleDim(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->minValue(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->maxValue(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->precValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QVCursor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColorBg(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setColorValue(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setColorScale(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setValueDim(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setScaleDim(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setMinValue(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setMaxValue(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setPrecValue(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QVCursor::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QVCursor.data,
    qt_meta_data_QVCursor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QVCursor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVCursor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QVCursor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QVCursor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QVCursor::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

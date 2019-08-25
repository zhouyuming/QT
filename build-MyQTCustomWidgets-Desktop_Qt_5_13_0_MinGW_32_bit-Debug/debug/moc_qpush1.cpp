/****************************************************************************
** Meta object code from reading C++ file 'qpush1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MyQTCustomWidgets/qpush1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpush1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPush1_t {
    QByteArrayData data[12];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPush1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPush1_t qt_meta_stringdata_QPush1 = {
    {
QT_MOC_LITERAL(0, 0, 6), // "QPush1"
QT_MOC_LITERAL(1, 7, 7), // "pressed"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 8), // "released"
QT_MOC_LITERAL(4, 25, 7), // "setText"
QT_MOC_LITERAL(5, 33, 7), // "setFont"
QT_MOC_LITERAL(6, 41, 12), // "setColorText"
QT_MOC_LITERAL(7, 54, 14), // "setColorButton"
QT_MOC_LITERAL(8, 69, 4), // "font"
QT_MOC_LITERAL(9, 74, 7), // "colorTx"
QT_MOC_LITERAL(10, 82, 7), // "colorBt"
QT_MOC_LITERAL(11, 90, 4) // "text"

    },
    "QPush1\0pressed\0\0released\0setText\0"
    "setFont\0setColorText\0setColorButton\0"
    "font\0colorTx\0colorBt\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPush1[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   46,    2, 0x0a /* Public */,
       5,    1,   49,    2, 0x0a /* Public */,
       6,    1,   52,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QFont,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,

 // properties: name, type, flags
       8, QMetaType::QFont, 0x00095103,
       9, QMetaType::QColor, 0x00095003,
      10, QMetaType::QColor, 0x00095003,
      11, QMetaType::QString, 0x00095103,

       0        // eod
};

void QPush1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPush1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressed(); break;
        case 1: _t->released(); break;
        case 2: _t->setText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setFont((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 4: _t->setColorText((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 5: _t->setColorButton((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QPush1::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPush1::pressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QPush1::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPush1::released)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QPush1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->colorText(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->colorButton(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QPush1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 1: _t->setColorText(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setColorButton(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QPush1::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QPush1.data,
    qt_meta_data_QPush1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPush1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPush1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPush1.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QPush1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPush1::pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPush1::released()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'qslide.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MyQTCustomWidgets/qslide.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qslide.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSlide_t {
    QByteArrayData data[18];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSlide_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSlide_t qt_meta_stringdata_QSlide = {
    {
QT_MOC_LITERAL(0, 0, 6), // "QSlide"
QT_MOC_LITERAL(1, 7, 7), // "timeOut"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 10), // "setColorTx"
QT_MOC_LITERAL(4, 27, 10), // "setColorBg"
QT_MOC_LITERAL(5, 38, 9), // "setEffect"
QT_MOC_LITERAL(6, 48, 6), // "Effect"
QT_MOC_LITERAL(7, 55, 7), // "setText"
QT_MOC_LITERAL(8, 63, 8), // "setTimer"
QT_MOC_LITERAL(9, 72, 8), // "startTmr"
QT_MOC_LITERAL(10, 81, 6), // "effect"
QT_MOC_LITERAL(11, 88, 7), // "colorTx"
QT_MOC_LITERAL(12, 96, 7), // "colorBg"
QT_MOC_LITERAL(13, 104, 4), // "text"
QT_MOC_LITERAL(14, 109, 5), // "timer"
QT_MOC_LITERAL(15, 115, 5), // "start"
QT_MOC_LITERAL(16, 121, 7), // "sliding"
QT_MOC_LITERAL(17, 129, 12) // "intermittent"

    },
    "QSlide\0timeOut\0\0setColorTx\0setColorBg\0"
    "setEffect\0Effect\0setText\0setTimer\0"
    "startTmr\0effect\0colorTx\0colorBg\0text\0"
    "timer\0start\0sliding\0intermittent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSlide[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       6,   68, // properties
       1,   86, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x0a /* Public */,
       4,    1,   53,    2, 0x0a /* Public */,
       5,    1,   56,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x0a /* Public */,
       8,    1,   62,    2, 0x0a /* Public */,
       9,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
      10, 0x80000000 | 6, 0x0009510b,
      11, QMetaType::QColor, 0x00095103,
      12, QMetaType::QColor, 0x00095103,
      13, QMetaType::QString, 0x00095103,
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::Bool, 0x00095003,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    2,   91,

 // enum data: key, value
      16, uint(QSlide::sliding),
      17, uint(QSlide::intermittent),

       0        // eod
};

void QSlide::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSlide *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeOut(); break;
        case 1: _t->setColorTx((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->setColorBg((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->setEffect((*reinterpret_cast< Effect(*)>(_a[1]))); break;
        case 4: _t->setText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setTimer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->startTmr((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSlide::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSlide::timeOut)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QSlide *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Effect*>(_v) = _t->effect(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->colorTx(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->colorBg(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->timerV(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isStart(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QSlide *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEffect(*reinterpret_cast< Effect*>(_v)); break;
        case 1: _t->setColorTx(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setColorBg(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setTimer(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->startTmr(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QSlide::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QSlide.data,
    qt_meta_data_QSlide,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QSlide::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSlide::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSlide.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QSlide::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QSlide::timeOut()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'imagecalendar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MyQTCustomWidgets/imagecalendar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imagecalendar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageCalendar_t {
    QByteArrayData data[13];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageCalendar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageCalendar_t qt_meta_stringdata_ImageCalendar = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ImageCalendar"
QT_MOC_LITERAL(1, 14, 11), // "changeStyle"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "changeDate"
QT_MOC_LITERAL(4, 38, 16), // "setCalendarStyle"
QT_MOC_LITERAL(5, 55, 13), // "CalendarStyle"
QT_MOC_LITERAL(6, 69, 13), // "calendarStyle"
QT_MOC_LITERAL(7, 83, 20), // "CalendarStyle_Yellow"
QT_MOC_LITERAL(8, 104, 18), // "CalendarStyle_Blue"
QT_MOC_LITERAL(9, 123, 19), // "CalendarStyle_Brown"
QT_MOC_LITERAL(10, 143, 18), // "CalendarStyle_Gray"
QT_MOC_LITERAL(11, 162, 20), // "CalendarStyle_Purple"
QT_MOC_LITERAL(12, 183, 17) // "CalendarStyle_Red"

    },
    "ImageCalendar\0changeStyle\0\0changeDate\0"
    "setCalendarStyle\0CalendarStyle\0"
    "calendarStyle\0CalendarStyle_Yellow\0"
    "CalendarStyle_Blue\0CalendarStyle_Brown\0"
    "CalendarStyle_Gray\0CalendarStyle_Purple\0"
    "CalendarStyle_Red"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageCalendar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   34, // properties
       1,   37, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       6, 0x80000000 | 5, 0x0009510b,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,    6,   42,

 // enum data: key, value
       7, uint(ImageCalendar::CalendarStyle_Yellow),
       8, uint(ImageCalendar::CalendarStyle_Blue),
       9, uint(ImageCalendar::CalendarStyle_Brown),
      10, uint(ImageCalendar::CalendarStyle_Gray),
      11, uint(ImageCalendar::CalendarStyle_Purple),
      12, uint(ImageCalendar::CalendarStyle_Red),

       0        // eod
};

void ImageCalendar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageCalendar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeStyle(); break;
        case 1: _t->changeDate(); break;
        case 2: _t->setCalendarStyle((*reinterpret_cast< CalendarStyle(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ImageCalendar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< CalendarStyle*>(_v) = _t->getCalendarStyle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ImageCalendar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCalendarStyle(*reinterpret_cast< CalendarStyle*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ImageCalendar::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ImageCalendar.data,
    qt_meta_data_ImageCalendar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageCalendar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageCalendar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageCalendar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ImageCalendar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

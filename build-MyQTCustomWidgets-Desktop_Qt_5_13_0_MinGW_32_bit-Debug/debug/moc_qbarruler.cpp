/****************************************************************************
** Meta object code from reading C++ file 'qbarruler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MyQTCustomWidgets/qbarruler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbarruler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QBarRuler_t {
    QByteArrayData data[33];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBarRuler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBarRuler_t qt_meta_stringdata_QBarRuler = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QBarRuler"
QT_MOC_LITERAL(1, 10, 12), // "valueChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "value"
QT_MOC_LITERAL(4, 30, 11), // "updateValue"
QT_MOC_LITERAL(5, 42, 8), // "setRange"
QT_MOC_LITERAL(6, 51, 8), // "minValue"
QT_MOC_LITERAL(7, 60, 8), // "maxValue"
QT_MOC_LITERAL(8, 69, 11), // "setMinValue"
QT_MOC_LITERAL(9, 81, 11), // "setMaxValue"
QT_MOC_LITERAL(10, 93, 8), // "setValue"
QT_MOC_LITERAL(11, 102, 12), // "setPrecision"
QT_MOC_LITERAL(12, 115, 9), // "precision"
QT_MOC_LITERAL(13, 125, 11), // "setLongStep"
QT_MOC_LITERAL(14, 137, 8), // "longStep"
QT_MOC_LITERAL(15, 146, 12), // "setShortStep"
QT_MOC_LITERAL(16, 159, 9), // "shortStep"
QT_MOC_LITERAL(17, 169, 8), // "setSpace"
QT_MOC_LITERAL(18, 178, 5), // "space"
QT_MOC_LITERAL(19, 184, 12), // "setAnimation"
QT_MOC_LITERAL(20, 197, 9), // "animation"
QT_MOC_LITERAL(21, 207, 16), // "setAnimationStep"
QT_MOC_LITERAL(22, 224, 13), // "animationStep"
QT_MOC_LITERAL(23, 238, 15), // "setBgColorStart"
QT_MOC_LITERAL(24, 254, 12), // "bgColorStart"
QT_MOC_LITERAL(25, 267, 13), // "setBgColorEnd"
QT_MOC_LITERAL(26, 281, 10), // "bgColorEnd"
QT_MOC_LITERAL(27, 292, 12), // "setLineColor"
QT_MOC_LITERAL(28, 305, 9), // "lineColor"
QT_MOC_LITERAL(29, 315, 13), // "setBarBgColor"
QT_MOC_LITERAL(30, 329, 10), // "barBgColor"
QT_MOC_LITERAL(31, 340, 11), // "setBarColor"
QT_MOC_LITERAL(32, 352, 8) // "barColor"

    },
    "QBarRuler\0valueChanged\0\0value\0updateValue\0"
    "setRange\0minValue\0maxValue\0setMinValue\0"
    "setMaxValue\0setValue\0setPrecision\0"
    "precision\0setLongStep\0longStep\0"
    "setShortStep\0shortStep\0setSpace\0space\0"
    "setAnimation\0animation\0setAnimationStep\0"
    "animationStep\0setBgColorStart\0"
    "bgColorStart\0setBgColorEnd\0bgColorEnd\0"
    "setLineColor\0lineColor\0setBarBgColor\0"
    "barBgColor\0setBarColor\0barColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBarRuler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
      14,  168, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  112,    2, 0x08 /* Private */,
       5,    2,  113,    2, 0x0a /* Public */,
       5,    2,  118,    2, 0x0a /* Public */,
       8,    1,  123,    2, 0x0a /* Public */,
       9,    1,  126,    2, 0x0a /* Public */,
      10,    1,  129,    2, 0x0a /* Public */,
      10,    1,  132,    2, 0x0a /* Public */,
      11,    1,  135,    2, 0x0a /* Public */,
      13,    1,  138,    2, 0x0a /* Public */,
      15,    1,  141,    2, 0x0a /* Public */,
      17,    1,  144,    2, 0x0a /* Public */,
      19,    1,  147,    2, 0x0a /* Public */,
      21,    1,  150,    2, 0x0a /* Public */,
      23,    1,  153,    2, 0x0a /* Public */,
      25,    1,  156,    2, 0x0a /* Public */,
      27,    1,  159,    2, 0x0a /* Public */,
      29,    1,  162,    2, 0x0a /* Public */,
      31,    1,  165,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void, QMetaType::QColor,   24,
    QMetaType::Void, QMetaType::QColor,   26,
    QMetaType::Void, QMetaType::QColor,   28,
    QMetaType::Void, QMetaType::QColor,   30,
    QMetaType::Void, QMetaType::QColor,   32,

 // properties: name, type, flags
       6, QMetaType::Double, 0x00095103,
       7, QMetaType::Double, 0x00095103,
       3, QMetaType::Double, 0x00095103,
      12, QMetaType::Int, 0x00095103,
      14, QMetaType::Int, 0x00095103,
      16, QMetaType::Int, 0x00095103,
      18, QMetaType::Int, 0x00095103,
      20, QMetaType::Bool, 0x00095103,
      22, QMetaType::Double, 0x00095103,
      24, QMetaType::QColor, 0x00095103,
      26, QMetaType::QColor, 0x00095103,
      28, QMetaType::QColor, 0x00095103,
      30, QMetaType::QColor, 0x00095103,
      32, QMetaType::QColor, 0x00095103,

       0        // eod
};

void QBarRuler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QBarRuler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->updateValue(); break;
        case 2: _t->setRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->setRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->setMinValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setMaxValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setPrecision((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setLongStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setShortStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setSpace((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setAnimation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setAnimationStep((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->setBgColorStart((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 15: _t->setBgColorEnd((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 16: _t->setLineColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 17: _t->setBarBgColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 18: _t->setBarColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QBarRuler::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBarRuler::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QBarRuler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getMinValue(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getMaxValue(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getValue(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getPrecision(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getLongStep(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getShortStep(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getSpace(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getAnimation(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->getAnimationStep(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = _t->getBgColorStart(); break;
        case 10: *reinterpret_cast< QColor*>(_v) = _t->getBgColorEnd(); break;
        case 11: *reinterpret_cast< QColor*>(_v) = _t->getLineColor(); break;
        case 12: *reinterpret_cast< QColor*>(_v) = _t->getBarBgColor(); break;
        case 13: *reinterpret_cast< QColor*>(_v) = _t->getBarColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QBarRuler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinValue(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setMaxValue(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setLongStep(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setShortStep(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setSpace(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setAnimation(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setAnimationStep(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setBgColorStart(*reinterpret_cast< QColor*>(_v)); break;
        case 10: _t->setBgColorEnd(*reinterpret_cast< QColor*>(_v)); break;
        case 11: _t->setLineColor(*reinterpret_cast< QColor*>(_v)); break;
        case 12: _t->setBarBgColor(*reinterpret_cast< QColor*>(_v)); break;
        case 13: _t->setBarColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QBarRuler::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QBarRuler.data,
    qt_meta_data_QBarRuler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QBarRuler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBarRuler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QBarRuler.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QBarRuler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QBarRuler::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

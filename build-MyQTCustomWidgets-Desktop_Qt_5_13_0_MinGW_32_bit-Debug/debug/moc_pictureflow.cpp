/****************************************************************************
** Meta object code from reading C++ file 'pictureflow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MyQTCustomWidgets/pictureflow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pictureflow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PictureFlow_t {
    QByteArrayData data[20];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PictureFlow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PictureFlow_t qt_meta_stringdata_PictureFlow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PictureFlow"
QT_MOC_LITERAL(1, 12, 18), // "centerIndexChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "index"
QT_MOC_LITERAL(4, 38, 8), // "addSlide"
QT_MOC_LITERAL(5, 47, 5), // "image"
QT_MOC_LITERAL(6, 53, 6), // "pixmap"
QT_MOC_LITERAL(7, 60, 8), // "setSlide"
QT_MOC_LITERAL(8, 69, 14), // "setCenterIndex"
QT_MOC_LITERAL(9, 84, 5), // "clear"
QT_MOC_LITERAL(10, 90, 12), // "showPrevious"
QT_MOC_LITERAL(11, 103, 8), // "showNext"
QT_MOC_LITERAL(12, 112, 9), // "showSlide"
QT_MOC_LITERAL(13, 122, 6), // "render"
QT_MOC_LITERAL(14, 129, 13), // "triggerRender"
QT_MOC_LITERAL(15, 143, 15), // "updateAnimation"
QT_MOC_LITERAL(16, 159, 15), // "backgroundColor"
QT_MOC_LITERAL(17, 175, 9), // "slideSize"
QT_MOC_LITERAL(18, 185, 10), // "slideCount"
QT_MOC_LITERAL(19, 196, 11) // "centerIndex"

    },
    "PictureFlow\0centerIndexChanged\0\0index\0"
    "addSlide\0image\0pixmap\0setSlide\0"
    "setCenterIndex\0clear\0showPrevious\0"
    "showNext\0showSlide\0render\0triggerRender\0"
    "updateAnimation\0backgroundColor\0"
    "slideSize\0slideCount\0centerIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PictureFlow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       4,  110, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   82,    2, 0x0a /* Public */,
       4,    1,   85,    2, 0x0a /* Public */,
       7,    2,   88,    2, 0x0a /* Public */,
       7,    2,   93,    2, 0x0a /* Public */,
       8,    1,   98,    2, 0x0a /* Public */,
       9,    0,  101,    2, 0x0a /* Public */,
      10,    0,  102,    2, 0x0a /* Public */,
      11,    0,  103,    2, 0x0a /* Public */,
      12,    1,  104,    2, 0x0a /* Public */,
      13,    0,  107,    2, 0x0a /* Public */,
      14,    0,  108,    2, 0x0a /* Public */,
      15,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, QMetaType::QPixmap,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    3,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QPixmap,    3,    6,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::QColor, 0x00095103,
      17, QMetaType::QSize, 0x00095103,
      18, QMetaType::Int, 0x00095001,
      19, QMetaType::Int, 0x00095103,

       0        // eod
};

void PictureFlow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PictureFlow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->centerIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->addSlide((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 2: _t->addSlide((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 3: _t->setSlide((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 4: _t->setSlide((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 5: _t->setCenterIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->clear(); break;
        case 7: _t->showPrevious(); break;
        case 8: _t->showNext(); break;
        case 9: _t->showSlide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->render(); break;
        case 11: _t->triggerRender(); break;
        case 12: _t->updateAnimation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PictureFlow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PictureFlow::centerIndexChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PictureFlow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = _t->slideSize(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->slideCount(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->centerIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PictureFlow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setSlideSize(*reinterpret_cast< QSize*>(_v)); break;
        case 3: _t->setCenterIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PictureFlow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_PictureFlow.data,
    qt_meta_data_PictureFlow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PictureFlow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PictureFlow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PictureFlow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PictureFlow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void PictureFlow::centerIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'qt_softwarerenderer.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qt_softwarerenderer.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_softwarerenderer.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SoftwareRenderer_t {
    QByteArrayData data[8];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoftwareRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoftwareRenderer_t qt_meta_stringdata_SoftwareRenderer = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SoftwareRenderer"
QT_MOC_LITERAL(1, 17, 6), // "onBlit"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "buf_idx"
QT_MOC_LITERAL(4, 33, 1), // "x"
QT_MOC_LITERAL(5, 35, 1), // "y"
QT_MOC_LITERAL(6, 37, 1), // "w"
QT_MOC_LITERAL(7, 39, 1) // "h"

    },
    "SoftwareRenderer\0onBlit\0\0buf_idx\0x\0y\0"
    "w\0h"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoftwareRenderer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    5,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,    7,

       0        // eod
};

void SoftwareRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SoftwareRenderer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onBlit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SoftwareRenderer::staticMetaObject = { {
    QMetaObject::SuperData::link<QRasterWindow::staticMetaObject>(),
    qt_meta_stringdata_SoftwareRenderer.data,
    qt_meta_data_SoftwareRenderer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SoftwareRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoftwareRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SoftwareRenderer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RendererCommon"))
        return static_cast< RendererCommon*>(this);
    return QRasterWindow::qt_metacast(_clname);
}

int SoftwareRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRasterWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

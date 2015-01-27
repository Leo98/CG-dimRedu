/****************************************************************************
** Meta object code from reading C++ file 'planocartesiano.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CG-DimRedu/planocartesiano.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planocartesiano.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlanoCartesiano_t {
    QByteArrayData data[9];
    char stringdata[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlanoCartesiano_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlanoCartesiano_t qt_meta_stringdata_PlanoCartesiano = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PlanoCartesiano"
QT_MOC_LITERAL(1, 16, 12), // "mudaRotacaoX"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "angulo"
QT_MOC_LITERAL(4, 37, 12), // "mudaRotacaoY"
QT_MOC_LITERAL(5, 50, 12), // "mudaRotacaoZ"
QT_MOC_LITERAL(6, 63, 11), // "setRotacaoX"
QT_MOC_LITERAL(7, 75, 11), // "setRotacaoY"
QT_MOC_LITERAL(8, 87, 11) // "setRotacaoZ"

    },
    "PlanoCartesiano\0mudaRotacaoX\0\0angulo\0"
    "mudaRotacaoY\0mudaRotacaoZ\0setRotacaoX\0"
    "setRotacaoY\0setRotacaoZ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlanoCartesiano[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void PlanoCartesiano::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlanoCartesiano *_t = static_cast<PlanoCartesiano *>(_o);
        switch (_id) {
        case 0: _t->mudaRotacaoX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->mudaRotacaoY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->mudaRotacaoZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setRotacaoX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setRotacaoY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setRotacaoZ((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlanoCartesiano::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlanoCartesiano::mudaRotacaoX)) {
                *result = 0;
            }
        }
        {
            typedef void (PlanoCartesiano::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlanoCartesiano::mudaRotacaoY)) {
                *result = 1;
            }
        }
        {
            typedef void (PlanoCartesiano::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlanoCartesiano::mudaRotacaoZ)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject PlanoCartesiano::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_PlanoCartesiano.data,
      qt_meta_data_PlanoCartesiano,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlanoCartesiano::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlanoCartesiano::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlanoCartesiano.stringdata))
        return static_cast<void*>(const_cast< PlanoCartesiano*>(this));
    if (!strcmp(_clname, "Matrizes"))
        return static_cast< Matrizes*>(const_cast< PlanoCartesiano*>(this));
    return QOpenGLWidget::qt_metacast(_clname);
}

int PlanoCartesiano::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void PlanoCartesiano::mudaRotacaoX(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlanoCartesiano::mudaRotacaoY(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlanoCartesiano::mudaRotacaoZ(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

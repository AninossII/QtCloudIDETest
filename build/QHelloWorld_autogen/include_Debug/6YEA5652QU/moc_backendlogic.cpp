/****************************************************************************
** Meta object code from reading C++ file 'backendlogic.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../include/backendlogic.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backendlogic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BackendLogic_t {
    const uint offsetsAndSize[14];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_BackendLogic_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_BackendLogic_t qt_meta_stringdata_BackendLogic = {
    {
QT_MOC_LITERAL(0, 12), // "BackendLogic"
QT_MOC_LITERAL(13, 11), // "QML.Element"
QT_MOC_LITERAL(25, 4), // "auto"
QT_MOC_LITERAL(30, 7), // "getData"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 9), // "getHWorld"
QT_MOC_LITERAL(49, 14) // "getDescription"

    },
    "BackendLogic\0QML.Element\0auto\0getData\0"
    "\0getHWorld\0getDescription"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BackendLogic[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
       3,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   34,    4, 0x02,    1 /* Public */,
       5,    0,   35,    4, 0x02,    2 /* Public */,
       6,    0,   36,    4, 0x02,    3 /* Public */,

 // methods: parameters
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::QString,

       0        // eod
};

void BackendLogic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BackendLogic *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { int _r = _t->getData();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getHWorld();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->getDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject BackendLogic::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BackendLogic.offsetsAndSize,
    qt_meta_data_BackendLogic,
    qt_static_metacall,
    nullptr,
qt_metaTypeArray<
BackendLogic

, int, QString, QString

>,
    nullptr
} };


const QMetaObject *BackendLogic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BackendLogic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BackendLogic.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BackendLogic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

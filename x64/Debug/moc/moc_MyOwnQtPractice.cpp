/****************************************************************************
** Meta object code from reading C++ file 'MyOwnQtPractice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MyOwnQtPractice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyOwnQtPractice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyOwnQtPractice_t {
    QByteArrayData data[15];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyOwnQtPractice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyOwnQtPractice_t qt_meta_stringdata_MyOwnQtPractice = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MyOwnQtPractice"
QT_MOC_LITERAL(1, 16, 12), // "xChangeLevel"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "val"
QT_MOC_LITERAL(4, 34, 12), // "yChangeLevel"
QT_MOC_LITERAL(5, 47, 12), // "zChangeLevel"
QT_MOC_LITERAL(6, 60, 20), // "generateMeshFromFile"
QT_MOC_LITERAL(7, 81, 4), // "name"
QT_MOC_LITERAL(8, 86, 5), // "clear"
QT_MOC_LITERAL(9, 92, 13), // "updateAmbient"
QT_MOC_LITERAL(10, 106, 14), // "updateSpecular"
QT_MOC_LITERAL(11, 121, 13), // "updateDiffuse"
QT_MOC_LITERAL(12, 135, 19), // "toggleLightDistance"
QT_MOC_LITERAL(13, 155, 17), // "toggleEnableLight"
QT_MOC_LITERAL(14, 173, 11) // "selectLight"

    },
    "MyOwnQtPractice\0xChangeLevel\0\0val\0"
    "yChangeLevel\0zChangeLevel\0"
    "generateMeshFromFile\0name\0clear\0"
    "updateAmbient\0updateSpecular\0updateDiffuse\0"
    "toggleLightDistance\0toggleEnableLight\0"
    "selectLight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyOwnQtPractice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       5,    1,   80,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       6,    1,   84,    2, 0x0a /* Public */,
       8,    0,   87,    2, 0x0a /* Public */,
       9,    1,   88,    2, 0x0a /* Public */,
      10,    1,   91,    2, 0x0a /* Public */,
      11,    1,   94,    2, 0x0a /* Public */,
      12,    0,   97,    2, 0x0a /* Public */,
      13,    0,   98,    2, 0x0a /* Public */,
      14,    1,   99,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void MyOwnQtPractice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyOwnQtPractice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChangeLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->yChangeLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->zChangeLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->generateMeshFromFile(); break;
        case 4: _t->generateMeshFromFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->clear(); break;
        case 6: _t->updateAmbient((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateSpecular((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateDiffuse((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->toggleLightDistance(); break;
        case 10: _t->toggleEnableLight(); break;
        case 11: _t->selectLight((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyOwnQtPractice::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MyOwnQtPractice.data,
    qt_meta_data_MyOwnQtPractice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyOwnQtPractice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyOwnQtPractice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyOwnQtPractice.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MyOwnQtPractice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
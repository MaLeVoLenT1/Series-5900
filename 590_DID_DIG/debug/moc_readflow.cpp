/****************************************************************************
** Meta object code from reading C++ file 'readflow.h'
**
** Created: Tue Mar 5 14:49:44 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../readflow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'readflow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_readFlow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      22,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_readFlow[] = {
    "readFlow\0\0flowMeter()\0flowConfig()\0"
};

const QMetaObject readFlow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_readFlow,
      qt_meta_data_readFlow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &readFlow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *readFlow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *readFlow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_readFlow))
        return static_cast<void*>(const_cast< readFlow*>(this));
    return QDialog::qt_metacast(_clname);
}

int readFlow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: flowMeter(); break;
        case 1: flowConfig(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
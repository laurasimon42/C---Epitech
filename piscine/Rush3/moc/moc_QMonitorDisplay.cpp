/****************************************************************************
** Meta object code from reading C++ file 'QMonitorDisplay.hh'
**
** Created: Tue Feb 7 18:43:22 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/Qt/QMonitorDisplay.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QMonitorDisplay.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMonitorDisplay[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QMonitorDisplay[] = {
    "QMonitorDisplay\0\0refresh()\0"
};

const QMetaObject QMonitorDisplay::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QMonitorDisplay,
      qt_meta_data_QMonitorDisplay, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMonitorDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMonitorDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMonitorDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMonitorDisplay))
        return static_cast<void*>(const_cast< QMonitorDisplay*>(this));
    return QObject::qt_metacast(_clname);
}

int QMonitorDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

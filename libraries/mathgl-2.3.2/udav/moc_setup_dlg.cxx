/****************************************************************************
** Meta object code from reading C++ file 'setup_dlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "setup_dlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setup_dlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SetupDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   12,   12,   12, 0x08,
      45,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SetupDialog[] = {
    "SetupDialog\0\0par\0putText(QString)\0"
    "saveTmpl()\0toScript()\0"
};

void SetupDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SetupDialog *_t = static_cast<SetupDialog *>(_o);
        switch (_id) {
        case 0: _t->putText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->saveTmpl(); break;
        case 2: _t->toScript(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SetupDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SetupDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SetupDialog,
      qt_meta_data_SetupDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SetupDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SetupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SetupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetupDialog))
        return static_cast<void*>(const_cast< SetupDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SetupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SetupDialog::putText(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

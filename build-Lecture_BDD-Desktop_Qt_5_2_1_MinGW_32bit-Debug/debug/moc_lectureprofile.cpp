/****************************************************************************
** Meta object code from reading C++ file 'lectureprofile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Lecture_BDD/lectureprofile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lectureprofile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LectureProfile_t {
    QByteArrayData data[7];
    char stringdata[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_LectureProfile_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_LectureProfile_t qt_meta_stringdata_LectureProfile = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 16),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 5),
QT_MOC_LITERAL(4, 39, 14),
QT_MOC_LITERAL(5, 54, 7),
QT_MOC_LITERAL(6, 62, 18)
    },
    "LectureProfile\0changementProfil\0\0index\0"
    "changementRace\0newRace\0changerTexteRegles\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LectureProfile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a,
       4,    1,   32,    2, 0x0a,
       6,    1,   35,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QModelIndex,    3,

       0        // eod
};

void LectureProfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LectureProfile *_t = static_cast<LectureProfile *>(_o);
        switch (_id) {
        case 0: _t->changementProfil((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 1: _t->changementRace((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->changerTexteRegles((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LectureProfile::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LectureProfile.data,
      qt_meta_data_LectureProfile,  qt_static_metacall, 0, 0}
};


const QMetaObject *LectureProfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LectureProfile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LectureProfile.stringdata))
        return static_cast<void*>(const_cast< LectureProfile*>(this));
    return QWidget::qt_metacast(_clname);
}

int LectureProfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_END_MOC_NAMESPACE

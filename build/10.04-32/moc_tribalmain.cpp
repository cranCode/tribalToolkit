/****************************************************************************
** Meta object code from reading C++ file 'tribalmain.h'
**
** Created: Sun Apr 29 19:49:26 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tribalToolkit/tribalmain.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tribalmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tribalMain[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   12,   11,   11, 0x08,
      43,   12,   11,   11, 0x08,
      74,   11,   11,   11, 0x08,
      95,   85,   11,   11, 0x08,
     134,  123,   11,   11, 0x08,
     174,  163,   11,   11, 0x08,
     214,  203,   11,   11, 0x08,
     253,  244,   11,   11, 0x08,
     290,  280,   11,   11, 0x08,
     326,  318,   11,   11, 0x08,
     365,  352,   11,   11, 0x08,
     405,  396,   11,   11, 0x08,
     442,  432,   11,   11, 0x08,
     483,  470,   11,   11, 0x08,
     522,  514,   11,   11, 0x08,
     559,  548,   11,   11, 0x08,
     601,  588,   11,   11, 0x08,
     643,  632,   11,   11, 0x08,
     679,  672,   11,   11, 0x08,
     704,   11,   11,   11, 0x08,
     727,   11,   11,   11, 0x08,
     752,   11,   11,   11, 0x08,
     775,   11,   11,   11, 0x08,
     798,   11,   11,   11, 0x08,
     823,   11,   11,   11, 0x08,
     844,   11,   11,   11, 0x08,
     872,   11,   11,   11, 0x08,
     893,   11,   11,   11, 0x08,
     918,   11,   11,   11, 0x08,
     943,   11,   11,   11, 0x08,
     967,   11,   11,   11, 0x08,
    1000,  992,   11,   11, 0x08,
    1036, 1034, 1026,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tribalMain[] = {
    "tribalMain\0\0budNum,lvl\0liczPunkty(int,int)\0"
    "liczMiejscaZagrodaBud(int,int)\0"
    "liczWojo()\0lvlRatusz\0on_Ratusz_valueChanged(int)\0"
    "lvlKoszary\0on_Koszary_valueChanged(int)\0"
    "lvlStajnia\0on_Stajnia_valueChanged(int)\0"
    "lvlWarszat\0on_Warsztat_valueChanged(int)\0"
    "lvlPalac\0on_Palac_valueChanged(int)\0"
    "lvlKuznia\0on_Kuznia_valueChanged(int)\0"
    "lvlPlac\0on_Plac_valueChanged(int)\0"
    "lvlPiedastal\0on_Piedastal_valueChanged(int)\0"
    "lvlRynek\0on_Rynek_valueChanged(int)\0"
    "lvlTartak\0on_Tartak_valueChanged(int)\0"
    "lvlCegielnia\0on_Cegielnia_valueChanged(int)\0"
    "lvlHuta\0on_Huta_valueChanged(int)\0"
    "lvlZagroda\0on_Zagroda_valueChanged(int)\0"
    "lvlSpichlerz\0on_Spichlerz_valueChanged(int)\0"
    "lvlSchowek\0on_Schowek_valueChanged(int)\0"
    "lvlMur\0on_Mur_valueChanged(int)\0"
    "on_Piki_valueChanged()\0on_Miecze_valueChanged()\0"
    "on_Topy_valueChanged()\0on_Luki_valueChanged()\0"
    "on_Zwiady_valueChanged()\0on_LK_valueChanged()\0"
    "on_LucznicyK_valueChanged()\0"
    "on_CK_valueChanged()\0on_Tarany_valueChanged()\0"
    "on_Katasy_valueChanged()\0"
    "on_Rycek_valueChanged()\0"
    "on_Grubas_valueChanged()\0checked\0"
    "on_checkBox_clicked(bool)\0QString\0n\0"
    "kropkiInt(int)\0"
};

void tribalMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tribalMain *_t = static_cast<tribalMain *>(_o);
        switch (_id) {
        case 0: _t->liczPunkty((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->liczMiejscaZagrodaBud((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->liczWojo(); break;
        case 3: _t->on_Ratusz_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_Koszary_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_Stajnia_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_Warsztat_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_Palac_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_Kuznia_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_Plac_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_Piedastal_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_Rynek_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_Tartak_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_Cegielnia_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_Huta_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_Zagroda_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_Spichlerz_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_Schowek_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_Mur_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_Piki_valueChanged(); break;
        case 20: _t->on_Miecze_valueChanged(); break;
        case 21: _t->on_Topy_valueChanged(); break;
        case 22: _t->on_Luki_valueChanged(); break;
        case 23: _t->on_Zwiady_valueChanged(); break;
        case 24: _t->on_LK_valueChanged(); break;
        case 25: _t->on_LucznicyK_valueChanged(); break;
        case 26: _t->on_CK_valueChanged(); break;
        case 27: _t->on_Tarany_valueChanged(); break;
        case 28: _t->on_Katasy_valueChanged(); break;
        case 29: _t->on_Rycek_valueChanged(); break;
        case 30: _t->on_Grubas_valueChanged(); break;
        case 31: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: { QString _r = _t->kropkiInt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tribalMain::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tribalMain::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_tribalMain,
      qt_meta_data_tribalMain, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tribalMain::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tribalMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tribalMain::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tribalMain))
        return static_cast<void*>(const_cast< tribalMain*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int tribalMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

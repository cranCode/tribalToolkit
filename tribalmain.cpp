#include "tribalmain.h"
#include "ui_tribalmain.h"
#include <iostream>


tribalMain::tribalMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tribalMain)
{
    ui->setupUi(this);
}

tribalMain::~tribalMain()
{
    delete ui;
}

unsigned short aktualnePunkty[18] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
unsigned short sumaZagrodaBud = 0;
unsigned short poziomZagrody = 0;
bool zagrodaChecked = false;

void tribalMain::liczPunkty(int budNum, int lvl)
{
    unsigned short dbPunkty[30][18] = {{10,16,20,24,10,10,512,19,0,24,10,6,6,6,5,6,5,8},{2,3,4,5,2,0,102,4,0,0,2,1,1,1,1,1,1,2},{2,4,5,6,2,0,123,4,0,0,2,2,2,2,1,2,1,2},{3,5,6,6,0,0,0,6,0,0,3,1,1,1,2,1,2,2},{4,5,6,9,0,0,0,6,0,0,4,2,2,2,1,2,1,3},{4,7,9,10,0,0,0,8,0,0,4,3,3,3,2,3,2,3},{5,8,10,12,0,0,0,10,0,0,5,3,3,3,3,3,3,4},{6,9,12,14,0,0,0,11,0,0,6,3,3,3,3,3,3,5},{7,12,14,17,0,0,0,14,0,0,7,5,5,5,3,5,3,5},{9,14,17,21,0,0,0,16,0,0,9,5,5,5,5,5,5,7},{10,16,21,25,0,0,0,20,0,0,10,6,6,6,5,6,0,9},{12,20,25,29,0,0,0,23,0,0,12,8,8,8,6,8,0,9},{15,24,29,36,0,0,0,28,0,0,15,8,8,8,8,8,0,12},{18,28,36,43,0,0,0,34,0,0,18,11,11,11,8,11,0,15},{21,34,43,51,0,0,0,41,0,0,21,13,13,13,11,13,0,17},{26,42,51,0,0,0,0,49,0,0,26,15,15,15,13,15,0,20},{31,49,62,0,0,0,0,58,0,0,31,19,19,19,15,19,0,25},{37,59,74,0,0,0,0,71,0,0,37,22,22,22,19,22,0,29},{44,71,88,0,0,0,0,84,0,0,44,27,27,27,22,27,0,36},{53,85,107,0,0,0,0,101,0,0,53,32,32,32,27,32,0,43},{64,102,0,0,0,0,0,0,0,0,64,38,38,38,32,38,0,0},{77,123,0,0,0,0,0,0,0,0,77,46,46,46,38,46},{92,147,0,0,0,0,0,0,0,0,92,55,55,55,46,55,0},{110,177,0,0,0,0,0,0,0,0,110,66,66,66,55,66,0,0},{133,212,0,0,0,0,0,0,0,0,133,80,80,80,66,80,0,0},{159,0,0,0,0,0,0,0,0,0,0,95,95,95,80,95,0,0},{191,0,0,0,0,0,0,0,0,0,0,115,115,115,95,115,0,0},{229,0,0,0,0,0,0,0,0,0,0,137,137,137,115,137,0,0},{274,0,0,0,0,0,0,0,0,0,0,165,165,165,137,165,0,0},{330,0,0,0,0,0,0,0,0,0,0,198,198,198,165,198,0,0}};

    unsigned short punkty = 0;
    if(budNum == 14){ poziomZagrody = lvl; }

    for(int a=0;a<=lvl-1;a++)
    {
        punkty += dbPunkty[a][budNum];
    }

    aktualnePunkty[budNum] = punkty;
    unsigned short sumaPunktow = 0;

    for(int b=0;b<=17;b++)
    {
        sumaPunktow += aktualnePunkty[b];
    }

    ui->Punkty->setText(kropkiInt(sumaPunktow));
    liczMiejscaZagrodaBud(budNum, lvl);
}
unsigned short miejscaZagrodaBud[18] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

void tribalMain::liczMiejscaZagrodaBud(int budNum, int lvl)
{
    unsigned short dbZagrodaBud[18][30] = {/* Ratusz */ {5,1,1,1,1,2,2,2,3,3,3,4,5,5,7,8,9,10,12,15,17,19,23,27,31,37,43,51,59,69},
                                           /* Koszary */ {7,1,2,1,2,2,3,3,4,4,5,5,7,8,9,11,12,15,17,20,24,27,32,38,44,0,0,0,0,0},
                                           /* Stajnia */ {8,1,2,2,2,3,3,3,4,5,5,7,8,9,10,12,15,16,20,23,0,0,0,0,0,0,0,0,0,0},
                                           /* Warsztat */ {8,1,2,2,2,3,3,3,4,5,5,7,8,9,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                           /* Pierwszy Kościół */ {5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                           /* Kościół */ {5000,2750,4263,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                           /* Pałac */ {80,14,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                           /* Kuźnia */ {20,3,4,5,5,7,7,9,10,12,14,16,20,22,26,31,36,42,49,57,0,0,0,0,0,0,0,0,0,0},
                                           /* Plac */ {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                           /* Piedastał */ {10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                           /* Rynek */ {20,3,4,5,5,7,7,9,10,12,14,16,20,22,26,31,36,42,49,57,67,79,92,107,126,0,0,0,0,0},
                                           /* Tartak */ {5,1,1,1,1,1,2,2,2,2,3,3,4,5,5,5,7,8,9,10,12,14,16,19,21,24,29,33,38,43},
                                           /* Ciegielnia */ {10,1,2,2,2,2,3,3,4,4,4,5,6,7,8,8,10,12,13,15,16,20,22,25,28,33,37,42,48,55},
                                           /* Huta */ {10,2,2,2,3,3,4,4,5,6,7,8,10,11,13,15,18,21,25,28,34,39,46,54,63,74,86,100,118,138},
                                           /* Zagroda */ {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                           /* Spichlerz */ {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                           /* Schowek */ {2,0,1,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                                           /* Mur */ {5,1,1,1,1,2,2,2,3,3,3,4,5,5,7,8,9,10,12,15,0,0,0,0,0,0,0,0,0,0}};

    int miejscaBud = 0;

    for(int a=0; a<=lvl-1;a++)
    {
        miejscaBud += dbZagrodaBud[budNum][a];
    }
    miejscaZagrodaBud[budNum] = miejscaBud;
    sumaZagrodaBud = 0;

    for(int n=0;n<=17;n++)
    {
        sumaZagrodaBud += miejscaZagrodaBud[n];
    }
    ui->ZajetePrzezBudynki->setText(kropkiInt(sumaZagrodaBud));
    liczWojo();
}
void tribalMain::liczWojo()
{
    unsigned short dbWojo[12][8] = { /* Pikinier */ {50,30,10,1,10,15,45,20},
                                     /* Miecznik */ {30,30,70,1,25,50,15,40},
                                     /* Topornik */ {60,30,40,1,40,10,5,10},
                                     /* Łucznik */ {100,30,60,1,15,50,40,5},
                                     /* Zwiadowca */ {50,50,20,2,0,2,1,2},
                                     /* LK */ {125,100,250,4,130,30,40,30},
                                     /* ŁK */ {250,100,150,5,120,40,30,50},
                                     /* CK */ {200,150,600,6,150,200,80,180},
                                     /* Taran */ {300,200,200,5,2,20,50,20},
                                     /* Katas */ {320,400,100,8,100,100,50,100},
                                     /* Rycerz */ {20,20,40,10,150,250,400,150},
                                     /* Gruby */ {40000,50000,50000,100,30,100,50,100}};

    int wpisaneWojo[12] = {ui->Piki->value(),ui->Miecze->value(),ui->Topy->value(),ui->Luki->value(),ui->Zwiady->value(),ui->LK->value(),ui->LucznicyK->value(),ui->CK->value(),ui->Tarany->value(),ui->Katasy->value(),ui->Rycek->value(),ui->Grubas->value()};

    int surki[3] = {0};
    int silaWoja[4] = {0};
    int miejscaZagrodaWojo = 0;

    for(int a=0;a<=11;a++)
    {
        surki[0] += (dbWojo[a][0] * wpisaneWojo[a]);
        surki[1] += (dbWojo[a][1] * wpisaneWojo[a]);
        surki[2] += (dbWojo[a][2] * wpisaneWojo[a]);

        miejscaZagrodaWojo += (dbWojo[a][3] * wpisaneWojo[a]);

        silaWoja[0] += (dbWojo[a][4] * wpisaneWojo[a]);
        silaWoja[1] += (dbWojo[a][5] * wpisaneWojo[a]);
        silaWoja[2] += (dbWojo[a][6] * wpisaneWojo[a]);
        silaWoja[3] += (dbWojo[a][7] * wpisaneWojo[a]);

     }

    ui->Wood->setText(kropkiInt(surki[0]));
    ui->Clay->setText(kropkiInt(surki[1]));
    ui->Iron->setText(kropkiInt(surki[2]));

    ui->ZajetePrzezWojsko->setText(kropkiInt(miejscaZagrodaWojo));

    ui->Atak->setText(kropkiInt(silaWoja[0]));
    ui->Obrona->setText(kropkiInt(silaWoja[1]));
    ui->ObronaKaw->setText(kropkiInt(silaWoja[2]));
    ui->ObronaLuk->setText(kropkiInt(silaWoja[3]));

    // Suma Zagrody

    int sumaZagrody = sumaZagrodaBud + miejscaZagrodaWojo;

    unsigned short dbPojemnoscZagrody[30] = {240,281,329,386,452,530,622,729,854,1002,1174,1376,1613,1891,2216,2598,3045,3569,4183,4904,5748,6737,7896,9255,10848,12715,14904,17469,20476,24000};

    unsigned short pojemnoscZagrody = dbPojemnoscZagrody[poziomZagrody-1];

    if(zagrodaChecked) {pojemnoscZagrody = (pojemnoscZagrody*0.10)+pojemnoscZagrody;}

    if(sumaZagrody>pojemnoscZagrody)
    {
        ui->stringZagrodaBilans->setText("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\np, li { white-space: pre-wrap; }\n</style></head><body style=\" font-family:'Droid Sans'; font-size:15pt; font-weight:400; font-style:normal;\">\n<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">"+QString::number(sumaZagrody)+"/"+QString::number(pojemnoscZagrody)+"</span></p></body></html>");
    }
    else
    {
        ui->stringZagrodaBilans->setText(QString::number(sumaZagrody)+"/"+QString::number(pojemnoscZagrody));
    }

}

void tribalMain::on_Ratusz_valueChanged(int lvlRatusz) { liczPunkty(0,lvlRatusz); }
void tribalMain::on_Koszary_valueChanged(int lvlKoszary) { liczPunkty(1,lvlKoszary); }
void tribalMain::on_Stajnia_valueChanged(int lvlStajnia) { liczPunkty(2,lvlStajnia); }
void tribalMain::on_Warsztat_valueChanged(int lvlWarsztat) { liczPunkty(3,lvlWarsztat); }
void tribalMain::on_Palac_valueChanged(int lvlPalac) { liczPunkty(6,lvlPalac); }
void tribalMain::on_Kuznia_valueChanged(int lvlKuznia) { liczPunkty(7,lvlKuznia); }
void tribalMain::on_Plac_valueChanged(int lvlPlac) { liczPunkty(8,lvlPlac); }
void tribalMain::on_Piedastal_valueChanged(int lvlPiedastal) { liczPunkty(9,lvlPiedastal); }
void tribalMain::on_Rynek_valueChanged(int lvlRynek) { liczPunkty(10,lvlRynek); }
void tribalMain::on_Tartak_valueChanged(int lvlTartak) { liczPunkty(11,lvlTartak); }
void tribalMain::on_Cegielnia_valueChanged(int lvlCegielnia) { liczPunkty(12,lvlCegielnia); }
void tribalMain::on_Huta_valueChanged(int lvlHuta) { liczPunkty(13,lvlHuta); }
void tribalMain::on_Zagroda_valueChanged(int lvlZagroda) { liczPunkty(14,lvlZagroda); }
void tribalMain::on_Spichlerz_valueChanged(int lvlSpichlerz) { liczPunkty(15,lvlSpichlerz); }
void tribalMain::on_Schowek_valueChanged(int lvlSchowek) { liczPunkty(16,lvlSchowek); }
void tribalMain::on_Mur_valueChanged(int lvlMur) { liczPunkty(17,lvlMur); }
void tribalMain::on_Piki_valueChanged(){liczWojo();}
void tribalMain::on_Miecze_valueChanged(){liczWojo();}
void tribalMain::on_Topy_valueChanged(){liczWojo();}
void tribalMain::on_Luki_valueChanged(){liczWojo();}
void tribalMain::on_Zwiady_valueChanged(){liczWojo();}
void tribalMain::on_LK_valueChanged(){liczWojo();}
void tribalMain::on_LucznicyK_valueChanged(){liczWojo();}
void tribalMain::on_CK_valueChanged(){liczWojo();}
void tribalMain::on_Tarany_valueChanged(){liczWojo();}
void tribalMain::on_Katasy_valueChanged(){liczWojo();}
void tribalMain::on_Rycek_valueChanged(){liczWojo();}
void tribalMain::on_Grubas_valueChanged(){liczWojo();}



void tribalMain::on_checkBox_clicked(bool checked)
{
    if(checked)
    {
            zagrodaChecked = true;

    }
    else
    {
            zagrodaChecked = false;
    }
    liczWojo();
}
QString tribalMain::kropkiInt(int n)
{
    QString nString = QString::number(n);
    QString result = nString;

    unsigned short miejscaKropek[3] = {0};
    int b = 0;
    //Zapisuje do tablicy lokalizacje kropek
    for(int a=(nString.length()-3),b=0;a>0;a=(a-3),b++)
    {
        miejscaKropek[b] = a;
    }
    //Wstawia kropki w podane miejsca

    if(miejscaKropek[0]!=0){result.insert(miejscaKropek[0], QString("."));}
    if(miejscaKropek[1]!=0){result.insert(miejscaKropek[1], QString("."));}
    if(miejscaKropek[2]!=0){result.insert(miejscaKropek[2], QString("."));}else{b=b;}

    return result;
}


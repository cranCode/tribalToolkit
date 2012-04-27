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

void tribalMain::liczPunkty(int budNum, int lvl)
{
    unsigned short dbPunkty[30][18] = {{10,16,20,24,10,10,512,19,0,24,10,6,6,6,5,6,5,8},{2,3,4,5,2,0,102,4,0,0,2,1,1,1,1,1,1,2},{2,4,5,6,2,0,123,4,0,0,2,2,2,2,1,2,1,2},{3,5,6,6,0,0,0,6,0,0,3,1,1,1,2,1,2,2},{4,5,6,9,0,0,0,6,0,0,4,2,2,2,1,2,1,3},{4,7,9,10,0,0,0,8,0,0,4,3,3,3,2,3,2,3},{5,8,10,12,0,0,0,10,0,0,5,3,3,3,3,3,3,4},{6,9,12,14,0,0,0,11,0,0,6,3,3,3,3,3,3,5},{7,12,14,17,0,0,0,14,0,0,7,5,5,5,3,5,3,5},{9,14,17,21,0,0,0,16,0,0,9,5,5,5,5,5,5,7},{10,16,21,25,0,0,0,20,0,0,10,6,6,6,5,6,0,9},{12,20,25,29,0,0,0,23,0,0,12,8,8,8,6,8,0,9},{15,24,29,36,0,0,0,28,0,0,15,8,8,8,8,8,0,12},{18,28,36,43,0,0,0,34,0,0,18,11,11,11,8,11,0,15},{21,34,43,51,0,0,0,41,0,0,21,13,13,13,11,13,0,17},{26,42,51,0,0,0,0,49,0,0,26,15,15,15,13,15,0,20},{31,49,62,0,0,0,0,58,0,0,31,19,19,19,15,19,0,25},{37,59,74,0,0,0,0,71,0,0,37,22,22,22,19,22,0,29},{44,71,88,0,0,0,0,84,0,0,44,27,27,27,22,27,0,36},{53,85,107,0,0,0,0,101,0,0,53,32,32,32,27,32,0,43},{64,102,0,0,0,0,0,0,0,0,64,38,38,38,32,38,0,0},{77,123,0,0,0,0,0,0,0,0,77,46,46,46,38,46},{92,147,0,0,0,0,0,0,0,0,92,55,55,55,46,55,0},{110,177,0,0,0,0,0,0,0,0,110,66,66,66,55,66,0,0},{133,212,0,0,0,0,0,0,0,0,133,80,80,80,66,80,0,0},{159,0,0,0,0,0,0,0,0,0,0,95,95,95,80,95,0,0},{191,0,0,0,0,0,0,0,0,0,0,115,115,115,95,115,0,0},{229,0,0,0,0,0,0,0,0,0,0,137,137,137,115,137,0,0},{274,0,0,0,0,0,0,0,0,0,0,165,165,165,137,165,0,0},{330,0,0,0,0,0,0,0,0,0,0,198,198,198,165,198,0,0}};

    unsigned short punkty = 0;

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

    ui->Punkty->setNum(sumaPunktow);
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




void tribalMain::on_checkBox_clicked(bool checked)
{
    (checked)?ui->ZajetePrzezBudynki->setNum(1):ui->ZajetePrzezBudynki->setNum(0);
}

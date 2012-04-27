#ifndef TRIBALMAIN_H
#define TRIBALMAIN_H

#include <QMainWindow>


namespace Ui {
class tribalMain;
}

class tribalMain : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit tribalMain(QWidget *parent = 0);
    ~tribalMain();
    
private slots:

    void liczPunkty(int budNum, int lvl);
    // Konstruktory funkcji wywołujących liczPunkty() przy zmienieniu wartości inputa
    void on_Ratusz_valueChanged(int lvlRatusz);
    void on_Koszary_valueChanged(int lvlKoszary);
    void on_Stajnia_valueChanged(int lvlStajnia);
    void on_Warsztat_valueChanged(int lvlWarszat);
    void on_Palac_valueChanged(int lvlPalac);
    void on_Kuznia_valueChanged(int lvlKuznia);
    void on_Plac_valueChanged(int lvlPlac);
    void on_Piedastal_valueChanged(int lvlPiedastal);
    void on_Rynek_valueChanged(int lvlRynek);
    void on_Tartak_valueChanged(int lvlTartak);
    void on_Cegielnia_valueChanged(int lvlCegielnia);
    void on_Huta_valueChanged(int lvlHuta);
    void on_Zagroda_valueChanged(int lvlZagroda);
    void on_Spichlerz_valueChanged(int lvlSpichlerz);
    void on_Schowek_valueChanged(int lvlSchowek);
    void on_Mur_valueChanged(int lvlMur);

    void on_checkBox_clicked(bool checked);

private:
    Ui::tribalMain *ui;
};

#endif // TRIBALMAIN_H

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
    
private:
    Ui::tribalMain *ui;
};

#endif // TRIBALMAIN_H

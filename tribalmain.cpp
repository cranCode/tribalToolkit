#include "tribalmain.h"
#include "ui_tribalmain.h"

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

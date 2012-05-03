#include "autorzywindow.h"
#include "ui_autorzywindow.h"

AutorzyWindow::AutorzyWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AutorzyWindow)
{
    ui->setupUi(this);
}

AutorzyWindow::~AutorzyWindow()
{
    delete ui;
}

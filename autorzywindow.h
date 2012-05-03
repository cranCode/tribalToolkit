#ifndef AUTORZYWINDOW_H
#define AUTORZYWINDOW_H

#include <QDialog>

namespace Ui {
class AutorzyWindow;
}

class AutorzyWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit AutorzyWindow(QWidget *parent = 0);
    ~AutorzyWindow();
    
private:
    Ui::AutorzyWindow *ui;
};

#endif // AUTORZYWINDOW_H

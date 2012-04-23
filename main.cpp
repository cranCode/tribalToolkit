#include <QtGui/QApplication>
#include "tribalmain.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tribalMain w;
    w.show();
    
    return a.exec();
}

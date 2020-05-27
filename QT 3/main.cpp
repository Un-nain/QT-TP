#include <iostream>
#include <QApplication>
#include <QPushButton>
#include "IHM.h"
#include "exo2.h"

int main(int argc, char **argv) {
    QApplication app (argc, argv);


    IHM *fenetre1=new IHM;
    //fenetre1->show();

    exo2 *fenetre2=new exo2;
    fenetre2->show();


    return app.exec();
}

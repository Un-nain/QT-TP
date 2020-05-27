//
// Created by Anselmet on 18/03/2020.
//

#ifndef TP_QT_EXO2_H
#define TP_QT_EXO2_H


#include <QtWidgets>
#include <QObject>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPushButton>
#include <iostream>
#include "IHM.h"

class exo2 : public QMainWindow {
Q_OBJECT;
public:
    exo2(QMainWindow* fenetre = 0);

public slots:
    void changeButton();
private:
    QPushButton *b1;
    QTextEdit *e1;
    int value=0;
};



#endif //TP_QT_EXO2_H

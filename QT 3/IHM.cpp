//
// Created by Anselmet on 18/03/2020.
//

#include "IHM.h"

IHM::IHM(QWidget *parent) {

    this->setWindowTitle("IHM");
    this->setMinimumWidth(500);
    QWidget* mainWidget = new QWidget();

    QVBoxLayout* mainLayout = new QVBoxLayout();

    this->b1=new QPushButton();
    this->progressBar1 = new QProgressBar();
    this->slider1=new QSlider(Qt::Horizontal);

    mainLayout->addWidget(progressBar1);
    mainLayout->addWidget(slider1);
    mainLayout->addWidget(b1);
    mainWidget->setLayout(mainLayout);
    this->setCentralWidget(mainWidget);

    progressBar1->setValue(100);
    slider1->setValue(100);
    QObject::connect(slider1, SIGNAL (valueChanged(int)), progressBar1, SLOT (setValue(int)));

}



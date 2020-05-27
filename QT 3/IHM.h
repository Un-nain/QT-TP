//
// Created by Anselmet on 18/03/2020.
//

#ifndef TP_QT_IHM_H
#define TP_QT_IHM_H
#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include <QMainWindow>
#include <QProgressBar>
#include <QSlider>
#include <QString>
#include <QVBoxLayout>


class IHM : public QMainWindow {
Q_OBJECT
public:
    IHM(QWidget* parent = nullptr);

private:
    QProgressBar* progressBar1;
    QSlider* slider1;
    QPushButton* b1;

};


#endif //TP_QT_IHM_H

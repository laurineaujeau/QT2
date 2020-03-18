//
// Created by lauri on 12/03/2020.
//

#include "QMainWindow.h"
QMainWindow::QMainWindow(QWidget* parent) {
    button=new QPushButton();
    button->setMinimumSize(600,500);
    button->setGeometry(10,10,80,30);
    button->setWindowTitle ("Titre");

}
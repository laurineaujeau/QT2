//
// Created by lauri on 12/03/2020.
//

#ifndef QT2_QMAINWINDOW_H
#define QT2_QMAINWINDOW_H
#include <QWidget>
#include <QObject>
#include <QPushButton>

class QMainWindow : public QWidget {
Q_OBJECT;
private:
    QPushButton* button=new QPushButton;
public:

    QMainWindow(QWidget* parent=0);
};


#endif //QT2_QMAINWINDOW_H

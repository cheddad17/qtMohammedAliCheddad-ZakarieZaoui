#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <QtWidgets>

#pragma once
class calculator : public QWidget
{

public:
  //constructor
    explicit calculator(QWidget *parent = nullptr);
    void creatingWdgetss();
    void positionWidgetss();
    void makeConnectionss();
private:
  QPushButton *buttons[10];
  QPushButton *bEnter;
  QLCDNumber *lcd;
  QVBoxLayout *mainLayout;
  QGridLayout *grid;
};

#endif // CALCULATOR_H

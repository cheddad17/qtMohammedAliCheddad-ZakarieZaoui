#include "gridLayout.h"
#include <string>


void calculator ::creatingWdgets(){
    for(int i=0;i<10;i++){
       QString s = QString::number(9-i);
        buttons[i]=new QPushButton(s);
    }
    bEnter =new QPushButton("enter");
    lcd = new QLCDNumber();
    lcd->setSegmentStyle(QLCDNumber::Flat);

}
void calculator :: positionWidgets(){
   mainLayout = new QVBoxLayout();
   grid = new QGridLayout();

   int k = 0;
   for(int i=1;i<4;i++){
       for(int j=0;j<3;j++){
        grid->addWidget(buttons[k],i,2-j);
        k++;
        lcd->setMinimumHeight(80);
        lcd->setDigitCount(6);
       }
   }
    grid->addWidget(buttons[9],4,0);
    grid->addWidget(bEnter,4,1,1,2);
    mainLayout->addWidget(lcd);
    mainLayout->addLayout(grid);
    resize(300,300);
    setLayout(mainLayout);

}
calculator::calculator(QWidget* parent):QWidget(parent)
{
creatingWdgets();
positionWidgets();


}
void calculator :: makeConnections(){
    QString num;



}

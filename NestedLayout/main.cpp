#include <QApplication>
#include <QtWidgets>




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto window =  new QWidget;
    window->resize(400,130);
    auto mainLayout = new QHBoxLayout;
    auto rightLayout = new QVBoxLayout;
    auto leftLayout = new QVBoxLayout;
    auto leftTopLayout = new QHBoxLayout;
    auto leftBottomLayout = new QVBoxLayout;
    auto nameLabel = new QLabel("name");
    auto editLine = new QLineEdit;
    auto checkB1 = new QCheckBox("Match case");
    auto checkB2 = new QCheckBox("Search backwards");
    auto button1 = new QPushButton("Search");
    auto button2 = new QPushButton("Close");
    leftTopLayout->addWidget(nameLabel);
    leftTopLayout->addWidget(editLine);
    leftBottomLayout->addWidget(checkB1);
    leftBottomLayout->addWidget(checkB2);
    leftLayout->addLayout(leftTopLayout);
    leftLayout->addLayout(leftBottomLayout);
    rightLayout->addWidget(button1);
    rightLayout->addWidget(button2);
    rightLayout->addStretch(1);
    leftLayout->addStretch(1);
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    window->setLayout(mainLayout);
    window->show();





    return a.exec();
}

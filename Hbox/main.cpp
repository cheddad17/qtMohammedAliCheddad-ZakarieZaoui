#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QtWidgets>
#include <QSlider>
#include <QSpinBox>
#include <QStringList>
#include <QString>
#include <QLineEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto window = new QWidget();
      window->setWindowTitle("QHBoxLayout Test");
      auto layout = new QHBoxLayout;
      auto label1 = new QLabel("name:");
      auto TEditBox = new QLineEdit;
      auto Button1 = new QPushButton("search");
      layout->addWidget(label1);
      layout->addWidget(TEditBox);
      layout->addWidget(Button1);
      window->setLayout(layout);
      window->show();
    return a.exec();
}

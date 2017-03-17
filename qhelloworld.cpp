#include "qhelloworld.h"

#include <QApplication>
#include <QPushButton>
#include <QLabel>

QHelloWorld::QHelloWorld()
{
    this->setFixedSize(400, 400);

    QPushButton *button = new QPushButton("Click Me!", this);
    button->setGeometry(10, 10, 80, 30);

    connect(button, SIGNAL(clicked(bool)), this, SLOT(buttonClicked(bool)));

    QLabel *label = new QLabel("0 times clicked", this);
    label->setGeometry(10, 40, 0, 0);
    label->adjustSize();
    label->setStyleSheet("* { background-color: rgb(255, 255, 255); }");
    m_Label = label;

    QPushButton *quitButton = new QPushButton("Quit", this);
    quitButton->setGeometry(10, 100, 80, 30);

    connect(quitButton, SIGNAL(clicked(bool)), QApplication::instance(), SLOT(quit()));
}

void QHelloWorld::buttonClicked(bool clicked)
{
    m_clickCount += 1;
    m_Label->setText( QString("%1 times clicked").arg(m_clickCount) );
    m_Label->adjustSize();
}

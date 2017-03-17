#ifndef QHELLOWORLD_H
#define QHELLOWORLD_H

#include <QWidget>
#include <QLabel>

class QHelloWorld : public QWidget
{
    Q_OBJECT
private:
    int m_clickCount = 0;
    QLabel* m_Label = NULL;

public:
    QHelloWorld();
signals:

public slots:
    void buttonClicked(bool clicked);
};

#endif // QHELLOWORLD_H

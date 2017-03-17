#include <QApplication>

#include <qhelloworld.h>

int main(int argc, char **argv)
{
 QApplication app(argc, argv);

 QHelloWorld hw;
 hw.show();
 return app.exec();
}

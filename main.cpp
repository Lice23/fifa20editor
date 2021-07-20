#include "Fifa20Editor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Fifa20Editor w;
    w.show();
    return a.exec();
}

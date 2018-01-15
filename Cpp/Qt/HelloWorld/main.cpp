#include <QApplication>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    /*QApplication app(argc, argv);

    QLabel label("Hello, World");
    label.show();

    return app.exec();
    */

    QApplication app(argc,argv);

    QPushButton button("Quit");
    QObject::connect(&button,&QPushButton::clicked,&QApplication::quit);
    button.show();

    return app.exec();



}

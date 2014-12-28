#include <QCoreApplication>
#include <iostream>
#include <QDebug>

void chat (void)
{
    qDebug() << "Приветули";
    qDebug() << "Проверим Github?";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    setlocale(LC_ALL, "Rus");

    chat();


    return 0;
}

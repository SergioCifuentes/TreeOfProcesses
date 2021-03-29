#ifndef THREADLEER_H
#define THREADLEER_H

#include <QThread>
using namespace std;
class ThreadLeer : public QThread
{
    Q_OBJECT
public:
    explicit ThreadLeer(QObject *parent = 0);
    void run();
    int planta=0;

signals:
    void NuevoColor(int,int,int);

public slots:

};

#endif // THREADLEER_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include "threadleer.h"

using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{

    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    ThreadLeer *threadLeer;
    virtual void paintEvent(QPaintEvent *event);


private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
public slots:
    void onNuevoColor(int,int,int);
};
#endif // MAINWINDOW_H

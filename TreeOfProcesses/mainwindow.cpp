#include "mainwindow.h"
#include "planta.cpp"
#include "ui_mainwindow.h"
#include "threadleer.h"

#include <iostream>
#include<sstream>
#include <QDebug>
#include <string>
#include<vector>
#include <QColor>

using namespace std;
planta* plantas= new planta[10];
bool started=false;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    threadLeer= new ThreadLeer(this);
    qDebug("coneccion Creada");
    connect(threadLeer,SIGNAL(NuevoColor(int,int,int)),this,SLOT(onNuevoColor(int,int,int)));

}

MainWindow::~MainWindow()
{

    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *event){

    QPainter painter(this);
}


void MainWindow::on_pushButton_clicked()
{

    ui->history->append(ui->input->text());

    std::string str = ui->input->text().toUtf8().constData();
    ui->input->setText("");

      vector<string> result;
      stringstream s_stream(str); //create string stream from the string
      while(s_stream.good()) {
         string substr;
         getline(s_stream, substr, ','); //get first string delimited by comma
         result.push_back(substr);
      }

    //QString s=QString::fromStdString(op);
    if(result.at(0).substr(1,1)=="P"){
        qDebug("P");
        int hojas=0;
        int ramas=0;
        int id=0;

        if(result.size()>=3){
            stringstream geek(result.at(1));
             geek >> id;
            if(result.size()==4){
                stringstream geek(result.at(2));
                geek >> ramas;

                vector<string> result2;
                stringstream s_stream(result.at(3)); //create string stream from the string
                while(s_stream.good()) {
                   string substr;
                   getline(s_stream, substr, ')'); //get first string delimited by comma
                   result2.push_back(substr);
                }
                stringstream geek2(result2.at(0));
                geek2 >> hojas;
            }else{
                vector<string> result2;
                stringstream s_stream(result.at(2)); //create string stream from the string
                while(s_stream.good()) {
                   string substr;
                   getline(s_stream, substr, ')'); //get first string delimited by comma
                   result2.push_back(substr);
                }
                stringstream geek(result2.at(0));
                geek >> ramas;
            }
        }else{
            vector<string> result2;
            stringstream s_stream(result.at(1)); //create string stream from the string
            while(s_stream.good()) {
               string substr;
               getline(s_stream, substr, ')'); //get first string delimited by comma
               result2.push_back(substr);
            }
            stringstream geek(result2.at(0));
            geek >> id;
        }
        qDebug("\nid %d\n",id);
        qDebug("ramas %d\n",ramas);
        qDebug("hojas %d\n",hojas);
        plantas[0]=planta(id,ramas,hojas);

    }else if(result.at(0).substr(1,1)=="M"){
        int id;
        qDebug("M");
        vector<string> result2;
        stringstream s_stream(result.at(1)); //create string stream from the string
        while(s_stream.good()) {
           string substr;
           getline(s_stream, substr, ')'); //get first string delimited by comma
           result2.push_back(substr);
        }
        stringstream geek(result2.at(0));
        geek >> id;
        threadLeer->planta=id;


    }else if(result.at(0).substr(1,1)=="I"){
        qDebug("II");

    }else{
        qDebug("Error");
    }

if (started==false){
     qDebug("Empezando");
    threadLeer->start();
    started=true;
}
}
void MainWindow::onNuevoColor(int color,int rama,int hoja){
    qDebug("Entrando %d\n",color);
    string nombreColor = convertint(color);

    if(hoja==0){
        if(rama==0){
            int n2 = nombreColor.length();
                    char colorChar[n2 + 1];
                    strcpy(colorChar, nombreColor.c_str());
                    ui->tronco->setBackground(QBrush(QColor(colorChar)));
        }
    }


}

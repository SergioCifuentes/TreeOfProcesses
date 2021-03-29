#include "mainwindow.h"
#include "planta.cpp"
#include "ui_mainwindow.h"
#include "threadleer.h"
#include "Imprimir.cpp"
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
ocultar();
}

MainWindow::~MainWindow()
{

    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *event){

    QPainter painter(this);
}

void MainWindow::ocultar(){
   ui->tronco->setBackground(QBrush(QColor(238,238,236)));
   ui->rama1->setBackground(QBrush(QColor(238,238,236)));
   ui->rama2->setBackground(QBrush(QColor(238,238,236)));
   ui->rama3->setBackground(QBrush(QColor(238,238,236)));
   ui->rama4->setBackground(QBrush(QColor(238,238,236)));
   ui->rama5->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja11->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja12->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja13->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja14->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja15->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja16->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja17->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja18->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja19->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja110->setBackground(QBrush(QColor(238,238,236)));

   ui->hoja21->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja22->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja23->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja24->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja25->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja26->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja27->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja28->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja29->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja210->setBackground(QBrush(QColor(238,238,236)));

   ui->hoja31->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja32->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja33->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja34->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja35->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja36->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja37->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja38->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja39->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja310->setBackground(QBrush(QColor(238,238,236)));

   ui->hoja41->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja42->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja43->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja44->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja45->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja46->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja47->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja48->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja49->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja410->setBackground(QBrush(QColor(238,238,236)));

   ui->hoja51->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja52->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja53->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja54->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja55->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja56->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja57->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja58->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja59->setBackground(QBrush(QColor(238,238,236)));
   ui->hoja510->setBackground(QBrush(QColor(238,238,236)));


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
        int id;
        vector<string> result2;
        stringstream s_stream(result.at(1)); //create string stream from the string
        while(s_stream.good()) {
           string substr;
           getline(s_stream, substr, ')'); //get first string delimited by comma
           result2.push_back(substr);
        }
        stringstream geek(result2.at(0));
        geek >> id;
        imprimirEstado(id);




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
    int n2 = nombreColor.length();
            char colorChar[n2 + 1];
            strcpy(colorChar, nombreColor.c_str());

    if(hoja==0){
        if(rama==0){

                    ui->tronco->setBackground(QBrush(QColor(colorChar)));
        }else{
            if(rama==1)ui->rama1->setBackground(QBrush(QColor(colorChar)));
            if(rama==2)ui->rama2->setBackground(QBrush(QColor(colorChar)));
            if(rama==3)ui->rama3->setBackground(QBrush(QColor(colorChar)));
            if(rama==4)ui->rama4->setBackground(QBrush(QColor(colorChar)));
            if(rama==5)ui->rama5->setBackground(QBrush(QColor(colorChar)));
        }
    }else{
        if(rama==1){
            if(hoja==1)ui->hoja11->setBackground(QBrush(QColor(colorChar)));
            if(hoja==2)ui->hoja12->setBackground(QBrush(QColor(colorChar)));
            if(hoja==3)ui->hoja13->setBackground(QBrush(QColor(colorChar)));
            if(hoja==4)ui->hoja14->setBackground(QBrush(QColor(colorChar)));
            if(hoja==5)ui->hoja15->setBackground(QBrush(QColor(colorChar)));
            if(hoja==6)ui->hoja16->setBackground(QBrush(QColor(colorChar)));
            if(hoja==7)ui->hoja17->setBackground(QBrush(QColor(colorChar)));
            if(hoja==8)ui->hoja18->setBackground(QBrush(QColor(colorChar)));
            if(hoja==9)ui->hoja19->setBackground(QBrush(QColor(colorChar)));
            if(hoja==10)ui->hoja110->setBackground(QBrush(QColor(colorChar)));
        }else if(rama==2){
            if(hoja==1)ui->hoja21->setBackground(QBrush(QColor(colorChar)));
            if(hoja==2)ui->hoja22->setBackground(QBrush(QColor(colorChar)));
            if(hoja==3)ui->hoja23->setBackground(QBrush(QColor(colorChar)));
            if(hoja==4)ui->hoja24->setBackground(QBrush(QColor(colorChar)));
            if(hoja==5)ui->hoja25->setBackground(QBrush(QColor(colorChar)));
            if(hoja==6)ui->hoja26->setBackground(QBrush(QColor(colorChar)));
            if(hoja==7)ui->hoja27->setBackground(QBrush(QColor(colorChar)));
            if(hoja==8)ui->hoja28->setBackground(QBrush(QColor(colorChar)));
            if(hoja==9)ui->hoja29->setBackground(QBrush(QColor(colorChar)));
            if(hoja==10)ui->hoja210->setBackground(QBrush(QColor(colorChar)));
        }else if(rama==3){
            if(hoja==1)ui->hoja31->setBackground(QBrush(QColor(colorChar)));
            if(hoja==2)ui->hoja32->setBackground(QBrush(QColor(colorChar)));
            if(hoja==3)ui->hoja33->setBackground(QBrush(QColor(colorChar)));
            if(hoja==4)ui->hoja34->setBackground(QBrush(QColor(colorChar)));
            if(hoja==5)ui->hoja35->setBackground(QBrush(QColor(colorChar)));
            if(hoja==6)ui->hoja36->setBackground(QBrush(QColor(colorChar)));
            if(hoja==7)ui->hoja37->setBackground(QBrush(QColor(colorChar)));
            if(hoja==8)ui->hoja38->setBackground(QBrush(QColor(colorChar)));
            if(hoja==9)ui->hoja39->setBackground(QBrush(QColor(colorChar)));
            if(hoja==10)ui->hoja310->setBackground(QBrush(QColor(colorChar)));
        }else if(rama==4){
            if(hoja==1)ui->hoja41->setBackground(QBrush(QColor(colorChar)));
            if(hoja==2)ui->hoja42->setBackground(QBrush(QColor(colorChar)));
            if(hoja==3)ui->hoja43->setBackground(QBrush(QColor(colorChar)));
            if(hoja==4)ui->hoja44->setBackground(QBrush(QColor(colorChar)));
            if(hoja==5)ui->hoja45->setBackground(QBrush(QColor(colorChar)));
            if(hoja==6)ui->hoja46->setBackground(QBrush(QColor(colorChar)));
            if(hoja==7)ui->hoja47->setBackground(QBrush(QColor(colorChar)));
            if(hoja==8)ui->hoja48->setBackground(QBrush(QColor(colorChar)));
            if(hoja==9)ui->hoja49->setBackground(QBrush(QColor(colorChar)));
            if(hoja==10)ui->hoja410->setBackground(QBrush(QColor(colorChar)));
        }else if(rama==5){
            if(hoja==1)ui->hoja51->setBackground(QBrush(QColor(colorChar)));
            if(hoja==2)ui->hoja52->setBackground(QBrush(QColor(colorChar)));
            if(hoja==3)ui->hoja53->setBackground(QBrush(QColor(colorChar)));
            if(hoja==4)ui->hoja54->setBackground(QBrush(QColor(colorChar)));
            if(hoja==5)ui->hoja55->setBackground(QBrush(QColor(colorChar)));
            if(hoja==6)ui->hoja56->setBackground(QBrush(QColor(colorChar)));
            if(hoja==7)ui->hoja57->setBackground(QBrush(QColor(colorChar)));
            if(hoja==8)ui->hoja58->setBackground(QBrush(QColor(colorChar)));
            if(hoja==9)ui->hoja59->setBackground(QBrush(QColor(colorChar)));
            if(hoja==10)ui->hoja510->setBackground(QBrush(QColor(colorChar)));
        }
    }


}


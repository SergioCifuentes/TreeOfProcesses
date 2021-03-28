#include "mainwindow.h"
#include "planta.cpp"
#include "ui_mainwindow.h"
#include <iostream>
#include<sstream>
#include <QDebug>
#include <string>
#include<vector>
using namespace std;
planta* plantas= new planta[10];
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
      qDebug("Size%d",result.size());
      for(int i = 0; i<result.size(); i++) {    //print all splitted strings
         int n = result.at(i).length();
          char char_array[n + 1];
          strcpy(char_array, result.at(i).c_str());
          qDebug(char_array);

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
        qDebug("MM");

    }else if(result.at(0).substr(1,1)=="I"){
        qDebug("II");

    }else{
        qDebug("Error");
    }

}

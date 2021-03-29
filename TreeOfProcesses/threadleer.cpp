#include "threadleer.h"
#include <QtCore>
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <sstream>


ThreadLeer::ThreadLeer(QObject *parent) : QThread(parent)
{

}
void ThreadLeer::run(){
    qDebug("Run");
    bool aux=true;
    qDebug("Buscando Planta%d\n",planta);
    while (true) {
        qDebug("Buscando Planta%d\n",planta);
        while ( planta!=0) {
            qDebug("Color");
            string myText="";
            std::ostringstream s;
            s<< "Planta"<<planta<<"/color";
            std:: string plantaFileColor(s.str());

            // Read from the text file
            ifstream MyReadFile;
            MyReadFile.open(plantaFileColor);
            if(MyReadFile){
                while (getline (MyReadFile, myText)) {
                    // Output the text from the file
                    cout << myText;
                }
                if(myText.length()>0){
                    stringstream geek(myText);
                    int x = 0;
                    geek >> x;

                    emit NuevoColor(x,0,0);
                }

            }
            for(int i=1;i<=5;i++){
                string myText="";
                std::ostringstream s;
                s<< "Planta"<<planta<<"/Rama"<<planta<<"_"<<i<<"/color";
                std:: string plantaFileColor(s.str());

                // Read from the text file
                ifstream MyReadFile;
                MyReadFile.open(plantaFileColor);
                if(MyReadFile){
                    while (getline (MyReadFile, myText)) {
                        // Output the text from the file
                        cout << myText;
                    }
                    if(myText.length()>0){
                        stringstream geek(myText);
                        int x = 0;
                        geek >> x;
                        qDebug("Color--");
                        emit NuevoColor(x,i,0);
                    }

                }
                for(int j=1;j<=100;j++){
                    string myText="";
                    std::ostringstream s;
                    s<< "Planta"<<planta<<"/Rama"<<planta<<"_"<<i<<"/Hoja"<<planta<<"_"<<i<<"_"<<j<<"/color";
                    std:: string plantaFileColor(s.str());

                    // Read from the text file
                    ifstream MyReadFile;
                    MyReadFile.open(plantaFileColor);
                    if(MyReadFile){
                        while (getline (MyReadFile, myText)) {
                            // Output the text from the file
                            cout << myText;
                        }
                        if(myText.length()>0){
                            stringstream geek(myText);
                            int x = 0;
                            geek >> x;
                            qDebug("Color--");
                            emit NuevoColor(x,i,j);
                        }

                    }
                }
            }
            this->msleep(500);
        }

        this->msleep(500);
    }
}

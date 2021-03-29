#include <unistd.h>
#include <sstream>
 #include <sys/prctl.h>
#include <QDebug>
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include "ManejadorDeColores.cpp"
using namespace std;
class hoja {     // The class
private:
    int id=0;
    int p;
    int sleepTime=1;
    void crearCarpteta(string nombrePlanta,string nombreRama,string nombreHoja){
        std::ostringstream s2;
        s2<< nombrePlanta<<"/"<<nombreRama<<"/"<<nombreHoja;


        std:: string carpeta(s2.str());
        int n2 = carpeta.length();
        char carpetaChar[n2 + 1];
        strcpy(carpetaChar, carpeta.c_str());

        mkdir(carpetaChar,0777);
    }



  public:
    // Access specifier
    int getId(){
        return id;
    };
    int getP(){
        return p;
    };
    hoja(int idhoja,int idPlanta, int idRama,std::string nombrePlanta,std::string nombreRama) {     // Constructor
      id=idhoja;
      p=fork();
      if(p==0){
        std::ostringstream s;
         s<< "Hoja"<<idPlanta<<"_"<<idRama<<"_"<<id;
            std:: string processName(s.str());
            int n = processName.length();
            char processNameChar[n + 1];
            strcpy(processNameChar, processName.c_str());
            crearCarpteta(nombrePlanta,nombreRama,processName);
          prctl(PR_SET_NAME,processNameChar,NULL,NULL,NULL);
           sleepTime = rand() % 10 + 2;
          cambiarColor(nombrePlanta,nombreRama, processName);

          sleep(10);
      }

    }
    void cambiarColor(string processName,string nombreRama,string nombreHoja){
        int colorActual=INT_VERDE;
        while(true){
            ofstream file;
            file.open(processName+"/"+nombreRama+"/"+nombreHoja+"/"+"color");
            file << colorActual;
            file.close();
            colorActual=getRgbHoja(colorActual);
            sleep(sleepTime);
        }
    }
    hoja() {     // Constructor

    }
};

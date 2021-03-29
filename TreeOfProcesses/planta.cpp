#include <unistd.h>
#include <sstream>
 #include <sys/prctl.h>
#include <QDebug>
#include "rama.cpp"
#include <iostream>
#include <fstream>
#include <sys/stat.h>
using namespace std;

rama* ramas= new rama[5];
class planta {     // The class
private:
    int id=0;
    int p;

    void    crearCarpteta(string nombrePlanta){
        std::ostringstream s2;
        s2<< nombrePlanta;
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
    planta(int plantaId,int numeroRamas, int numeroHojas) {     // Constructor
      id=plantaId;
      p=fork();

      if(p==0){


        std::ostringstream s;
         s<< "Planta"<<id;
            std:: string processName(s.str());
            int n = processName.length();
            char processNameChar[n + 1];
            strcpy(processNameChar, processName.c_str());
            crearCarpteta(processName);
          prctl(PR_SET_NAME,processNameChar,NULL,NULL,NULL);
          for (int i=0;i<numeroRamas ;i++ ) {
              if(i>0&&ramas[i-1].getP()==0){
                  break;
              }
              qDebug("\nCreando Rama%d\n",i);

              ramas[i]=rama(i+1,numeroHojas,id,processName);
          }
          cambiarColor(processName);

          sleep(10);
      }
    }
    void cambiarColor(string processName){
        int colorActual=INT_NEGRO;
        while(true){

            ofstream file;
            file.open(processName+"/"+"color");
            file << colorActual;
            file.close();
            colorActual=getRgbTronco(colorActual);
            sleep(5);
        }
    }
    planta() {     // Constructor

    }
};

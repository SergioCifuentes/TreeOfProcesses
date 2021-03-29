#include <unistd.h>
#include <sstream>
 #include <sys/prctl.h>
#include <QDebug>
#include "hoja.cpp"

#include <iostream>
#include <fstream>

#include <sys/stat.h>
using namespace std;
hoja* hojas= new hoja[10];
class rama {     // The class
private:
    int id=0;
    int p;

    void crearCarpteta(string nombrePlanta,string nombreRama){
        std::ostringstream s2;
        s2<< nombrePlanta<<"/"<<nombreRama;


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
    rama(int idRama,int numeroHojas,int idPlanta,std::string nombrePlanta) {     // Constructor
      id=idRama;
      p=fork();

      if(p==0){


        std::ostringstream s;
         s<< "Rama"<<idPlanta<<"_"<<id;
            std:: string processName(s.str());
            int n = processName.length();
            char processNameChar[n + 1];
            strcpy(processNameChar, processName.c_str());
            crearCarpteta(nombrePlanta,processName);
          prctl(PR_SET_NAME,processNameChar,NULL,NULL,NULL);
          for (int i=0;i<numeroHojas ;i++ ) {
              if(i>0&&hojas[i-1].getP()==0){
                  break;
              }
              hojas[i]=hoja(i+1,idPlanta,id,nombrePlanta,processName);
          }
          cambiarColor(nombrePlanta,processName);

          sleep(10);
      }

    }
    void cambiarColor(string processName,string nombreRama){
          int colorActual=INT_VERDE;
        while(true){
            ofstream file;
            string result=processName+"/"+nombreRama+"/"+"color";
            int n = result.length();
             char char_array[n + 1];
             strcpy(char_array, result.c_str());

            file.open(processName+"/"+nombreRama+"/"+"color");
            file << colorActual;
            file.close();
            colorActual=getRgbRama(colorActual);
            sleep(5);
        }
    }
    rama() {     // Constructor

    }
};

#include <unistd.h>
#include <sstream>
 #include <sys/prctl.h>
#include <QDebug>
#include "hoja.cpp";
hoja* hojas= new hoja[10];
class rama {     // The class
private:
    int id=0;
    int p;

  public:
    // Access specifier
    int getId(){
        return id;
    };
    int getP(){
        return p;
    };
    rama(int idRama,int numeroHojas,int idPlanta) {     // Constructor
      id=idRama;
      p=fork();

      if(p==0){


        std::ostringstream s;
         s<< "Rama"<<idPlanta<<"_"<<id;
            std:: string processName(s.str());
            int n = processName.length();
            char processNameChar[n + 1];
            strcpy(processNameChar, processName.c_str());
          prctl(PR_SET_NAME,processNameChar,NULL,NULL,NULL);
          for (int i=0;i<numeroHojas ;i++ ) {
              if(i>0&&hojas[i-1].getP()==0){
                  break;
              }
              hojas[i]=hoja(i+1,idPlanta,id);
          }
          cambiarColor();

          sleep(10);
      }

    }
    void cambiarColor(){

    }
    rama() {     // Constructor

    }
};

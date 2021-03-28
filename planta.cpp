#include <unistd.h>
#include <sstream>
 #include <sys/prctl.h>
#include <QDebug>
#include "rama.cpp"
rama* ramas= new rama[5];
class planta {     // The class
private:
    int id=0;
    int p;
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

          prctl(PR_SET_NAME,processNameChar,NULL,NULL,NULL);
          for (int i=0;i<numeroRamas ;i++ ) {
              if(i>0&&ramas[i-1].getP()==0){
                  break;
              }
              qDebug("\nCreando Rama%d\n",i);

              ramas[i]=rama(i+1,numeroHojas,id);
          }
          cambiarColor();

          sleep(10);
      }
    }
    void cambiarColor(){

    }
    planta() {     // Constructor

    }
};

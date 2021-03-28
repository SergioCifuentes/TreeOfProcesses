#include <unistd.h>
#include <sstream>
 #include <sys/prctl.h>
#include <QDebug>
class hoja {     // The class
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
    hoja(int idhoja,int idPlanta, int idRama) {     // Constructor
      id=idhoja;
      p=fork();

      if(p==0){


        std::ostringstream s;
         s<< "Hoja"<<idPlanta<<"_"<<idRama<<"_"<<id;
            std:: string processName(s.str());
            int n = processName.length();
            char processNameChar[n + 1];
            strcpy(processNameChar, processName.c_str());
          prctl(PR_SET_NAME,processNameChar,NULL,NULL,NULL);
          cambiarColor();

          sleep(10);
      }

    }
    void cambiarColor(){

    }
    hoja() {     // Constructor

    }
};

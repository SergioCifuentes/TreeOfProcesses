#include <unistd.h>
#include <sstream>
#include <fstream>
#include <iostream>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
using namespace std;

static void imprimirEstado(int id){

    ofstream file;
    std::ostringstream s;
    s<< "ImprimirPlanta"<<id;

    char input[50];
            sprintf(input,"pstree |grep Hoja%d",id);


    std::array<char, 128> buffer;
        std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(input, "r"), pclose);
        if (!pipe) {
            throw std::runtime_error("popen() failed!");
        }
        while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
            result += buffer.data();
        }




    file.open(s.str());
    file <<result ;
    file.close();
}

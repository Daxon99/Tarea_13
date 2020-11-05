#include "Computadora.h"

Computadora::Computadora(){}

Computadora::Computadora(const string &CPU,const string &Nombre_equipo,int RAM, int DD){

    this->CPU = CPU;
    this->Nombre_equipo = Nombre_equipo;
    this->RAM = RAM;
    this->DD = DD;

}

void Computadora::setCPU(const string &abc){
    CPU = abc;
}

string Computadora::getCPU(){
    return CPU;
}

void Computadora::setNombre_equipo(const string &abc){
    Nombre_equipo = abc;
}

string Computadora::getNombre_equipo(){
    return Nombre_equipo;
}

void Computadora::setRAM(int abc){
    RAM = abc;
}

int Computadora::getRAM(){
    return RAM;
}

void Computadora::setDD(int abc){
    DD = abc;
}

int Computadora::getDD(){
    return DD;
}

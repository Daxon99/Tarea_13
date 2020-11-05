#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iomanip>

#include <iostream>
using namespace std;

class Computadora
{
    string CPU;
    string Nombre_equipo;
    int RAM;
    int DD;

public:
    Computadora();
    Computadora(const string &CPU,
              const string &Nombre_equipo,
              int RAM,
              int DD);
    void setCPU(const string &abc);
    string getCPU();
    void setNombre_equipo(const string &abc);
    string getNombre_equipo();
    void setRAM(int abc);
    int getRAM();
    void setDD(int abc);
    int getDD();

    friend ostream& operator<<(ostream &out, const Computadora &abc){

        out << left;
        out << setw(15) << abc.CPU;
        out << setw(15) << abc.Nombre_equipo;
        out << setw(15) << abc.RAM;
        out << setw(15) << abc.DD;
        out << endl;

        return out;
    }

    friend istream& operator >>(istream &in, Computadora &abc){

        cout << "CPU: ";
        getline(cin, abc.CPU);

        cout << "Nombre Equipo: ";
        getline (cin, abc.Nombre_equipo);

        cout << "RAM: ";
        cin >> abc.RAM;

        cout << "Disco Duro: ";
        cin >> abc.DD;
        cout<<""<<endl;

        return in;
    }
    bool operator==(const Computadora& c)
    {
        return CPU == c.CPU;
    }
    bool operator==(const Computadora& c) const
    {
        return CPU == c.CPU;
    }
};

#endif

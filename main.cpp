#include <iostream>
#include "arreglo.h"
#include "Computadora.h"
using namespace std;

int main()
{
    Arreglo<Computadora> Computadoras;
    Computadora c01("intel","DavidL", 100,100);
    Computadora c02("amd","Jesus",100,100);
    Computadora c03("intel","michel",200,200);
    Computadora c05("intel", "Erick",300,300);
    Computadora c06("amd", "Ivan",100,100);
    Computadora c00("Snapdragon","Pepe",50,180);

    Computadoras << c01 << c02 << c03<< c02 << c06 << c05;
    Computadora *hgr = Computadoras.buscar(c01);
    if (hgr != nullptr)
    {
        cout << *hgr <<endl;
    }
    else
    {
        cout << "no existe"<<endl;
    }
    Computadora *ptr = Computadoras.buscar(c00);
    if (ptr != nullptr)
    {
        cout << *ptr <<endl;
    }
    else
    {
        cout << "no existe"<<endl;
    }
    Arreglo<Computadora*> ptrs = Computadoras.buscar_todos(c02);
    
    if (ptrs.size()> 0)
    {
        for (size_t i=0; i< ptrs.size();i++)
        {
            Computadora *p = ptrs[i];
            cout <<*p << endl;
        }
    }
    else {
        cout << "no existe"<<endl;
    }


    
        /*Arreglo <string> arreglo;
    arreglo.insertar_inicio("Buenos");
    arreglo.insertar_inicio("Hola");
    arreglo.insertar_final("Dias");
    arreglo.insertar_final("David");
    for (size_t i = 0; i<arreglo.size(); i++)
    {
        cout<<  (arreglo[i])<< " ";
    }
    cout<< endl;
    arreglo.insertar ("Felices",2);
    for (size_t i = 0; i<arreglo.size(); i++)
    {
        cout<<  (arreglo[i])<< " ";
    }
    cout<< endl;

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    for (size_t i = 0; i<arreglo.size(); i++)
    {
        cout<<  (arreglo[i])<< " ";
    }

    cout<< endl;

    string *s = arreglo.buscar("Hola");
    cout << s << " " << *s << endl;
    for (size_t i = 0; i<arreglo.size(); i++)
    {
        cout<<  (arreglo[i])<< " ";
    }
    cout<< endl;*/


    return 0;
}
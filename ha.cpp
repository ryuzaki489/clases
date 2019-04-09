#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Amigo{
    private: 

        string nombre , apellido;
        int edad;
    
    public:
        
        Amigo(string,string,int);
        void mostrar();
};

Amigo::Amigo(string _nombre, string _apellido, int _edad){
        
        nombre = _nombre;
        apellido = _apellido;
        edad = _edad;
}

void Amigo::mostrar(){

    cout << "nombre: " << nombre << endl;
    cout << "apellido: " << apellido << endl;
    cout << "edad: " << edad << endl;
}


int main(){
    
    string nombre1, apellido1;
    int edad1;

    cout << "nombre del alumno 1: " ;
    cin >> nombre1;

    cout << "apellido del alumno 2: " ;
    cin >> apellido1;

    cout << "ingrese la edad: ";
    cin >> edad1;

    Amigo a1(nombre1,apellido1,edad1);
    Amigo a2("jose","mamani",22);
    Amigo a3("luis","quispe",22);

    a1.mostrar();
    a2.mostrar();
    a3.mostrar();

    return 0;
}
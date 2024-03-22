#include <iostream>
using namespace std;
#include "Cliente.h"
Cliente::Cliente(int i, string n, string a){
    this->idCLiente=i;
    this->nombre=n;
    this->apellido=a;
}
int Cliente::getIdCLiente(){
    return this->idCLiente;
}
string Cliente::getNombre(){
    return this->nombre;
}
string Cliente::getApellido(){
    return this->apellido;
}

#include <iostream>
using namespace std;
#include "Fecha.h"
#include "Abono.h"
Abono::Abono(Fecha *f, float m){
    this->fecha=f;
    this->montoAbono=m;
}
Fecha *Abono::getFechaAbono(){
    return this->fecha;
}
float Abono::getMontoAbono(){
    return this->montoAbono;
}

#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include <string.h>
class Cliente{
    private:
        int idCLiente;
        string nombre;
        string apellido;
    public:
        Cliente(int,string,string);
        int getIdCLiente();
        string getNombre();
        string getApellido();
};


#endif // CLIENTE_H_INCLUDED

#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;
class Cliente {
private:
    string dni, nombre, telefono, direccion;

public:
    Cliente(string d, string n, string t, string dir);
    string getDNI() const;
    void mostrarDatos() const;
};

#endif

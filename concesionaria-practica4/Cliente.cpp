#include "Cliente.h"
#include <iostream>
using namespace std;
Cliente::Cliente(string d, string n, string t, string dir)
    : dni(d), nombre(n), telefono(t), direccion(dir) {}

string Cliente::getDNI() const {
    return dni;
}

void Cliente::mostrarDatos() const {
    cout << "DNI: " << dni << ", Nombre: " << nombre << ", Telefono: " << telefono
              << ", Direccion: " << direccion << endl;
}

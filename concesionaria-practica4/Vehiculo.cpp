#include "Vehiculo.h"
#include <iostream>

Vehiculo::Vehiculo(std::string cod, std::string mar, std::string mod, int an, double km, double pr)
    : codigo(cod), marca(mar), modelo(mod), anio(an), kilometraje(km), precio(pr) {}

std::string Vehiculo::getCodigo() const {
    return codigo;
}

void Vehiculo::mostrarDatos() const {
    std::cout << "Código: " << codigo << ", Marca: " << marca << ", Modelo: " << modelo
              << ", Ano: " << anio << ", Km: " << kilometraje << ", Precio: $" << precio << std::endl;
}

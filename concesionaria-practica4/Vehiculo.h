#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

class Vehiculo {
private:
    std::string codigo, marca, modelo;
    int anio;
    double kilometraje, precio;

public:
    Vehiculo(std::string cod, std::string mar, std::string mod, int an, double km, double pr);
    std::string getCodigo() const;
    void mostrarDatos() const;
};

#endif

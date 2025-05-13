#ifndef CONTROLADOR_VEHICULO_H
#define CONTROLADOR_VEHICULO_H

#include "Vehiculo.h"
#include <vector>
using namespace std;
class ControladorVehiculo {
private:
    vector<Vehiculo> vehiculos;

public:
    void registrarVehiculo(const Vehiculo& v);
    void listarVehiculos() const;
};

#endif

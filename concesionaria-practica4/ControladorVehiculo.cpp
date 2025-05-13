#include "ControladorVehiculo.h"

void ControladorVehiculo::registrarVehiculo(const Vehiculo& v) {
    vehiculos.push_back(v);
}

void ControladorVehiculo::listarVehiculos() const {
    for (const auto& v : vehiculos) {
        v.mostrarDatos();
    }
}

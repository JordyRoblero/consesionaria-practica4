#include "ControladorCliente.h"

void ControladorCliente::registrarCliente(const Cliente& c) {
    clientes.push_back(c);
}

void ControladorCliente::listarClientes() const {
    for (const auto& c : clientes) {
        c.mostrarDatos();
    }
}

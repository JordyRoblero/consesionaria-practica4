#ifndef CONTROLADOR_CLIENTE_H
#define CONTROLADOR_CLIENTE_H

#include "Cliente.h"
#include <vector>

class ControladorCliente {
private:
    vector<Cliente> clientes;

public:
    void registrarCliente(const Cliente& c);
    void listarClientes() const;
};

#endif

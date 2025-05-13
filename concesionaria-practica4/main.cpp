#include <iostream>
#include <limits>
#include "Vehiculo.h"
#include "Cliente.h"
#include "ControladorVehiculo.h"
#include "ControladorCliente.h"
using namespace std;
void mostrarMenu() {
    cout << "\n--- Menu Principal ---\n"
              << "1. Registrar Vehiculo\n"
              << "2. Registrar Cliente\n"
              << "3. Consultar Datos\n"
              << "4. Salir\n"
              << "Seleccione una opcion: ";
}

void limpiarEntrada() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    ControladorVehiculo cv;
    ControladorCliente cc;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        limpiarEntrada();

        if (opcion == 1) {
           string codigo, marca, modelo;
            int anio;
            double km, precio;

            cout << "Codigo: "; getline(cin, codigo);
            cout << "Marca: "; getline(cin, marca);
            cout << "Modelo: "; getline(cin, modelo);
            cout << "Ano: "; cin >> anio;
            cout << "Kilometraje: "; cin >> km;
            cout << "Precio: "; cin >> precio;
            limpiarEntrada();

            Vehiculo v(codigo, marca, modelo, anio, km, precio);
            cv.registrarVehiculo(v);
            cout << "Vehiculo registrado exitosamente.\n";

        } else if (opcion == 2) {
            string dni, nombre, telefono, direccion;

           cout << "DNI: "; getline(cin, dni);
            cout << "Nombre: "; getline(cin, nombre);
            cout << "Telefono: "; getline(cin, telefono);
            cout << "Direccion: "; getline(cin, direccion);

            Cliente c(dni, nombre, telefono, direccion);
            cc.registrarCliente(c);
           cout << "Cliente registrado exitosamente.\n";

        } else if (opcion == 3) {
            cout << "\n--- Vehículos Registrados ---\n";
            cv.listarVehiculos();
            cout << "\n--- Clientes Registrados ---\n";
            cc.listarClientes();
        }

    } while (opcion != 4);

    cout << "Saliendo del sistema...\n";
    return 0;
}

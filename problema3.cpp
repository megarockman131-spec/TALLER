/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    const int PIN_CORRECTO = 1234;
    double saldo = 1000.0;
    int pin, opcion, monto;

    cout << "=== Cajero Automático ===\n";

    // Primer intento
    cout << "Ingrese su PIN: ";
    cin >> pin;

    if (pin == PIN_CORRECTO) {
        // --- MENÚ ---
        cout << "\nAcceso concedido.\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar dinero\n";
        cout << "3. Salir\n";
        cout << "Elija una opción: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Su saldo es: $" << saldo << endl;
        } 
        else if (opcion == 2) {
            cout << "Ingrese el monto a retirar: ";
            cin >> monto;
            if (monto <= saldo) {
                saldo -= monto;
                cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
            } else {
                cout << "Fondos insuficientes.\n";
            }
        } 
        else if (opcion == 3) {
            cout << "Gracias por usar el cajero.\n";
        } 
        else {
            cout << "Opción inválida.\n";
        }
    } 
    else {
        // Segundo intento
        cout << "PIN incorrecto. Intente de nuevo: ";
        cin >> pin;

        if (pin == PIN_CORRECTO) {
            cout << "\nAcceso concedido.\n";
            cout << "1. Consultar saldo\n";
            cout << "2. Retirar dinero\n";
            cout << "3. Salir\n";
            cout << "Elija una opción: ";
            cin >> opcion;

            if (opcion == 1) {
                cout << "Su saldo es: $" << saldo << endl;
            } 
            else if (opcion == 2) {
                cout << "Ingrese el monto a retirar: ";
                cin >> monto;
                if (monto <= saldo) {
                    saldo -= monto;
                    cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
                } else {
                    cout << "Fondos insuficientes.\n";
                }
            } 
            else if (opcion == 3) {
                cout << "Gracias por usar el cajero.\n";
            } 
            else {
                cout << "Opción inválida.\n";
            }
        } 
        else {
            // Tercer intento
            cout << "PIN incorrecto. Último intento: ";
            cin >> pin;

            if (pin == PIN_CORRECTO) {
                cout << "\nAcceso concedido.\n";
                cout << "1. Consultar saldo\n";
                cout << "2. Retirar dinero\n";
                cout << "3. Salir\n";
                cout << "Elija una opción: ";
                cin >> opcion;

                if (opcion == 1) {
                    cout << "Su saldo es: $" << saldo << endl;
                } 
                else if (opcion == 2) {
                    cout << "Ingrese el monto a retirar: ";
                    cin >> monto;
                    if (monto <= saldo) {
                        saldo -= monto;
                        cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
                    } else {
                        cout << "Fondos insuficientes.\n";
                    }
                } 
                else if (opcion == 3) {
                    cout << "Gracias por usar el cajero.\n";
                } 
                else {
                    cout << "Opción inválida.\n";
                }
            } 
            else {
                cout << "\nDemasiados intentos fallidos. Tarjeta bloqueada.\n";
            }
        }
    }

    return 0;
}
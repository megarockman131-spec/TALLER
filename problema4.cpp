/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string tipoCliente;
    int cantidadProductos;
    double precioUnitario, subtotal = 0, descuento = 0, total = 0;

    cout << "Ingrese tipo de cliente (VIP o REGULAR): ";
    cin >> tipoCliente;

    cout << "Ingrese cantidad de productos: ";
    cin >> cantidadProductos;

    cout << "Ingrese el precio unitario del producto: ";
    cin >> precioUnitario;

    
    subtotal = cantidadProductos * precioUnitario;

    
    if (tipoCliente == "VIP" || tipoCliente == "vip") {
        descuento = subtotal * 0.20;  // VIP siempre 20%
    } 
    else if (tipoCliente == "REGULAR" || tipoCliente == "regular") {
        if (cantidadProductos >= 4) {
            descuento = subtotal * 0.10;  // Regular con 4+ productos 10%
        } 
        else {
            descuento = 0;  // Regular con menos de 4 -> sin descuento
        }
    }

    total = subtotal - descuento;

    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento: $" << descuento << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}
#include <iostream>
#include <iomanip>  // Para usar setw y setfill

using namespace std;

// Función para validar hora y minutos
bool esHoraValida(int hora, int minuto) {
    return (hora >= 0 && hora < 24) && (minuto >= 0 && minuto < 60);
}

int main() {
    int horaEntrada, minutoEntrada;
    int horaSalida, minutoSalida;

    cout << "=== Registro de Horario de Empleados ===\n";

    // Entrada
    cout << "\nIngrese la hora de ENTRADA (formato 24h):\n";
    cout << "Hora (0-23): ";
    cin >> horaEntrada;
    cout << "Minuto (0-59): ";
    cin >> minutoEntrada;

    // Validar entrada
    if (!esHoraValida(horaEntrada, minutoEntrada)) {
        cout << "¡Error! Hora de entrada inválida.\n";
        return 1; // Salir del programa con error
    }

    // Salida
    cout << "\nIngrese la hora de SALIDA (formato 24h):\n";
    cout << "Hora (0-23): ";
    cin >> horaSalida;
    cout << "Minuto (0-59): ";
    cin >> minutoSalida;

    // Validar salida
    if (!esHoraValida(horaSalida, minutoSalida)) {
        cout << "¡Error! Hora de salida inválida.\n";
        return 1;
    }

    // Mostrar datos ingresados correctamente
    cout << "\nRegistro exitoso.\n";
    cout << "Entrada: " << setfill('0') << setw(2) << horaEntrada << ":"
         << setfill('0') << setw(2) << minutoEntrada << endl;
    cout << "Salida: " << setfill('0') << setw(2) << horaSalida << ":"
         << setfill('0') << setw(2) << minutoSalida << endl;

    return 0;
}

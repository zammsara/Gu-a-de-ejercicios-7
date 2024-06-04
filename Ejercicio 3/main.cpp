/*Se dispone de un archivo indexado (DNI National Identity Document en
orden ascendente) denominado empleados.dat, que contiene los datos de un conjunto
de empleados y cuya clave es el número DNI. Desarrollar un programa capaz de
categorizar los salarios en "Altos", "Medios" y "Bajos" e imprimirlos a pantalla.
*/

#include <iostream>

using namespace std;

// Definir la estructura para almacenar la información de la persona
typedef struct DNI{
    string dni;
    string nombre;
    string apellido;
    char sexo;
    string cargo;
    double salario;
};

int main() {
    int cantReg;

    cout << "Ingrese la cantidad de personas a registrar: ";
    cin >> cantReg;

    DNI personas[cantReg];

    // Solicitar la información de cada persona
    for (int i = 0; i < cantReg; i++) {
        cout << "\nPersona " << i + 1 << ":" << endl;
        cout << "DNI: ";
        cin >> personas[i].dni;
        cout << "Nombre: ";
        cin >> personas[i].nombre;
        cout << "Apellido: ";
        cin >> personas[i].apellido;
        cout << "Sexo (M/F): ";
        cin >> personas[i].sexo;
        cout << "Cargo: ";
        cin >> personas[i].cargo;
        cout << "Salario: ";
        cin >> personas[i].salario;
    }

    // Categorizar los salarios como "altos", "medios" o "bajos"
    for (int i = 0; i < cantReg; i++) {
        if (personas[i].salario > 10000) {
            cout << personas[i].nombre << " tiene un salario alto." << endl;
        } else if (personas[i].salario >= 5000 && personas[i].salario <= 10000) {
            cout << personas[i].nombre << " tiene un salario medio." << endl;
        } else {
            cout << personas[i].nombre << " tiene un salario bajo." << endl;
        }
    }

    return 0;
}
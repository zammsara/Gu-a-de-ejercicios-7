/*El director de un colegio, desea un programa de computadora que procese
un archivo de registros denominado calificaciones.dat correspondiente a los diferentes
alumnos de una asignatura, con el fin de obtener la siguiente información:
#Carnet, Nombre, Apellidos, Nota final*/

#include <iostream>

using namespace std;

typedef struct ESTUDIANTE{
    string carnet;
    string nombre;
    string apellidos;
    double notaFinal;
};

int main() {
    int cantEstudiantes;

    cout << "Ingrese el numero de estudiantes a registrar: ";
    cin >> cantEstudiantes;

    ESTUDIANTE *estudiantes = new ESTUDIANTE[cantEstudiantes];

    // Ingresar los detalles de cada estudiante
    for (int i = 0; i < cantEstudiantes; i++) {
        cout << "\nEstudiante " << i + 1 << ":" << endl;
        cout << "Carnet: ";
        cin >> estudiantes[i].carnet;
        cout << "Nombre: ";
        cin >> estudiantes[i].nombre;
        cout << "Apellidos: ";
        cin >> estudiantes[i].apellidos;
        cout << "Nota final: ";
        cin >> estudiantes[i].notaFinal;
    }

    
    cout << "\nInformacion de los estudiantes:" << endl;
    for (int i = 0; i < cantEstudiantes; i++) {
        cout << "Estudiante " << i + 1 << ":" << endl;
        cout << "Carnet: " << estudiantes[i].carnet << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Apellidos: " << estudiantes[i].apellidos << endl;
        cout << "Nota final: " << estudiantes[i].notaFinal << endl;
        cout << endl;
    }

    delete[] estudiantes;

    return 0;
}

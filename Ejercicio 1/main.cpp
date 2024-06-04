/*Desarrollar un programa que permita crear un archivo agenda.dat de
direcciones, cuyos registros constan de los siguientes campos:
Nombre, Edad, Direccion, Ciudad, Telefono*/

#include <iostream>
#include <fstream>

using namespace std;


typedef struct AGENDA{
    string name;
    string age;
    string address;
    string city;
    string phone;
};

int main(int argc, char const *argv[])
{
    // Crear una instancia de la estructura Persona
    system("cls||clear");
    AGENDA persona;

    // Solicitar al usuario que ingrese los datos
    cout << "Ingrese el nombre: ";
    getline(cin, persona.name);

    cout << "Ingrese su edad: ";
    getline(cin, persona.age);

    cout << "Ingrese su direccion: ";
    getline(cin, persona.address);

    cout << "Ingrese su telefono: ";
    getline(cin, persona.phone);

    cout << "Ingrese su ciudad: ";
    getline(cin, persona.city);

    // Abrir el archivo en modo de escritura
    ofstream archivo("agendaDat.txt");

    if(archivo.is_open()) {
        // Escribir los datos en el archivo
        archivo << "Nombre: " << persona.name <<endl;
        archivo << "Edad: " << persona.age <<endl;
        archivo <<  "Direccion:  " << persona.address <<endl;
        archivo <<  "Ciudad:  " << persona.city <<endl;
        archivo <<  "Telefono:  " << persona.phone <<endl;

        // Cerrar el archivo
        archivo.close();

        cout << "Los datos se han guardado exitosamente en el archivo 'informacion.txt'." <<endl;
    } else {
        cerr << "Error al abrir el archivo." <<endl;
    }
}
/*Desarrollar un programa que permita ingresar y almacenar 5 registros de
información en el archivo agenda.dat, luego abrir el archivo e imprimir a pantalla todos
los registros. Nombre, Edad, Direccion, Ciudad, Telefono*/

#include<iostream>


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
    system("cls||clear");

    const int maxREG = 5;
    AGENDA registro[maxREG];

    for( int i = 0; i < maxREG; i++){ 
        cout << "Hola, completa los datos" <<endl;

        cout << "Ingresa el nombre de la persona " << i + 1 << ": ";
        cin >> registro[i].name;

        cout << "Ingresa la edad de la persona " << i + 1 << ": ";
        cin >> registro[i].age;

        cout << "Ingresa la direccion de la persona " << i + 1 << ": ";
        cin >> registro[i].address;

        cout << "Ingresa la ciudad donde vive de la persona " << i + 1 << ": ";
        cin >> registro[i].city;

        cout << "Ingresa el numero telefonico de la persona " << i + 1 << ": ";
        cin >> registro[i].phone;
    }cout <<"\nRegistros:\n";
    for(int i = 0; i < maxREG; i++){

         cout << "Persona " << i + 1 << ": " <<registro[i].name << " "<<registro[i].age << " "<<registro[i].address<< " "<<registro[i].city<< " "<<registro[i].phone<<endl;

} 
 return 0;
}
/*Se dispone de un archivo denominado stock.dat correspondiente a la
existencia de artículos de un almacén. Se desea señalar aquellos artículos cuyo nivel de
existencia está por debajo del mínimo y que visualicen un mensaje: "Alerta: Hacer
Pedido". Cada artículo contiene un registro con los siguientes campos:
Codigo, Nivel minimo, Nivel actual, proveedor, precio*/

#include <iostream>

using namespace std;

// Definir la estructura para almacenar la información de un articulo
typedef struct ARTICULO{
    string codigo;
    int nivelMin;
    int nivelAct;
    string proveedor;
    double precio;
};

int main() {
    int cantArticulos;

    cout << "Ingrese la cantidad de articulos a registrar: ";
    cin >> cantArticulos;

    ARTICULO *articulos = new ARTICULO[cantArticulos];

    // Ingresar los detalles de cada articulo
    for (int i = 0; i < cantArticulos; i++) {
        cout << "\nArticulo " << i + 1 << ":" << endl;
        cout << "Codigo: ";
        cin >> articulos[i].codigo;
        cout << "Nivel minimo: ";
        cin >> articulos[i].nivelMin;
        cout << "Nivel actual: ";
        cin >> articulos[i].nivelAct;
        cout << "Proveedor: ";
        cin >> articulos[i].proveedor;
        cout << "Precio: ";
        cin >> articulos[i].precio;
    }

    // Verificar y mostrar articulos con nivel de existencia por debajo del minimo
    cout << "\nAlerta: Hacer pedido" << endl;
    for (int i = 0; i < cantArticulos; i++) {
        if (articulos[i].nivelAct < articulos[i].nivelMin) {
            cout << articulos[i].codigo << " - " << articulos[i].proveedor << articulos[i].codigo <<" - Alerta" << endl;
        }
    }

    delete[] articulos;

    return 0;
}
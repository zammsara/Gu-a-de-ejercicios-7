/*Se dispone de un archivo indexado (DNI National Identity Document en
orden ascendente) denominado empleados.dat, que contiene los datos de un conjunto
de empleados y cuya clave es el número DNI. Desarrollar un programa capaz de
categorizar los salarios en "Altos", "Medios" y "Bajos" e imprimirlos a pantalla.
*/
#define MAXCHAR 100

typedef struct empleadosDAT{
    int dni[MAXCHAR];
    char nombre[MAXCHAR];
    char apellidos[MAXCHAR];
    char cargo[MAXCHAR];
    float salario[MAXCHAR];

};
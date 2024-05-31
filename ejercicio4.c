/*Se dispone de un archivo denominado stock.dat correspondiente a la
existencia de artículos de un almacén. Se desea señalar aquellos artículos cuyo nivel de
existencia está por debajo del mínimo y que visualicen un mensaje: "Alerta: Hacer
Pedido". Cada artículo contiene un registro con los siguientes campos:
Codigo, Nivel minimo, Nivel actual, proveedor, precio*/
#define MAXCHAR 100

typedef struct stockDAT{
    char code[MAXCHAR];
    char minimumLevel[MAXCHAR];
    char currentLevel[MAXCHAR];
    char povider[MAXCHAR];
    float price[MAXCHAR];
};
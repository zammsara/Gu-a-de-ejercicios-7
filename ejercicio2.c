/*: Desarrollar un programa que permita ingresar y almacenar 5 registros de
información en el archivo agenda.dat, luego abrir el archivo e imprimir a pantalla todos
los registros. Nombre, Edad, Direccion, Ciudad, Telefono*/
#define MAXREGISTRY 5
#define MAXCHAR 80

typedef struct agendaDAT{
    char name[MAXCHAR];
    char age[MAXCHAR];
    char address[MAXCHAR];
    char city[MAXCHAR];
    char phone[MAXCHAR];
};
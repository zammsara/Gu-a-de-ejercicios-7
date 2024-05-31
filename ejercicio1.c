/*Desarrollar un programa que permita crear un archivo agenda.dat de
direcciones, cuyos registros constan de los siguientes campos:
Nombre, Edad, Direccion, Ciudad, Teelefono*/
#define MAXCHAR 80

typedef struct agendaDAT{
    char name[MAXCHAR];
    char age[MAXCHAR];
    char address[MAXCHAR];
    char city[MAXCHAR];
    char phone[MAXCHAR];
};
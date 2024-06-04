/*El director de un colegio, desea un programa de computadora que procese
un archivo de registros denominado calificaciones.dat correspondiente a los diferentes
alumnos de una asignatura, con el fin de obtener la siguiente información:
#Carnet, Nombre, Apellidos, Nota final*/
#define MAXCHAR 100

typedef struct calificacionesDAT{
    char carnet[MAXCHAR];
    char name[MAXCHAR];
    char lastname[MAXCHAR];
    int finalGrade[MAXCHAR];
};
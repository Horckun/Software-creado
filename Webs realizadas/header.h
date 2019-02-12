// Webs realizadas

// Librerías
#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

// Prototipos
void insertarTecnologia();
void insertarWeb();
void modificarTecnologia();
void modificarWeb();
void consultarTecnologia();
void consultarWebs();
void consultarArchivo();
void vaciarTecnologia();
void vaciarWebs();

// Variables globales
int opcion, cantidad, i, j, lleno, aux;
char palabra[100], solicitud[100], buscar[100];

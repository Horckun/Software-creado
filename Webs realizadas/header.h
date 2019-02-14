// Gestión de archivos

// Librerías
#include <iostream>
#include <string.h>
#include <windows.h>
#include <fstream>
using namespace std;

// Prototipos
void crearArchivo();
void insertarContenido();
void modificarContenido();
void consultarArchivo();
void eliminarArchivo();

// Variables globales
int opcion, cantidad, i, j, lleno, aux;
char palabra[100], solicitud[100], buscar[100];

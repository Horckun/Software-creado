// Webs realizadas

// Librerías
#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

// Estructuras
struct webs {
	char nombre[100];
	int lleno;
};
struct tecnologia {
	char nombre[100];
	int lleno;
	struct webs web[4];
};

// Prototipos
void insertarTecnologia();
void vaciarTecnologia();
void vaciarWebs();

// Variables globales
int opcion, cantidad, i, j, lleno, aux;
char palabra[100];
tecnologia tech;

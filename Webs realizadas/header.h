// Webs realizadas

// Librerías
#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

// Estructuras
struct webs {
	char nombre[100];
};
struct tecnologia {
	char nombre[100];
	struct webs web;
};

// Prototipos
void insertarTecnologia();
void insertarWeb();
void vaciarTecnologia();
void vaciarWebs();

// Variables globales
int opcion, cantidad, i, j, lleno, aux;
char palabra[100];
tecnologia tech;

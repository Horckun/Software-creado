// Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Estructuras
typedef struct {
	char nombre[20];
	int lv;
	int hp;
	int mp;
	int atk;
	int matk;
	int exp;
}Heroe;

typedef struct {
	int hp;
	int mp;
	int atk;
	int matk;
}Enemigo;

// Prototipos
void introducirHeroe();
void verHeroe();
void cambio(char palabra[20]);
void reservarMemoria(int *numeroMalos);
void introducirEnemigo(int numeroMalos);
void lvHeroe(int *pegar);

// Variable de estructura
Heroe miHeroe;
Enemigo *miEnemigo;

// Sistema de batalla

// Includes
#include "header.h"

// Funcion principal
int main() {
	// Generar numero aleatorio
	srand(time(NULL));
	
	// Declarar variables
	int numeroMalos, opcion, i, ataque, pegar, rate, aumentar;
	
	// Asignar valores
	numeroMalos = 0;
	
	// Configuracion
	system("color 0B");
	SetConsoleTitle("Sistema de batalla");
	
	// Titulo
	printf("\t======================\n");
	printf("\t=                    =\n");
	printf("\t= Sistema de batalla =\n");
	printf("\t=                    =\n");
	printf("\t======================\n\n");	
	
	// Llamar a funciones
	introducirHeroe();
	reservarMemoria(&numeroMalos);
	
	// Bucle anidado
	do {
		do {
			// Opciones
			printf("\tElige una opci%cn:\n",162);
			printf("\t=================\n\n");
			printf("\t[1] - Atacar f%csicamente.\n",161);
			printf("\t[2] - Atacar con magia.\n\n");
			printf("\tOpci%cn: ",162);
			fflush(stdin);
			scanf("%i",&opcion);
			printf("\n");
		} while(opcion < 1 || opcion > 2);
		// Atacar
		printf("\t%cA qui%cn quieres atacar?\n",168,130);
		printf("\t========================\n\n");
		for(i = 0; i < numeroMalos; i++) {
			if(miEnemigo[i].hp > 0) {
				printf("\t[%i] - Enemigo %i (HP %i)\n",i+1,i+1,miEnemigo[i].hp);
			} else {
				if(numeroMalos == 0) {
					printf(" %c%c%cHAS GANADO!!!\n\n",173,173,173);
				}
			}
		}
		printf("\n");
		printf("\tOpci%cn: ",162);
		fflush(stdin);
		scanf("%i",&ataque);
		printf("\n");
		
		// Menu
		switch(opcion) {
			case 1: {
				pegar = (miHeroe.atk * (rand()%3));
				printf(" Le has quitado %i HP al enemigo %i.\n\n",pegar,ataque);
				miEnemigo[ataque-1].hp -= pegar;
				if(miEnemigo[ataque-1].hp <= 0) {
					printf(" El enemigo %i ha muerto, %cenhorabuena!.\n\n",ataque,173);
				}
				lvHeroe(&pegar);
				break;
			}
			case 2: {
				pegar = (miHeroe.matk * (rand()%3));
				miHeroe.mp -= 20;
				printf(" Le has quitado %i HP al enemigo %i.\n\n",pegar,ataque);
				if(miHeroe.mp <= 0) {
					printf(" No te queda MP.\n");
				}
				miEnemigo[ataque-1].hp -= pegar;
				if(miEnemigo[ataque-1].hp <= 0) {
					printf(" El enemigo %i ha muerto, %cenhorabuena!.\n\n",ataque,173);
				}
				lvHeroe(&pegar);
				break;
			}
		}
		// Pausa
		Sleep(3000);
		
		// Borrar pantalla
		system("cls");
		
		// Turno enemigos
		printf("\tTurno de los enemigos:\n");
		printf("\t======================\n\n");
		for(i = 0; i < numeroMalos; i++) {
			if(miEnemigo[i].hp > 0) {
				rate = rand()%2;
				if(rate == 0) {
					printf(" El enemigo %i atacar%c f%csicamente.\n",i+1,160,161);
					pegar = (miEnemigo[i].atk * (rand()%3)); 
					if(miHeroe.hp <= 0) {
						printf(" Lo siento, has muerto.\n\n");
						exit(1);
					} else {
						printf(" El enemigo %i te ha quitado %i HP.\n\n",i+1,pegar);
						miHeroe.hp -= pegar;
						if((miHeroe.hp - 20) < 980) {
							miHeroe.hp += 20;
							printf(" Has recuperado 20 HP.\n\n");
						}
						if((miHeroe.mp - 20) < 980) {
							miHeroe.mp += 20;
							printf(" Has recuperado 20 MP.\n\n");
						}
					}
				} else {
					if(rate == 1) {
						printf(" El enemigo %i atacar%c con magia.\n\n",i+1,160);
						pegar = (miEnemigo[i].matk * (rand()%3));
						miEnemigo[i].matk -= 20;
						if(miHeroe.hp <= 0) {
							printf(" Lo siento, has muerto.\n\n");
							exit(1);
						} else {
							printf(" El enemigo %i te ha quitado %i HP.\n\n",i+1,pegar);
							miHeroe.hp -= pegar;
							if((miHeroe.hp - 20) < 980) {
								miHeroe.hp += 20;
								printf(" Has recuperado 20 HP.\n\n");
							}
							if((miHeroe.mp - 20) < 980) {
								miHeroe.mp += 20;
								printf(" Has recuperado 20 MP.\n\n");
							}
						}
					}
				}
			}
		}
		aumentar = rand()%2;
		if(aumentar == 0) {
			miEnemigo = (Enemigo*)realloc(miEnemigo,(numeroMalos+1)*sizeof(Enemigo));
			if(miEnemigo == NULL) {
				printf(" No se ha podido asignar espacio en memoria.\n");
				exit(1);
			}
			introducirEnemigo(numeroMalos);
			numeroMalos++;
		}
		verHeroe();
	} while(miHeroe.hp > 0);
	
	// Cierre
	printf(" Pulsa Intro para terminar...");
	fflush(stdin);
	getch();
	return 0;
}

// Funciones secundarias
void introducirHeroe() {
	// Asignar valores
	miHeroe.atk = 100;
	miHeroe.exp = 0;
	miHeroe.hp = 1000;
	miHeroe.lv = 1;
	miHeroe.matk = 100;
	miHeroe.mp = 1000;
	
	// Solicitar nombre
	printf("\tIntroduce el nombre del h%croe: ",130);
	fgets(miHeroe.nombre,20,stdin);
	cambio(miHeroe.nombre);
	printf("\n");
	
	// Visualizar heroe
	printf("\t%s:\n",miHeroe.nombre);
	printf("\t\t- Atk: %d\n",miHeroe.atk);
	printf("\t\t- Exp: %d\n",miHeroe.exp);
	printf("\t\t- HP: %d\n",miHeroe.hp);
	printf("\t\t- Lv: %d\n",miHeroe.lv);
	printf("\t\t- M.Atk: %d\n",miHeroe.matk);
	printf("\t\t- MP: %d\n\n",miHeroe.mp);
}
void verHeroe() {
	// Visualizar heroe
	printf("\t%s:\n",miHeroe.nombre);
	printf("\t\t- Exp: %d\n",miHeroe.exp);
	printf("\t\t- HP: %d\n",miHeroe.hp);
	printf("\t\t- Lv: %d\n",miHeroe.lv);
	printf("\t\t- MP: %d\n\n",miHeroe.mp);
}
void cambio(char palabra[20]) {
	int i;
	
	for(i = 0; i < 20; i++) {
		if(palabra[i] == '\n') {
			palabra[i] = '\0';
		}
	}
}
void reservarMemoria(int *numeroMalos) {
	miEnemigo = (Enemigo*)malloc((*numeroMalos+1)*sizeof(miEnemigo));
	if(miEnemigo == NULL) {
		printf(" No se ha podido asignar un tama%co a la memoria.\n\n",164);
		exit(1);
	}
	introducirEnemigo(*numeroMalos);
	(*numeroMalos)++;
}
void introducirEnemigo(int numeroMalos) {
	miEnemigo[numeroMalos].atk = 80;
	miEnemigo[numeroMalos].hp = 800;
	miEnemigo[numeroMalos].matk = 80;
	miEnemigo[numeroMalos].mp = 800;
}
void lvHeroe(int *pegar) {
	if(miHeroe.lv == 1) {
		// Comprobar exp
		if(*pegar > 0) {
			miHeroe.exp += 20;
			printf(" Has adquirido 20 puntos de experiencia, tienes %i/100 EXP.\n\n",miHeroe.exp);
		}
		// Comprobar heroe
		if(miHeroe.exp == 100) {
			miHeroe.hp = 1000;
			miHeroe.mp = 1000;
			miHeroe.atk *= 1.5;
			miHeroe.hp *= 1.5;
			miHeroe.lv += 1;
			miHeroe.matk *= 1.5;
			miHeroe.mp *= 1.5;
			miHeroe.exp = 0;
			
			// Visualizar heroe
			printf("\t%s:\n",miHeroe.nombre);
			printf("\t\t- Exp: %d\n",miHeroe.exp);
			printf("\t\t- HP: %d\n",miHeroe.hp);
			printf("\t\t- Lv: %d\n",miHeroe.lv);
			printf("\t\t- MP: %d\n\n",miHeroe.mp);
		}
	}
	if(miHeroe.lv == 2) {
		// Comprobar exp
		if(*pegar > 0) {
			miHeroe.exp += 20;
			printf(" Has adquirido 20 puntos de experiencia, tienes %i/100 EXP.\n\n",miHeroe.exp);
		}
		// Comprobar heroe
		if(miHeroe.exp == 100) {
			miHeroe.hp = 1200;
			miHeroe.mp = 1200;
			miHeroe.atk *= 1.5;
			miHeroe.hp *= 1.5;
			miHeroe.lv += 1;
			miHeroe.matk *= 1.5;
			miHeroe.mp *= 1.5;
			miHeroe.exp = 0;
			
			// Visualizar heroe
			printf("\t%s:\n",miHeroe.nombre);
			printf("\t\t- Exp: %d\n",miHeroe.exp);
			printf("\t\t- HP: %d\n",miHeroe.hp);
			printf("\t\t- Lv: %d\n",miHeroe.lv);
			printf("\t\t- MP: %d\n\n",miHeroe.mp);
		}
	}
	if(miHeroe.lv == 3) {
		// Comprobar exp
		if(*pegar > 0) {
			miHeroe.exp += 20;
			printf(" Has adquirido 20 puntos de experiencia, tienes %i/100 EXP.\n\n",miHeroe.exp);
		}
		// Comprobar heroe
		if(miHeroe.exp == 100) {
			miHeroe.hp = 1500;
			miHeroe.mp = 1500;
			miHeroe.atk *= 1.5;
			miHeroe.hp *= 1.5;
			miHeroe.lv += 1;
			miHeroe.matk *= 1.5;
			miHeroe.mp *= 1.5;
			miHeroe.exp = 0;
			
			// Visualizar heroe
			printf("\t%s:\n",miHeroe.nombre);
			printf("\t\t- Exp: %d\n",miHeroe.exp);
			printf("\t\t- HP: %d\n",miHeroe.hp);
			printf("\t\t- Lv: %d\n",miHeroe.lv);
			printf("\t\t- MP: %d\n\n",miHeroe.mp);
		}
	}
	if(miHeroe.lv == 4) {
		// Comprobar exp
		if(*pegar > 0) {
			miHeroe.exp += 20;
			printf(" Has adquirido 20 puntos de experiencia, tienes %i/100 EXP.\n\n",miHeroe.exp);
		}
		// Comprobar heroe
		if(miHeroe.exp == 100) {
			miHeroe.hp = 1800;
			miHeroe.mp = 1800;
			miHeroe.atk *= 1.5;
			miHeroe.hp *= 1.5;
			miHeroe.lv += 1;
			miHeroe.matk *= 1.5;
			miHeroe.mp *= 1.5;
			miHeroe.exp = 0;
			
			// Visualizar heroe
			printf("\t%s:\n",miHeroe.nombre);
			printf("\t\t- Exp: %d\n",miHeroe.exp);
			printf("\t\t- HP: %d\n",miHeroe.hp);
			printf("\t\t- Lv: %d\n",miHeroe.lv);
			printf("\t\t- MP: %d\n\n",miHeroe.mp);
		}
	}
	if(miHeroe.lv == 5) {
		// Comprobar exp
		if(*pegar > 0) {
			miHeroe.exp += 20;
			printf(" Has adquirido 20 puntos de experiencia, tienes %i/100 EXP.\n\n",miHeroe.exp);
		}
		// Comprobar heroe
		if(miHeroe.exp == 100) {
			miHeroe.hp = 2000;
			miHeroe.mp = 2000;
			miHeroe.atk *= 1.5;
			miHeroe.hp *= 1.5;
			miHeroe.lv += 1;
			miHeroe.matk *= 1.5;
			miHeroe.mp *= 1.5;
			miHeroe.exp = 0;
			
			// Visualizar heroe
			printf("\t%s:\n",miHeroe.nombre);
			printf("\t\t- Exp: %d\n",miHeroe.exp);
			printf("\t\t- HP: %d\n",miHeroe.hp);
			printf("\t\t- Lv: %d\n",miHeroe.lv);
			printf("\t\t- MP: %d\n\n",miHeroe.mp);
		}
	}
	if(miHeroe.lv == 6) {
		// Comprobar exp
		if(*pegar > 0) {
			miHeroe.exp += 20;
			printf(" Has adquirido 20 puntos de experiencia, tienes %i/100 EXP.\n\n",miHeroe.exp);
		}
		// Comprobar heroe
		if(miHeroe.exp == 100) {
			miHeroe.hp = 2500;
			miHeroe.mp = 2500;
			miHeroe.atk *= 1.5;
			miHeroe.hp *= 1.5;
			miHeroe.lv += 1;
			miHeroe.matk *= 1.5;
			miHeroe.mp *= 1.5;
			miHeroe.exp = 0;
			
			// Visualizar heroe
			printf("\t%s:\n",miHeroe.nombre);
			printf("\t\t- Exp: %d\n",miHeroe.exp);
			printf("\t\t- HP: %d\n",miHeroe.hp);
			printf("\t\t- Lv: %d\n",miHeroe.lv);
			printf("\t\t- MP: %d\n\n",miHeroe.mp);
		}
	}
	if(miHeroe.lv == 7) {
		// Comprobar exp
		if(*pegar > 0) {
			miHeroe.exp += 20;
			printf(" Has adquirido 20 puntos de experiencia, tienes %i/100 EXP.\n\n",miHeroe.exp);
		}
		// Comprobar heroe
		if(miHeroe.exp == 100) {
			miHeroe.hp = 2800;
			miHeroe.mp = 2800;
			miHeroe.atk *= 1.5;
			miHeroe.hp *= 1.5;
			miHeroe.lv += 1;
			miHeroe.matk *= 1.5;
			miHeroe.mp *= 1.5;
			miHeroe.exp = 0;
			
			// Visualizar heroe
			printf("\t%s:\n",miHeroe.nombre);
			printf("\t\t- Exp: %d\n",miHeroe.exp);
			printf("\t\t- HP: %d\n",miHeroe.hp);
			printf("\t\t- Lv: %d\n",miHeroe.lv);
			printf("\t\t- MP: %d\n\n",miHeroe.mp);
		}
	}
	if(miHeroe.lv == 8) {
		// Comprobar exp
		if(*pegar > 0) {
			miHeroe.exp += 20;
			printf(" Has adquirido 20 puntos de experiencia, tienes %i/100 EXP.\n\n",miHeroe.exp);
		}
		// Comprobar heroe
		if(miHeroe.exp == 100) {
			miHeroe.hp = 3000;
			miHeroe.mp = 3000;
			miHeroe.atk *= 1.5;
			miHeroe.hp *= 1.5;
			miHeroe.lv += 1;
			miHeroe.matk *= 1.5;
			miHeroe.mp *= 1.5;
			miHeroe.exp = 0;
			
			// Visualizar heroe
			printf("\t%s:\n",miHeroe.nombre);
			printf("\t\t- Exp: %d\n",miHeroe.exp);
			printf("\t\t- HP: %d\n",miHeroe.hp);
			printf("\t\t- Lv: %d\n",miHeroe.lv);
			printf("\t\t- MP: %d\n\n",miHeroe.mp);
		}
	}
}

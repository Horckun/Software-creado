// Includes
#include "header.h"

// Funcion principal
int main() {
	// Titulo
	SetConsoleTitle("BLUE WOLF: Tu leyenda personal");
	
	do {
		// Borrar pantalla
		system("cls");
		
		// Color
		system("color 0B");
		
		// Titulo
		cout << "\t##################################" << endl;
		cout << "\t#                                #" << endl;
		cout << "\t# BLUE WOLF: Tu leyenda personal #" << endl;
		cout << "\t#                                #" << endl;
		cout << "\t##################################" << endl << endl;
		
		// Opcion
		cout << "\t[1] - Continuar partida." << endl;
		cout << "\t[2] - Nueva partida." << endl << endl;
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
		
		// Menu
		switch(opcion) {
			case 1: {
				continuarPartida();
				break;
			}
			case 2: {
				nuevaPartida();
				break;
			}
		}
	} while(opcion < 1 || opcion > 2);
	
	// Creditos
	cout << " Cr" << char(130) << "ditos: Horckun." << endl << endl;
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	fflush(stdin);
	cin.get();
	return 0;
}

// Funciones secundarias
void continuarPartida() {	
	cargar.open("savegame.dat");
	if(!cargar) {
		cout << " No se ha podido cargar la partida." << endl << endl;
		Sleep(3000);
		opcion = 3;
	} else {
		cout << " Archivo cargado correctamente." << endl << endl;
		Sleep(1000);
		
		// Comprobar contenido
		cargar >> partida;
		if(partida == 1) {
			nubes();
		}
		if(partida == 2) {
			mismaDireccion();
		}
		if(partida == 3) {
			pasarNocheDesierto();
		}
		if(partida == 4) {
			dunas();
		}
		if(partida == 5) {
			oasis();
		}
		if(partida == 6) {
			cuartel();
		}
		if(partida == 7) {
			algunaCasa();
		}
		if(partida == 8) {
			fuente();
		}
		if(partida == 9) {
			dejarOasis();
		}
		if(partida == 10) {
			otrasDunas();
		}
		if(partida == 11) {
			volverDuna();
		}
		if(partida == 12) {
			irSenal();
		}
		if(partida == 13) {
			ayudarComerciantes();
		}
		if(partida == 14) {
			aceptarTrato();
		}
		if(partida == 15) {
			volverCasa();
		}
		if(partida == 16) {
			volverOasis();
		}
		if(partida == 17) {
			rechazarTrato();
		}
		if(partida == 18) {
			aceptarTratoBarco();
		}
		if(partida == 19) {
			sol();
		}
		if(partida == 20) {
			sinRumbo();
		}
		if(partida == 21) {
			seguirle();
		}
		if(partida == 22) {
			brisa();
		}
		if(partida == 23) {
			esperarNoche();
		}
		if(partida == 24) {
			fijarEstrella();
		}
		if(partida == 25) {
			luna();
		}
		if(partida == 26) {
			entrarTiendaCapana();
		}
		if(partida == 27) {
			sombras();
		}
		if(partida == 28) {
			seguirCaminando();
		}
		if(partida == 29) {
			seguirTrabajando();
		}
		if(partida == 30) {
			terminarTrabajoQuedarse();
		}
		if(partida == 31) {
			finalFatal();
		}
		if(partida == 32) {
			rechazarTratoBarco();
		}
		if(partida == 33) {
			seguirTrabajandoBarco();
		}
		if(partida == 34) {
			seguirTiendaCapana();
		}
		if(partida == 35) {
			bordearOasis();
		}
		if(partida == 36) {
			noEntrarTiendaCapana();
		}
		if(partida == 37) {
			finalViaje();
		}
		if(partida == 38) {
			finalViaje();
		}
		if(partida == 39) {
			seguirBordeando();
		}
		if(partida == 40) {
			seguirPuerto();
		}
	}
	
	// Cerrar archivo
	cargar.close();
}
void nuevaPartida() {
	// Borrar pantalla
	system("cls");
	
	// Titulo
	cout << "\t##################################" << endl;
	cout << "\t#                                #" << endl;
	cout << "\t# BLUE WOLF: Tu leyenda personal #" << endl;
	cout << "\t#                                #" << endl;
	cout << "\t##################################" << endl << endl;
		
	// Color
	system("color 0F");
	
	// Intro
	cout << " Son las 10 de la noche, est" << char(160) << "s viendo una serie, pero te quedas reflexionando sobre las decisiones que est" << char(160) << "n tomando los personajes de esa serie." << endl << endl;
	cout << " Piensas en qu" << char(130) << " habr" << char(161) << "as hecho t" << char(163) << " de diferente..." << endl << endl;
	
	// Puasa
	system("pause");
	cout << endl;
	
	cout << " Es hora de irse a la cama... Mientras te acuestas, vas pensando en c" << char(162) << "mo hubiese seguido la serie si los personajes hubiesen tomado las decisiones que t" << char(163) << " hubieses elegido..." << endl << endl;
	cout << " Finalmente, te duermes..." << endl << endl;
	
	// Opciones
	do {
		cout << " Una sensaci" << char(162) << "n de mucho calor invade tu cuerpo, te despiertas y te encuentras en medio de un desierto. Miras a todos lados y solo hay nubes, sol, dunas, arena y una ligera brisa." << endl << endl;
		cout << "\t[1] - Te fijas en una nube y sigues su direcci" << char(162) << "n." << endl;
		cout << "\t[2] - Sigues la direcci" << char(162) << "n del sol." << endl;
		cout << "\t[3] - Te dirijes hacia una de las dunas." << endl;
		cout << "\t[4] - Caminas sin rumbo alguno." << endl;
		cout << "\t[5] - Sigues la direcci" << char(162) << "n de la brisa." << endl;
		cout << "\t[6] - Esperas a la noche." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				nubes();
				break;
			}
			case 2: {
				sol();
				break;
			}
			case 3: {
				dunas();
				break;
			}
			case 4: {
				sinRumbo();
				break;
			}
			case 5: {
				brisa();
				break;
			}
			case 6: {
				esperarNoche();
				break;
			}
			default: {
				opcion = 7;
				break;
			}
		}
	} while(opcion < 1 || opcion > 6);
}
void nubes() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 1 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Siguiendo nubes
	cout << " Debido a la brisa que hay, las nubes se mueven en una direcci" << char(162) << "n y t" << char(163) << " decides seguir la direcci" << char(162) << "n." << endl << endl;
	cout << " Tras seis horas caminando, ya notas el cansancio, pero sigues caminando con la esperanza de encontrar algo diferente a la arena... sin " << char(130) << "xito alguno..." << endl << endl;
	cout << " Llevas dos horas m" << char(160) << "s caminando direcci" << char(162) << "n hacia las nubes y la brisa est" << char(160) << " empezando a cambiar de direcci" << char(162) << "n. Observas como las nubes tambi" << char(130) << "n lo hacen." << endl << endl;
	
	// Opciones
	do {
		cout << " Te quedas pensando qu" << char(130) << " hacer, si seguir la direcci" << char(162) << "n de las nubes y la brisa o seguir la misma direcci" << char(162) << "n en la que estabas..." << endl << endl;
		cout << "\t[1] - Sigues caminando hacia la misma direcci" << char(162) << "n." << endl;
		cout << "\t[2] - Cambias a la direcci" << char(162) << "n de la brisa y nubes." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				mismaDireccion();
				break;
			}
			case 2: {
				brisa();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 2);
	
	// Cerrar archivo
	guardar.close();
}
void mismaDireccion() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 2 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Continuar caminando
	cout << " Sigues caminando en la misma direcci" << char(162) << "n y ves c" << char(162) << "mo empieza a anochecer, pero sigues caminando." << endl << endl;
	cout << " Tras una hora caminando observas que est" << char(160) << " todo muy oscuro y lo " << char(163) << "nico que se ve es la arena, la luna y las estrellas." << endl << endl;
	
	// Opciones
	do {
		cout << " Te quedas mirando el horizonte..." << endl << endl;
		cout << "\t[1] - Decides acostarte y pasar ah" << char(161) << " la noche." << endl;
		cout << "\t[2] - Te fijas en una estrella para seguir al d" << char(161) << "a siguiente su direcci" << char(162) << "n." << endl;
		cout << "\t[3] - Sigues la direcci" << char(162) << "n de la luna." << endl;
		cout << "\t[4] - Sigues caminando hacia la misma direcci" << char(162) << "n." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				pasarNocheDesierto();
				break;
			}
			case 2: {
				fijarEstrella();
				break;
			}
			case 3: {
				luna();
				break;
			}
			case 4: {
				mismaDireccion();
				break;
			}
			default: {
				opcion = 5;
				break;
			}
		}
	} while(opcion < 1 || opcion > 4);
	
	// Cerrar archivo
	guardar.close();
}
void pasarNocheDesierto() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 3 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Nuevo dia
	cout << " Es un nuevo d" << char(161) << "a, sigue haciendo calor, sigue habiendo arena y ya te est" << char(160) << "s cansando del desierto." << endl << endl;
	
	// Opciones
	do {
		cout << " Observas al horizonte, mirando a la izquierda, unas dunas grandes, y a la derecha, a lo lejos, una tienda de campa" << char(164) << "a." << endl << endl;
		cout << "\t[1] - Ir hacia las dunas." << endl;
		cout << "\t[2] - Ir a la tienda de campa" << char(164) << "a." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				dunas();
				break;
			}
			case 2: {
				entrarTiendaCapana();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 2);
	
	// Cerrar archivo
	guardar.close();
}
void dunas() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 4 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Dunas
	cout << " Est" << char(160) << "s en las dunas, y, aunque ha costado llegar a la cima de la duna, la has alcanzado." << endl << endl;
	cout << " Te quedas observando detenidamente el horizonte y ves a un lado un oasis, a otro lado m" << char(160) << "s dunas, y a otro lado unas sombras borrosas." << endl << endl;
	
	// Opciones
	do {
		cout << " Bajas de la duna y te pones en marcha." << endl << endl;
		cout << "\t[1] - Ir hacia el oasis." << endl;
		cout << "\t[2] - Ir a las otras dunas." << endl;
		cout << "\t[3] - Acercarte a las sombras." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				oasis();
				break;
			}
			case 2: {
				otrasDunas();
				break;
			}
			case 3: {
				sombras();
				break;
			}
			default: {
				opcion = 4;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void oasis() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 5 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Oasis
	cout << " Est" << char(160) << " anocheciendo y acabas de entrar al oasis." << endl << endl;
	cout << " Est" << char(160) << " todo oscuro y no ves a nadie, ni guardias, ni habitantes, ni animales..." << endl << endl;
	cout << " Todo lo que hay en el oasis son ruinas, no hay ning" << char(163) << "n rastro de vida." << endl << endl;
	
	// Opciones
	do {
		cout << " Ves un cuartel, casas y una fuente." << endl << endl;
		cout << "\t[1] - Ir al cuartel." << endl;
		cout << "\t[2] - Ir a una de las casas." << endl;
		cout << "\t[3] - Acercarte a la fuente." << endl;
		cout << "\t[4] - Irte del oasis." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				cuartel();
				break;
			}
			case 2: {
				algunaCasa();
				break;
			}
			case 3: {
				fuente();
				break;
			}
			case 4: {
				dejarOasis();
				break;
			}
			default: {
				opcion = 5;
				break;
			}
		}
	} while(opcion < 1 || opcion > 4);
	
	// Cerrar archivo
	guardar.close();
}
void cuartel() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 6 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Cuartel
	cout << " Encuentras algo de comida y bebida, te pones a comer y beber. Luego, pasas ah" << char(161) << " la noche." << endl << endl;
	cout << " En cuanto te despiertas, decides inspeccionar el cuartel en busca de algo que pueda servirte, y encuentras un atuendo que te vendr" << char(161) << "a muy bien para el desierto." << endl << endl;
	cout << " Te vistes con ese nuevo atuendo, inspeccionas m" << char(160) << "s cosas del cuartel pero no encuentras nada m" << char(160) << "s que pueda servirte." << endl << endl;
	
	// Opciones
	do {
		cout << " Sales del cuartel." << endl << endl;
		cout << "\t[1] - Ir a alguna casa." << endl;
		cout << "\t[2] - Ir a la fuente." << endl;
		cout << "\t[3] - Irte del oasis." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				algunaCasa();
				break;
			}
			case 2: {
				fuente();
				break;
			}
			case 3: {
				dejarOasis();
				break;
			}
			default: {
				opcion = 4;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void algunaCasa() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 7 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Alguna casa
	cout << " Te encuentras dentro de una casa, y despu" << char(130) << "s de pasar unos minutos ah" << char(161) << " encuentras una mochila, y metes dentro comida que has encontrado y cosas de plata y oro." << endl << endl;
	cout << " Tienes la mochila llena de cosas, y a pesar de que pese, no quieres deshacerte de ning" << char(163) << "n objeto." << endl << endl;
	
	// Opciones
	do {
		cout << " Es hora de ponerse en marcha." << endl << endl;
		cout << "\t[1] - Ir a la fuente." << endl;
		cout << "\t[2] - Irte del oasis." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				fuente();
				break;
			}
			case 2: {
				dejarOasis();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 2);
	
	// Cerrar archivo
	guardar.close();
}
void fuente() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 8 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Fuente
	cout << " Te acercas a la fuente, te asomas para ver el agua y encuentras monedas de oro." << endl << endl;
	cout << " Miras a tu alrededor y sigues sin ver a nadie m" << char(160) << "s, y tampoco oyes nada." << endl << endl;
	
	// Opciones
	do {
		cout << " Te vas a ir del oasis." << endl << endl;
		cout << "\t[1] - Irte con las monedas de la fuente." << endl;
		cout << "\t[2] - Irte sin las monedas de la fuente." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				robo++;
				dejarOasis();
				break;
			}
			case 2: {
				dejarOasis();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 2);
	
	// Cerrar archivo
	guardar.close();
}
void dejarOasis() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 9 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Dejar el oasis
	cout << " Ya has salido del oasis, y vuelves a la mon" << char(162) << "tona arena del desierto." << endl << endl;
	
	// Opciones
	do {
		cout << " Sigues viendo las otras dunas." << endl << endl;
		cout << "\t[1] - Ir a las dunas." << endl;
		cout << "\t[2] - Seguir andando sin rumbo alguno." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				otrasDunas();
				break;
			}
			case 2: {
				sinRumbo();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 2);
	
	// Cerrar archivo
	guardar.close();
}
void otrasDunas() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 10 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Otras dunas
	cout << " Vas camino hacia las otras dunas pensando en las sombras, en qu" << char(130) << " ser" << char(160) << " todo eso y en qu" << char(130) << " haces en pleno desierto." << endl << endl;
	cout << " Te encuentras frente a las dunas, las subes, y, cuando llegas a la cima, un fuerte viento te empuja duna abajo por la otra cara de la duna." << endl << endl;
	
	// Opciones
	do {
		cout << " Te quedas pensando..." << endl << endl;
		cout << "\t[1] - Volver a subir." << endl;
		cout << "\t[2] - Tomarlo como una se" << char(164) << "al y seguir por donde el viento te ha dejado." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				volverDuna();
				break;
			}
			case 2: {
				irSenal();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 2);
	
	// Cerrar archivo
	guardar.close();
}
void volverDuna() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 11 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Volver a las dunas
	cout << " Te vuelves a encontrar frente a las dunas, las subes, y, cuando llegas a la cima, un fuerte viento te vuelve a empujar duna abajo por la misma cara de la duna que antes." << endl << endl;
	
	// Opciones
	do {
		cout << " Te quedas pensando..." << endl << endl;
		cout << "\t[1] - Volver a subir." << endl;
		cout << "\t[2] - Tomarlo como una se" << char(164) << "al y seguir por donde el viento te ha dejado." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				volverDuna();
				break;
			}
			case 2: {
				irSenal();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 2);
	
	// Cerrar archivo
	guardar.close();
}
void irSenal() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 12 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Ir a la señal
	cout << " Sigues caminando, y despu" << char(130) << "s de unas horas, decides irte a dormir." << endl << endl;
	cout << " De buena ma" << char(164) << "ana, abres la mochila y sacas algo para desayunar, una vez que te lo terminas, sigues caminando en esa misma direcci" << char(162) << "n." << endl << endl;
	cout << " Comienzas a ver algo, pero a" << char(163) << "n no sabes qu" << char(130) << " es..." << endl << endl;
	cout << " Llegas a las puertas de una aldea, y justo en la entrada, hay varios comerciantes con sus tiendas abiertas." << endl << endl;
	
	// Opciones
	do {
		cout << " Te quedas observando..." << endl << endl;
		cout << "\t[1] - Mirar cada tienda de comerciante e intentar ofrecerles tu ayuda." << endl;
		cout << "\t[2] - Seguir tu camino." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				ayudarComerciantes();
				break;
			}
			case 2: {
				seguirCaminando();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 2);
	
	// Cerrar archivo
	guardar.close();
}
void ayudarComerciantes() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 13 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Ayudar a comerciantes
	cout << " Observas a cada comerciante, y ves que en uno de los puestos, el comerciante tiene sus productos bastante sucios." << endl << endl;
	cout << " Te paras a hablar con " << char(130) << "l, y lleg" << char(160) << "is a un acuerdo de que si limpiando sus productos consigue m" << char(160) <<"s ventas, podr" << char(160) << "s quedarte trabajando ah" << char(161) <<"." << endl << endl;
	
	// Opciones
	do {
		cout << " Te quedas mirando al comerciante..." << endl << endl;
		cout << "\t[1] - Aceptas el trato." << endl;
		cout << "\t[2] - Rechazas el trato." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				aceptarTrato();
				break;
			}
			case 2: {
				rechazarTrato();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 2);
	
	// Cerrar archivo
	guardar.close();
}
void aceptarTrato() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 14 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Aceptar trato
	cout << " Llegas a un acuerdo con el comerciante, de que si ayud" << char(160) << "ndole, consigue " << char(130) << "l m" << char(160) << "s ventas, te podr" << char(161) << "as quedar una temporada trabajando." << endl << endl;
	cout << " Has pasado ya un a" << char(164) << "o trabajando, y tienes algo de dinero ahorrado, el suficiente como para volver a casa." << endl << endl;
	
	// Opciones
	do {
		cout << " Te quedas mirando tus ahorros..." << endl << endl;
		cout << "\t[1] - Te vuelves a casa." << endl;
		cout << "\t[2] - Sigues trabajando un tiempo m" << char(160) << "s." << endl;
		cout << "\t[3] - Terminas de trabajar con el comerciante y te quedas un tiempo en esa aldea." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				volverCasa();
				break;
			}
			case 2: {
				seguirTrabajando();
				break;
			}
			case 3: {
				terminarTrabajoQuedarse();
				break;
			}
			default: {
				opcion = 4;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void volverCasa() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 15 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Volver a casa
	cout << " Ya est" << char(160) << "s de vuelta en casa, es de noche y te acuestas." << endl << endl;
	cout << " Te despiertas ya por la ma" << char(164) << "ana temprano, y te percatas de que el tiempo no ha pasado ah" << char(161) << ", es como si no hubiese pasado, incluso llevas el mismo pijama con el que te acostaste antes de emprender el viaje." << endl << endl;
	cout << " Te preparas para salir a dar una vuelta, as" << char(161) << " que te arreglas, y cuando sales a la calle, te das cuenta de una cosa..." << endl << endl;
	
	// Opciones
	if(robo == 1) {
		cout << " Al salir, has visto todo en ruinas, con guerrilleros por todas partes. Todo es distinto, no hay libertad, ni paz, que es lo que ped" << char(161) << "a la gente que echaba monedas a la fuente pidiendo deseos y sue" << char(164) << "os cumplidos." << endl << endl;
		cout << " En tu mente tienes todas las experiencias y conocimientos que has adquirido en todo tu viaje." << endl << endl;
		do {
			cout << "[1] - Volver al oasis para intentar reestablecer todo." << endl;
			cout << "[2] - Dejar las cosas como est" << char(160) << "n." << endl << endl;
		
			cout << " Opci" << char(162) << "n: ";
			fflush(stdin);
			cin >> opcion;
			cout << endl;
		
			// Menu
			switch(opcion) {
				case 1: {
					volverOasis();
					break;
				}
				case 2: {
					finalFatal();
					break;
				}
				default: {
					opcion = 3;
					break;
				}
			}
		} while(opcion < 1 || opcion > 2);
	} else {
		if(robo == 0) {
			cout << " Al salir, ves que todo sigue igual que antes de empezar el viaje, excepto que tienes un concepto de la vida y much" << char(161) << "simas experiencias que has vivido all" << char(161) << "." << endl << endl;
			cout << " Pasado unos d" << char(161) << "as, te das cuenta de que todo lo est" << char(160) << "s viendo con distinta perspectiva, y que toda la abundancia en tu vida que est" << char(160) << "s imaginando, la est" << char(160) <<"s obteniendo poco a poco." << endl << endl;
		}
	}
	
	// Cerrar archivo
	guardar.close();
}
void volverOasis() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 16 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Volver al oasis
	cout << " Acabas de llegar al oasis, entre el viaje y el alquiler del camello para llegar al oasis, te has gastado todo tu dinero." << endl << endl;
	cout << " Vuelves a la fuente, depositas las monedas, y te vuelves a la aldea." << endl << endl;
	cout << " Al entrar en la aldea, te encuentras al comerciante justo donde trabajabas. Te comenta lo mucho que se alegra de verte, y te ofrece que te encargues t" << char(163) << " de la tienda, mientras " << char(130) <<"l se queda disfrutando de la familia." << endl << endl;
	
	// Asignar valores
	robo = 0;
	
	// Opciones
	do {
		cout << " Te quedas mirando tus bolsillos..." << endl << endl;
		cout << "\t[1] - Aceptas el trato." << endl;
		cout << "\t[2] - Rechazas el trato." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				aceptarTrato();
				break;
			}
			case 2: {
				rechazarTrato();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void rechazarTrato() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 17 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Rechazar trato
	cout << " Rechazas el trato, y sigues caminando. Llegas a un puerto en donde encuentras varios barcos, gente paseando, m" << char(160) << "s comercios." << endl << endl;
	
	// Asignar valores
	ayuda = 1;
	
	// Opciones
	do {
		cout << " Uno de los tripulantes de los barcos, te pide ayuda, para pescar en red en el nav" << char(161) << "o. A cambio, " << char(130) << "l te ofrece comida y alojamiento." << endl << endl;
		cout << "\t[1] - Aceptas el trato." << endl;
		cout << "\t[2] - Rechazas el trato." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				aceptarTratoBarco();
				break;
			}
			case 2: {
				rechazarTratoBarco();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void aceptarTratoBarco() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 18 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Aceptar trato
	cout << " Aceptas el trato, y te subes al barco. Te llevan a tu camarote peque" << char(164) << "o y te dan instrucciones para la hora a la que tienes que levantarte cada d" << char(161) << "a a partir de ahora y qu" << char(130) << " has de hacer." << endl << endl;
	cout << " Has pasado ya un a" << char(164) << "o trabajando en el barco, y tienes algo de dinero ahorrado, el suficiente como para volver a casa." << endl << endl;
	
	// Asignar valores
	ayuda = 1;
	
	// Opciones
	do {
		cout << " Uno de los tripulantes de los barco, te hace preguntas acerca de tu hogar. Hablando con " << char(130) << "l, te pregunta si deseas volver a casa." << endl << endl;
		cout << "\t[1] - Volver a casa." << endl;
		cout << "\t[2] - Seguir trabajando ah" << char(161) << "." << endl << endl;
	
		cout <<  "Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				volverCasa();
				break;
			}
			case 2: {
				seguirTrabajandoBarco();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void sol() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 19 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Direccion sol
	cout << " Llevas varias horas caminando cara al sol, est" << char(160) << "s sudando mucho. Mientras sigues caminando vas mirando de lado a lado en busca de algo m" << char(160) << "s que arena." << endl << endl;
	
	// Opciones
	do {
		cout << " El sol ha ca" << char(161) << "do." << endl << endl;
		cout << "\t[1] - Acostarse ah" << char(161) << " en medio." << endl;
		cout << "\t[2] - Seguir caminando en esa direcci" << char(162) << "n." << endl << endl;
	
		cout <<  "Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				pasarNocheDesierto();
				break;
			}
			case 2: {
				seguirCaminando();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void sinRumbo() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 20 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Sin Rumbo
	cout << " Llevas varias horas caminando sin rumbo alguno, est" << char(160) << "s notando el cansancio." << endl << endl;
	cout << " Sientes que te pierdes, que te agotas, que no tienes ganas ya de nada, no ves ninguna salida. Est" << char(160) << " anocheciendo y te acuestas." << endl << endl;
	
	// Opciones
	do {
		cout << " Te levantas y ves un hombre subido a caballo. No te dice nada, y se marcha lentamente." << endl << endl;
		cout << "\t[1] - Le sigues." << endl;
		cout << "\t[2] - No le sigues." << endl << endl;
	
		cout <<  "Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				seguirle();
				break;
			}
			case 2: {
				seguirCaminando();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void seguirle() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 21 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Seguirle
	cout << " Te quedas detr" << char(160) << "s del hombre sigui" << char(130) << "ndole." << endl << endl;
	cout << " Llev" << char(160) << "is un par de horas caminando sin decir nada ninguno de los dos, pero empiezas a ver, a lo lejos, una tienda de campa" << char(164) << "a. El hombre se para y te hace una se" << char(164) << "a para que entres." << endl << endl;
	cout << " Nada m" << char(160) << "s entrar, ves un lobo, pero esa imagen solo la ves unos segundos. De repente, ves a un anciano, te coge de las manos, y te muestra una visi" << char(162) << "n." << endl << endl;
	cout << " Esa visi" << char(162) << "n, es de ti con todos tus deseos cumplidos. Muestra una abundancia absoluta, en el amor, en el dinero, en tus relaciones, en tus proyectos, y ayudando a los dem" << char(160) << "s." << endl << endl;
	cout << " Al terminar, te dice que todo esto es posible solo si tu quieres, pero hay un precio, ese precio es la persistencia, paciencia y control de tus propios pensamientos." << endl << endl;
	
	// Opciones
	do {
		cout << " Te pregunta si deseas volver a casa." << endl << endl;
		cout << "\t[1] - Volver a casa." << endl;
		cout << "\t[2] - Seguir ah" << char(161) << "." << endl << endl;
	
		cout <<  "Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				volverCasa();
				break;
			}
			case 2: {
				seguirTiendaCapana();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void brisa() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 22 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Seguir brisa
	cout << " Llevas varias horas caminando siguiendo la brisa, est" << char(160) << "s notando el cansancio, pero a lo lejos, ves un oasis." << endl << endl;
	
	// Opciones
	do {
		cout << " Te paras a la entrada del oasis y ves que est" << char(160) << " todo en ruinas." << endl << endl;
		cout << "\t[1] - Entras al oasis." << endl;
		cout << "\t[2] - Lo bordeas." << endl << endl;
	
		cout <<  "Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				oasis();
				break;
			}
			case 2: {
				bordearOasis();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void esperarNoche() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 23 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Esperar noche
	cout << " Llevas varias descansando mientras esperas a que anochezca. Ves el cielo estrellado y decides seguir una de las estrellas, la que m" << char(160) << "s brilla." << endl << endl;
	cout << " Tras seis horas andando, ves que ya est" << char(160) << " amaneciendo, y, a lo lejos, ves un oasis." << endl << endl;
	
	// Opciones
	do {
		cout << " Te paras a la entrada del oasis y ves que est" << char(160) << " todo en ruinas." << endl << endl;
		cout << "\t[1] - Entras al oasis." << endl;
		cout << "\t[2] - Lo bordeas." << endl << endl;
	
		cout <<  "Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				oasis();
				break;
			}
			case 2: {
				bordearOasis();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void fijarEstrella() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 24 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Fijarse en estrella
	cout << " Te quedas observando la estrella m" << char(160) << "s grande y que m" << char(160) << "s brilla, para que al d" << char(161) << "a siguiente, puedas ir en esa direcci" << char(162) << "n." << endl << endl;
	cout << " Una vez ha amanecido, te pones en marcha de nuevo en la direcci" << char(162) << "n donde estaba la estrella." << endl << endl;
	cout << " Tras seis horas andando, ves un oasis." << endl << endl;
	
	// Opciones
	do {
		cout << " Te paras a la entrada del oasis y ves que est" << char(160) << " todo en ruinas." << endl << endl;
		cout << "\t[1] - Entras al oasis." << endl;
		cout << "\t[2] - Lo bordeas." << endl << endl;
	
		cout <<  "Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				oasis();
				break;
			}
			case 2: {
				bordearOasis();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void luna() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 25 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Seguir la luna
	cout << " Llevas varias horas caminando por el horizonte, est" << char(160) << "s notando el cansancio." << endl << endl;
	cout << " A lo lejos, ves una sombra en forma de caseta, te acercas y ves que es una tienda de campa" << char(164) << "a." << endl << endl;
	
	// Opciones
	do {
		cout << " Bordeas la tienda de campa" << char(164) << "a observ" << char(160) << "ndola." << endl << endl;
		cout << "\t[1] - Entras." << endl;
		cout << "\t[2] - Pasas de largo." << endl << endl;
	
		cout <<  "Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				entrarTiendaCapana();
				break;
			}
			case 2: {
				noEntrarTiendaCapana();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void entrarTiendaCapana() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 26 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Entrar en tienda de campaña
	cout << " Entras a la tienda de campa" << char(164) << "a y ves en el suelo unos cojines, y en una mesa, comida y agua." << endl << endl;
	cout << " Tras unas horas de descanso, te pones otra vez en marcha." << endl << endl;
	
	// Pausa
	system("pause");
	cout << endl;
	
	// Llamar funcion
	noEntrarTiendaCapana();
	
	// Cerrar archivo
	guardar.close();
}
void sombras() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 27 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Sombras
	cout << " Te acercas a las sombras, y ves que son muchos hombres montados a caballo. Uno de ellos, te pregunta por un hombre y su caba" << char(164) << "a, le dices que no lo has visto y te dice que se le busca por brujer" << char(161) << "a." << endl << endl;
	cout << " Le cuentas todo lo que te ha ido ocurriendo, pero ves que sus caras no muestran asombro y se marchan dej" << char(160) << "ndote ah" << char(161) << "." << endl << endl;
	
	// Pausa
	system("pause");
	cout << endl;
	
	// Llamar funcion
	sinRumbo();
	
	// Cerrar archivo
	guardar.close();
}
void seguirCaminando() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 28 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Seguir caminando
	cout << " Sigues caminando y llegas a un puerto en donde encuentras varios barcos, gente paseando, m" << char(160) << "s comercios." << endl << endl;
	
	// Opciones
	do {
		cout << " Uno de los tripulantes de los barcos, te pide ayuda, para pescar en red en el nav" << char(161) << "o. A cambio, " << char(130) << "l te ofrece comida y alojamiento." << endl << endl;
		cout << "\t[1] - Aceptas el trato." << endl;
		cout << "\t[2] - Rechazas el trato." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				aceptarTratoBarco();
				break;
			}
			case 2: {
				rechazarTratoBarco();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void seguirTrabajando() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 29 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Seguir trabajando
	cout << " Sigues trabajando a pesar que tienes ya el suficiente dinero como para volver a casa." << endl << endl;
	cout << " Pasado un a" << char(164) << "o m" << char(160) << "s, reunes el dinero suficiente como para viajar por todo el mundo sin preocupaciones." << endl << endl;
	
	// Pausa
	system("pause");
	cout << endl;
	
	// Llamar a funcion
	finalViaje();
	
	// Cerrar archivo
	guardar.close();
}
void terminarTrabajoQuedarse() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 30 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Terminar trabajo y seguir en la aldea
	cout << " Te despides del comerciante y sigues caminando por esa aldea hasta que llegas a un puerto en donde encuentras varios barcos, gente paseando, m" << char(160) << "s comercios." << endl << endl;
	
	// Opciones
	do {
		cout << " Uno de los tripulantes de los barcos, te pide ayuda, para pescar en red en el nav" << char(161) << "o. A cambio, " << char(130) << "l te ofrece comida y alojamiento." << endl << endl;
		cout << "\t[1] - Aceptas el trato." << endl;
		cout << "\t[2] - Rechazas el trato." << endl << endl;
	
		cout << " Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				aceptarTratoBarco();
				break;
			}
			case 2: {
				rechazarTratoBarco();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void finalFatal() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 31 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Final fatal
	cout << " Al dejarlo todo como est" << char(160) << ", no ves que puedas hacer mucho m" << char(160) << "s por tu ciudad, te vuelves a casa y te echas en la cama." << endl << endl;
	cout << " Cuando te despiertas, ves que ha vuelto todo a su sitio, excepto la percepci" << char(162) << "n que tiene la gente sobre ti. La gente se muestra muy fr" << char(161) << "a y dura contigo, ves que nada de lo que haces te sale bien, y acabas teniendo un sabor agridulce en tu interior." << endl << endl;
	cout << " Solo t" << char(163) << " puedes hacer que las cosas sucedan..." << endl << endl;
	
	// Cerrar archivo
	guardar.close();
}
void rechazarTratoBarco() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 32 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Rechazar trato del barco
	cout << " Rechazas el trato, y sigues caminando. Llegas a un hostal en donde encuentras varios hombre, hablas con uno de ellos y te dice que es comerciante ambulante, y que tiene pensado ir fuera de la aldea en breve." << endl << endl;
	cout << " Llegais a un acuerdo de que puedes ir con " << char(130) << "l a cambio de ayudarle." << endl << endl;
	cout << " Te invita a tomar algo para celebrar que trabajar" << char(130) << "is juntos, pero te ech" << char(162) << " algo en la bebida, te desmayaste y te encuentras de nuevo en medio del desierto." << endl << endl;
	
	// Pausa
	system("pause");
	cout << endl;
	
	// Llamar funcion
	sinRumbo();
	
	// Cerrar archivo
	guardar.close();
}
void seguirTrabajandoBarco() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 33 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Seguir trabajando en barco
	cout << " Llevas ya un a" << char(164) << "o trabajando en el barco, y decides terminar ya ah" << char(161) << "." << endl << endl;
	
	// Opciones
	do {
		cout << " Te dan a elegir si te llevan a casa o al puerto." << endl << endl;
		cout << "\t[1] - Volver a casa." << endl;
		cout << "\t[2] - Volver al puerto." << endl << endl;
	
		cout <<  "Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				volverCasa();
				break;
			}
			case 2: {
				volverPuerto();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void seguirTiendaCapana() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 34 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Seguir tienda de campaña
	cout << " Te dice que debes irte pronto, porque este no es tu sitio, tu sitio est" << char(160) << " all" << char(160) << " donde est" << char(130) << " tu pasi" << char(162) << "n." << endl << endl;
	cout << " Debes coger aquello que amas, hacerlo tuyo, y no soltarlo nunca, pase lo que pase, incluso a pesar de lo que te pueda decir la gente." << endl << endl;
	
	// Pause
	system("pause");
	cout << endl;
	
	// Llamar función
	noEntrarTiendaCapana();
	
	// Cerrar archivo
	guardar.close();
}
void bordearOasis() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 35 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Bordear oasis
	cout << " Mientras vas bordeando el oasis, vas notando una presencia, pero no ves nada ni a nadie." << endl << endl;
	
	// Opciones
	do {
		cout << " Das media vuelta y entras al oasis o sigues bordeando." << endl << endl;
		cout << "\t[1] - Entras al oasis." << endl;
		cout << "\t[2] - Sigues bordeando." << endl << endl;
	
		cout <<  "Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				oasis();
				break;
			}
			case 2: {
				seguirBordeando();
				break;
			}
			default: {
				opcion = 3;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void noEntrarTiendaCapana() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 36 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// No entrar tienda de campaña
	cout << " Acabas de dejar a lo lejos la tienda de campa" << char(164) << "a." << endl << endl;
	cout << " Tras varias horas andando, alcanzas a ver un puerto." << endl << endl;
	
	// Puase
	system("pause");
	cout << endl;
	
	// Llamar función
	seguirCaminando();
	
	// Cerrar archivo
	guardar.close();
}
void finalViaje() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 37 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Final viaje
	cout << " Has ido por todo el mundo, viendo diferentes culturas, pa" << char(161) << "ses y has conocido a much" << char(161) << "simos tipos de personas." << endl << endl;
	cout << " Has crecido tanto como persona que no echas nada de menos de tu anterior vida, antes de emprender el viaje, salvo a las personas. Has descubierto un mundo interior en el que lo material no vale nada, sino, lo " << char(163) << "nico que cuenta es las experiencias vividas en ese mundo interior." << endl << endl;
	
	// Pausa
	system("pause");
	cout << endl;
	
	// Cerrar archivo
	guardar.close();
}
void volverPuerto() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 38 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Volver al puerto
	cout << " La tripulaci" << char(162) << "n y t" << char(164) << " acabais de llegar al puerto y desciendes del barco hasta llegar al paseo." << endl << endl;
	
	// Opciones
	do {
		cout << " Mientras estiras las piernas, vas pensando en tu siguiente paso, si ir a casa, ir hacia el paseo de los comerciantes o sigues por el puerto." << endl << endl;
		cout << "\t[1] - Volver a casa." << endl;
		cout << "\t[2] - Ir hacia los comerciantes." << endl;
		cout << "\t[3] - Seguir en el puerto." << endl << endl;
	
		cout <<  "Opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Menu
		switch(opcion) {
			case 1: {
				volverCasa();
				break;
			}
			case 2: {
				ayudarComerciantes();
				break;
			}
			case 3: {
				seguirPuerto();
				break;
			}
			default: {
				opcion = 4;
				break;
			}
		}
	} while(opcion < 1 || opcion > 3);
	
	// Cerrar archivo
	guardar.close();
}
void seguirBordeando() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 39 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Seguir bordeando oasis
	cout << " Mientras vas bordeando el oasis, sigues notando la presencia." << endl << endl;
	
	// Pausa
	system("pause");
	cout << endl;
	
	// Llamar a función
	sombras();
	
	// Cerrar archivo
	guardar.close();
}
void seguirPuerto() {
	// Cerrar archivo
	guardar.close();
	
	// Eliminar partida
	remove("savegame.dat");
	
	// Guardar partida
	guardar.open("savegame.dat");
	guardar << 40 << endl;
	
	// Comprobar
	if(!guardar) {
		cout << " Error al guardar la partida." << endl << endl;
		Sleep(3000);
	} else {
		cout << " Partida guardada autom" << char(160) << "ticamente..." << endl << endl;
		Sleep(3000);
	}
	
	// Borrar pantalla
	system("cls");
		
	// Color
	system("color 0F");
	
	// Seguir en el puerto
	cout << " Sigues caminando y llegas a un hostal en donde encuentras varios hombre, hablas con uno de ellos y te dice que es comerciante ambulante, y que tiene pensado ir fuera de la aldea en breve." << endl << endl;
	cout << " Llegais a un acuerdo de que puedes ir con " << char(130) << "l a cambio de ayudarle." << endl << endl;
	cout << " Te invita a tomar algo para celebrar que trabajar" << char(130) << "is juntos, pero te ech" << char(162) << " algo en la bebida, te desmayaste y te encuentras de nuevo en medio del desierto." << endl << endl;
	
	// Pausa
	system("pause");
	cout << endl;
	
	// Llamar funcion
	sinRumbo();
	
	// Cerrar archivo
	guardar.close();
}

// Includes
#include "header.h"
#include "crearArchivo.cpp"
#include "insertarContenido.cpp"
#include "modificarContenido.cpp"
#include "consultarArchivo.cpp"
#include "eliminarArchivo.cpp"

// Funci�n principal
int main() {
	// T�tulo
	SetConsoleTitle("Gestion de archivos");
	cout << "\t#######################" << endl;
	cout << "\t#                     #" << endl;
	cout << "\t# GESTI" << char(224) << "N DE ARCHIVOS #" << endl;
	cout << "\t#                     #" << endl;
	cout << "\t#######################" << endl << endl;
	
	do {
		do {
			// Personalizaci�n
			system("color 0A");
			
			// Men� principal
			cout << "\t*******************************" << endl;
			cout << "\t*                             *" << endl;
			cout << "\t* MEN" << char(233) << " PRINCIPAL              *" << endl;
			cout << "\t*                             *" << endl;
			cout << "\t*******************************" << endl;
			cout << "\t*                             *" << endl;
			cout << "\t* [1] - Crear archivo.        *" << endl;
			cout << "\t* [2] - Insertar contenido.   *" << endl;
			cout << "\t* [3] - Modificar contenido.  *" << endl;
			cout << "\t* [4] - Consultar archivo.    *" << endl;
			cout << "\t* [5] - Eliminar archivo.     *" << endl;
			cout << "\t*                             *" << endl;
			cout << "\t*******************************" << endl << endl;
		
			// Solicitar opci�n
			cout << "\tElige una opci" << char(162) << "n: ";
			fflush(stdin);
			cin >> opcion;
			cout << endl;
			
			// Men�
			switch(opcion) {
				case 1: {
					// Limpiar pantalla
					system("cls");
					
					// Llama a funci�n
					crearArchivo();
					break;
				}
				case 2: {
					// Limpiar pantalla
					system("cls");
					
					// Llama a funci�n
					insertarContenido();
					break;
				}
				case 3: {
					// Limpiar pantalla
					system("cls");
					
					// Llama a funci�n
					modificarContenido();
					break;
				}
				case 4: {
					// Limpiar pantalla
					system("cls");
					
					// Llama a funci�n
					consultarArchivo();
					break;
				}
				case 5: {
					// Limpiar pantalla
					system("cls");
					
					// Llama a funci�n
					eliminarArchivo();
					break;
				}
				default: {
					cout << "No has elegido ninguna opci" << char(162) << "n correcta." << endl << endl;
					system("pause");
					return 0;
					break;
				}
			}
	
			// Limpiar pantalla
			system("cls");
		} while(opcion < 1 || opcion > 5);
		
		// Continuar
		cout << "\t-------------------------------" << endl;
		cout << "\t|                             |" << endl;
		cout << "\t| " << char(168) << "DESEAS CONTINUAR?          |" << endl;
		cout << "\t|                             |" << endl;
		cout << "\t-------------------------------" << endl;
		cout << "\t|                             |" << endl;
		cout << "\t| [1] - Continuar             |" << endl;
		cout << "\t| [2] - Salir                 |" << endl;
		cout << "\t|                             |" << endl;
		cout << "\t-------------------------------" << endl << endl;
		
		// Solicitar opci�n
		cout << "\tElige una opci" << char(162) << "n: ";
		fflush(stdin);
		cin >> opcion;
		cout << endl;
	
		// Limpiar pantalla
		system("cls");
	} while(opcion == 1);
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}

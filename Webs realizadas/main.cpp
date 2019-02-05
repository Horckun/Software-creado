// Includes
#include "header.h"
#include "insertarTecnologia.cpp"
#include "vaciarTecnologia.cpp"
#include "vaciarWebs.cpp"

// Funci�n principal
int main() {
	// T�tulo
	cout << "\t===================" << endl;
	cout << "\t=                 =" << endl;
	cout << "\t= WEBS REALIZADAS =" << endl;
	cout << "\t=                 =" << endl;
	cout << "\t===================" << endl << endl;
	
	do {
		do {
			// Personalizaci�n
			system("color 0A");
			// Men� principal
			cout << "\t-------------------------------" << endl;
			cout << "\t|                             |" << endl;
			cout << "\t| MEN" << char(233) << " PRINCIPAL              |" << endl;
			cout << "\t|                             |" << endl;
			cout << "\t-------------------------------" << endl;
			cout << "\t|                             |" << endl;
			cout << "\t| [1] - Insertar tecnolog" << char(161) <<"a   |" << endl;
			cout << "\t| [2] - Insertar p" << char(160) <<"gina web   |" << endl;
			cout << "\t| [3] - Modificar tecnolog" << char(161) <<"a  |" << endl;
			cout << "\t| [4] - Modificar p" << char(160) <<"gina web  |" << endl;
			cout << "\t| [5] - Consultar tecnolog" << char(161) <<"a  |" << endl;
			cout << "\t| [6] - Consultar p" << char(160) <<"gina web  |" << endl;
			cout << "\t| [7] - Eliminar tecnolog" << char(161) <<"a   |" << endl;
			cout << "\t| [8] - Eliminar p" << char(160) <<"gina web   |" << endl;
			cout << "\t| [9] - Vaciar tecnolog" << char(161) <<"a     |" << endl;
			cout << "\t| [10] - Vaciar p" << char(160) <<"gina web    |" << endl;
			cout << "\t|                             |" << endl;
			cout << "\t-------------------------------" << endl << endl;
		
			// Solicitar opci�n
			cout << "\tElige una opci" << char(162) << "n: ";
			cin >> opcion;
			cout << endl;
			
			switch(opcion) {
				case 1: {
					// Limpiar pantalla
					system("cls");
					
					// Llama a funci�n
					insertarTecnologia();
					
					break;
				}
				case 9: {
					// Limpiar pantalla
					system("cls");
					
					// Llama a funci�n
					vaciarTecnologia();
					
					// Duerme
					Sleep(1000);
					
					break;
				}
				case 10: {
					// Limpiar pantalla
					system("cls");
					
					// Llama a funci�n
					vaciarWebs();
					
					// Duerme
					Sleep(1000);
					
					break;
				}
				default: {
					cout << "No has elegido ninguna opci" << char(162) << "n correcta." << endl << endl;
					Sleep(1000);
					break;
				}
			}
		
			// Borrar buffer
			cin.ignore();
	
			// Limpiar pantalla
			system("cls");
		} while(opcion < 1 || opcion > 10);
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
		cin >> opcion;
		cout << endl;
		
		// Borrar buffer
		cin.ignore();
	
		// Limpiar pantalla
		system("cls");
	} while(opcion == 1);
	
	// Cierre
	cout << "Pulsa Intro para terminar...";
	cin.get();
	return 0;
}
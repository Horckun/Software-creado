void vaciarTecnologia() {
	// Personalización
	system("color 0B");
	
	// Título
	cout << "\t=======================" << endl;
	cout << "\t=                     =" << endl;
	cout << "\t= VACIAR TECNOLOG" << char(214) << "A   =" << endl;
	cout << "\t=                     =" << endl;
	cout << "\t=======================" << endl << endl;
	
	do {
		// Borrar
		cout << "\t-----------------------------------" << endl;
		cout << "\t|                                 |" << endl;
		cout << "\t| " << char(168) << "DESEAS VACIAR LAS TECNOLOG" << char(214) << "AS? |" << endl;
		cout << "\t|                                 |" << endl;
		cout << "\t-----------------------------------" << endl;
		cout << "\t|                                 |" << endl;
		cout << "\t| [1] - Vaciar                    |" << endl;
		cout << "\t| [2] - Salir                     |" << endl;
		cout << "\t|                                 |" << endl;
		cout << "\t-----------------------------------" << endl << endl;
		
		// Asignar valor
		cantidad = 3;
		
		// Solicitar opción
		cout << "\tElige una opci" << char(162) << "n: ";
		cin >> opcion;
		cout << endl;
	
		// Declarar variable para manejar el archivo
		ofstream archivo;
		
		// Abrir archivo
		archivo.open("Nombres de tecnologias.dat");
		
		// Menú
		switch(opcion) {
			case 1: {
				for(i = 0; i < cantidad; i++) {
					cout << "Vaciando " << i + 1 << " de " << cantidad << " tecnolog" << char(161) << "as...\r";
					Sleep(1000);
					archivo.clear();
				}
				break;
			}
			case 2: {
				break;
			}
			default: {
				cout << "No se ha seleccionado ninguna opci" << char(162) << "n v" << char(160) << "lida." << endl << endl;
				break;
			}
		}
	} while(opcion < 1 || opcion > 2);
}

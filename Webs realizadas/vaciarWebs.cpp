void vaciarWebs() {
	// Personalización
	system("color 0B");
	
	// Título
	cout << "\t=======================" << endl;
	cout << "\t=                     =" << endl;
	cout << "\t= VACIAR P" << char(181) << "GINAS WEB  =" << endl;
	cout << "\t=                     =" << endl;
	cout << "\t=======================" << endl << endl;
	
	do {
		// Borrar
		cout << "\t-----------------------------------" << endl;
		cout << "\t|                                 |" << endl;
		cout << "\t| " << char(168) << "DESEAS VACIAR LAS P" << char(181) << "GINAS WEB? |" << endl;
		cout << "\t|                                 |" << endl;
		cout << "\t-----------------------------------" << endl;
		cout << "\t|                                 |" << endl;
		cout << "\t| [1] - Vaciar                    |" << endl;
		cout << "\t| [2] - Salir                     |" << endl;
		cout << "\t|                                 |" << endl;
		cout << "\t-----------------------------------" << endl << endl;
		
		// Asignar valor
		cantidad = 4;
		
		// Solicitar opción
		cout << "\tElige una opci" << char(162) << "n: ";
		cin >> opcion;
		cout << endl;
		
		// Menú
		switch(opcion) {
			case 1: {
				for(i = 0; i < 3; i++) {
					for(j = 0; j < cantidad; j++) {
						cout << "Vaciando " << j + 1 << " p" << char(160) << "ginas web de la tecnolog" << char(161) << "a " << i + 1 << "...\r";
						
						// Dormir
						Sleep(1000);
					}
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

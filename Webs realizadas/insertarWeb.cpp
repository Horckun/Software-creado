void insertarWeb() {
	// Personalización
	system("color 0C");
	
	// Título
	cout << "\t=======================" << endl;
	cout << "\t=                     =" << endl;
	cout << "\t= INSERTAR P" << char(181) << "GINA WEB =" << endl;
	cout << "\t=                     =" << endl;
	cout << "\t=======================" << endl << endl;
	
	// Declarar variable para manejar el archivo
	ofstream escribirWeb, escribirCode, escribirWP, escribirJoomla;
	ifstream leerTecnologia, leerWeb;
	
	// Abrir archivo
	leerTecnologia.open("Tecnologias.dat");
	escribirWeb.open("Páginas web.dat",ios::app);
	leerWeb.open("Páginas web.dat");
	escribirCode.open("Páginas web en Code.dat",ios::app);
	escribirWP.open("Páginas web en WordPress.dat",ios::app);
	escribirJoomla.open("Páginas web en Joomla.dat",ios::app);
	
	// Comprobar fichero
	if(!escribirWeb) {
		cout << "El archivo no existe." << endl << endl;
		
		// Dormir
		Sleep(1000);
	} else {
		cout << "El archivo s" << char(161) << " existe." << endl << endl;
	
		// Asignar valor
		i = 0;
		
		// Mostrar páginas web
		cout << "P" << char(160) << "ginas web introducidas anteriormente:" << endl << endl;
		while(!leerWeb.eof()) {
			leerWeb.getline(palabra,100);
			cout << "- [" << i + 1 << "] " << palabra << endl;
			i++;
		}
		cout << endl;
	
		// Asignar valor
		i = 0;
		
		// Mostrar tecnologías
		cout << "Tecnolog" << char(161) << "as introducidas anteriormente:" << endl << endl;
		while(!leerTecnologia.eof()) {
			leerTecnologia.getline(palabra,100);
			cout << "- [" << i << "] " << palabra << endl;
			i++;
		}
		cout << endl;
		
		// Elegir donde guardar
		cout << "\tIntroduce el n" << char(163) << "mero donde deseas guardar la p" << char(160) << "gina web: ";
		cin >> opcion;
		
		switch(opcion) {
			case 0: {
				// Solicitar nombre
				cout << "\tIntroduce la url de la p" << char(160) << "gina web: ";
				cin >> solicitud;
				cout << endl;
				
				// Insertar nombre
				escribirWeb << solicitud << endl;
				escribirCode << solicitud << endl;
				break;
			}
			case 1: {
				// Solicitar nombre
				cout << "\tIntroduce la url de la p" << char(160) << "gina web: ";
				cin >> solicitud;
				cout << endl;
				
				// Insertar nombre
				escribirWeb << solicitud << endl;
				escribirWP << solicitud << endl;
				break;
			}
			case 2: {
				// Solicitar nombre
				cout << "\tIntroduce la url de la p" << char(160) << "gina web: ";
				cin >> solicitud;
				cout << endl;
				
				// Insertar nombre
				escribirWeb << solicitud << endl;
				escribirJoomla << solicitud << endl;
				break;
			}
			default: {
				cout << "No has seleccionado ninguna opci" << char(162) << "n v" << char(160) << "lida." << endl << endl;
				break;
			}
		}
	}
	
	// Cerrar archivo
	leerTecnologia.close();
	escribirWeb.close();
	leerWeb.close();
	escribirCode.close();
	escribirWP.close();
	escribirJoomla.close();
}

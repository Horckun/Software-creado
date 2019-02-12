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
	ofstream escribirWeb;
	ifstream leerWeb;
	
	// Abrir archivo
	escribirWeb.open("PaginasWeb.dat",ios::app);
	leerWeb.open("PaginasWeb.dat");
	
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
	
		// Solicitar nombre
		cout << "\tIntroduce la url de la p" << char(160) << "gina web: ";
		cin >> solicitud;
		cout << endl;
				
		// Insertar nombre
		escribirWeb << solicitud << endl;
	}
	
	// Cerrar archivo
	escribirWeb.close();
	leerWeb.close();
}

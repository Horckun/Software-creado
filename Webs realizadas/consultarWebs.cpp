void consultarWebs() {
	// Personalización
	system("color 1A");
	
	// Título
	cout << "\t=========================" << endl;
	cout << "\t=                       =" << endl;
	cout << "\t= CONSULTAR P" << char(181) << "GINAS WEB =" << endl;
	cout << "\t=                       =" << endl;
	cout << "\t=========================" << endl << endl;
	
	// Declarar variable para manejar el archivo
	ifstream lectura;
	
	// Abrir archivo
	lectura.open("PaginasWeb.dat");
	
	// Comprobar fichero
	if(!lectura) {
		cout << "El archivo no existe." << endl << endl;
		
		// Dormir
		Sleep(1000);
	} else {
		cout << "El archivo s" << char(161) << " existe." << endl << endl;
	
		// Asignar valor
		i = 0;
		
		// Mostrar páginas web
		cout << "P" << char(160) << "ginas web:" << endl << endl;
		while(!lectura.eof()) {
			lectura.getline(palabra,100);
			cout << "- [" << i + 1 << "] " << palabra << endl;
			i++;
		}
		cout << endl;
		
		system("pause");
	}
	
	// Cerrar archivo
	lectura.close();
}

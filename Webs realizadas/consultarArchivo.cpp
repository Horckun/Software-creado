void consultarArchivo() {
	// Personalización
	system("color 1B");
	
	// Título
	cout << "\t=====================" << endl;
	cout << "\t=                   =" << endl;
	cout << "\t= CONSULTAR ARCHIVO =" << endl;
	cout << "\t=                   =" << endl;
	cout << "\t=====================" << endl << endl;
	
	// Declarar variable para manejar el archivo
	ifstream lectura;
	
	cout << "\tIntroduce el nombre del archivo que quieres leer junto con la extensi" << char(162) << "n (nombreArchivo.dat): ";
	cin >> solicitud;
	cout << endl;
	
	// Abrir archivo
	lectura.open(solicitud);
	
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
		cout << "El archivo " << solicitud << " contiene:" << endl << endl;
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

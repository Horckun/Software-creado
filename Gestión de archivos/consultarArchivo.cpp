void consultarArchivo() {
	// Personalización
	system("color 0B");
	
	// Título
	cout << "\t#####################" << endl;
	cout << "\t#                   #" << endl;
	cout << "\t# CONSULTAR ARCHIVO #" << endl;
	cout << "\t#                   #" << endl;
	cout << "\t#####################" << endl << endl;
	
	// Declarar variable para manejar el archivo
	ifstream lectura;
	
	// Abrir archivo
	cout << "Introduce el nombre del archivo a abrir junto con la extensi" << char(162) << "n '.dat' o '.txt' (nombreArchivo.extensi" << char(162) << "n): ";
	fflush(stdin);
	gets(solicitud);
	cout << endl;
	
	// Abrir archivo
	lectura.open(solicitud);
	
	// Comprobar fichero
	if(!lectura) {
		cout << "El archivo no existe." << endl << endl;
		
		// Dormir
		Sleep(1000);
	} else {
		cout << "El archivo " << solicitud << " se ha abierto correctamente." << endl << endl;
	
		// Asignar valor
		i = 0;
		
		// Mostrar contenido
		cout << "Contenido introducido anteriormente:" << endl << endl;
		while(!lectura.eof()) {
			lectura.getline(palabra,100);
			cout << "- [" << i + 1 << "] " << palabra << endl;
			i++;
		}
		cout << endl;
		
		// Cerrar archivo
		lectura.close();
		
		system("pause");
	}
	
	// Cerrar archivo
	lectura.close();
}

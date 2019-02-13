void crearArchivo() {
	// Personalización
	system("color 1B");
	
	// Título
	cout << "\t=================" << endl;
	cout << "\t=               =" << endl;
	cout << "\t= CREAR ARCHIVO =" << endl;
	cout << "\t=               =" << endl;
	cout << "\t=================" << endl << endl;
	
	// Declarar variable para manejar el archivo
	ofstream crear;
	
	// Solicitar nombre archivo
	cout << "\tIntroduce el nombre del archivo que quieres crear junto con la extensi" << char(162) << "n (nombreArchivo.dat): ";
	cin >> solicitud;
	cout << endl;
	
	// Abrir archivo
	crear.open(solicitud);
	
	// Comprobar fichero
	if(!crear) {
		cout << "El archivo no se ha podido crear." << endl << endl;
		
		// Dormir
		Sleep(1000);
	} else {
		cout << "El archivo se ha creado correctamente." << endl << endl;
		
		system("pause");
	}
	
	// Cerrar archivo
	crear.close();
}

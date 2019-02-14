void crearArchivo() {
	// Personalización
	system("color 0B");
	
	// Título
	cout << "\t#######################" << endl;
	cout << "\t#                     #" << endl;
	cout << "\t# CREACI" << char(224) << "N DE ARCHIVO #" << endl;
	cout << "\t#                     #" << endl;
	cout << "\t#######################" << endl << endl;
	
	// Declarar variable para manejar el archivo
	ofstream crear;
	
	// Solicitar nombre archivo
	cout << "Introduce el nombre del archivo junto con la extensi" << char(162) << "n '.dat' o '.txt' (nombreArchivo.extensi" << char(162) << "n): ";
	fflush(stdin);
	gets(solicitud);
	cout << endl;
	
	// Abrir archivo
	crear.open(solicitud);
	
	// Comprobar fichero
	if(!crear) {
		cout << "El archivo no se ha podido crear." << endl << endl;
		
		// Dormir
		Sleep(1000);
	} else {
		cout << "El archivo " << solicitud << " se ha creado correctamente." << endl << endl;
		
		system("pause");
	}
	
	// Cerrar archivo
	crear.close();
}

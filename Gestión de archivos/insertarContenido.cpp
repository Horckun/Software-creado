void insertarContenido() {
	// Personalización
	system("color 0E");
	
	// Título
	cout << "\t######################" << endl;
	cout << "\t#                    #" << endl;
	cout << "\t# INSERTAR CONTENIDO #" << endl;
	cout << "\t#                    #" << endl;
	cout << "\t######################" << endl << endl;
	
	// Declarar variable para manejar el archivo
	ifstream lectura;
	ofstream insertar;
	
	// Solicitar nombre archivo
	cout << "Introduce el nombre del archivo a abrir junto con la extensi" << char(162) << "n '.dat' o '.txt' (nombreArchivo.extensi" << char(162) << "n): ";
	fflush(stdin);
	gets(solicitud);
	cout << endl;
	
	// Abrir archivo
	insertar.open(solicitud,ios::app);
	lectura.open(solicitud);
	
	// Comprobar fichero
	if(!insertar) {
		cout << "El archivo no se ha podido abrir." << endl << endl;
		
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
		
		// Solicitar contenido
		cout << "\tEscribe lo que quieras introducir en el archivo " << solicitud << ": ";
		fflush(stdin);
		gets(palabra);
		cout << endl;
		
		// Introducir en fichero
		insertar << palabra << endl;
		
		// Mostrar mensaje;
		cout << "Se ha introducido: " << palabra << "." << endl << endl;
		
		system("pause");
	}
	
	// Cerrar archivo
	insertar.close();
}

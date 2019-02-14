void modificarContenido() {
	// Personalización
	system("color 0F");
	
	// Título
	cout << "\t#######################" << endl;
	cout << "\t#                     #" << endl;
	cout << "\t# MODIFICAR CONTENIDO #" << endl;
	cout << "\t#                     #" << endl;
	cout << "\t#######################" << endl << endl;
	
	// Declarar variable para manejar el archivo
	ofstream escritura, escritura2;
	ifstream lectura;
	
	// Abrir archivo
	cout << "Introduce el nombre del archivo a abrir junto con la extensi" << char(162) << "n '.dat' o '.txt' (nombreArchivo.extensi" << char(162) << "n): ";
	fflush(stdin);
	gets(solicitud);
	cout << endl;
	
	// Abrir archivo
	lectura.open(solicitud);
	escritura.open(solicitud,ios::app);
	escritura2.open("tmp.dat");
	
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
		
		// Abrir archivo
		lectura.open(solicitud);
		
		// Buscar contenido
		cout << "\tIntroduce lo que quieras reemplazar: ";
		fflush(stdin);
		gets(buscar);
		cout << endl;
		
		// Buscar contenido dentro del archivo
		while(lectura >> palabra) {
			if(strcmp(palabra,buscar) == 0) {
				cout << "\tAhora introduce lo que quieras: ";
				fflush(stdin);
				gets(palabra);
				cout << endl;
			}
			escritura2 << palabra << endl;
		}
	}
	
	system("pause");
	
	// Cerrar archivo
	lectura.close();
	escritura.close();
	escritura2.close();
	
	// Eliminar archivo
	remove(solicitud);
	
	// Renombrar archivo
	rename("tmp.dat",solicitud);
}

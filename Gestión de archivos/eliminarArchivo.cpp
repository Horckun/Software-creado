void eliminarArchivo() {
	// Personalización
	system("color 0E");
	
	// Título
	cout << "\t####################" << endl;
	cout << "\t#                  #" << endl;
	cout << "\t# ELIMINAR ARCHIVO #" << endl;
	cout << "\t#                  #" << endl;
	cout << "\t####################" << endl << endl;
	
	// Declarar variable para manejar el archivo
	ifstream eliminar;
	
	// Abrir archivo
	cout << "Introduce el nombre del archivo a eliminar junto con la extensi" << char(162) << "n '.dat' o '.txt' (nombreArchivo.extensi" << char(162) << "n): ";
	fflush(stdin);
	gets(solicitud);
	cout << endl;
	
	// Abrir archivo
	eliminar.open(solicitud);
	
	// Comprobar fichero
	if(!eliminar) {
		cout << "El archivo no existe." << endl << endl;
		
		// Dormir
		Sleep(1000);
	} else {
		cout << "El archivo s" << char(161) << " existe." << endl << endl;
	
		// Cerrar archivo
		eliminar.close();
	}
	
	// Cerrar archivo
	eliminar.close();
	
	// Comprobar fichero
	if(!eliminar) {
		cout << "El archivo " << solicitud << " se ha eliminado." << endl << endl;
		
		system("pause");
	}
	
	// Eliminar archivo
	remove(solicitud);
}

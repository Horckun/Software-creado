void consultarTecnologia() {
	// Personalizaci�n
	system("color 0F");
	
	// T�tulo
	cout << "\t========================" << endl;
	cout << "\t=                      =" << endl;
	cout << "\t= CONSULTAR TECNOLOG" << char(214) << "A =" << endl;
	cout << "\t=                      =" << endl;
	cout << "\t========================" << endl << endl;
	
	// Declarar variable para manejar el archivo
	ifstream lectura;
	
	// Abrir archivo
	lectura.open("Tecnolog�as.dat");
	
	// Comprobar fichero
	if(!lectura) {
		cout << "El archivo no existe." << endl << endl;
		
		// Dormir
		Sleep(1000);
	} else {
		cout << "El archivo s" << char(161) << " existe." << endl << endl;
	
		// Asignar valor
		i = 0;
		
		// Mostrar p�ginas web
		cout << "Tecnolog" << char(161) << "as:" << endl << endl;
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

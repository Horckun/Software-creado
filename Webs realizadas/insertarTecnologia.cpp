void insertarTecnologia() {
	// Personalizaci�n
	system("color 0B");
	
	// T�tulo
	cout << "\t=======================" << endl;
	cout << "\t=                     =" << endl;
	cout << "\t= INSERTAR TECNOLOG" << char(214) << "A =" << endl;
	cout << "\t=                     =" << endl;
	cout << "\t=======================" << endl << endl;
	
	// Asignar valor
	i = 0;
	
	// Declarar variable para manejar el archivo
	ofstream escritura;
	ifstream lectura;
	
	// Abrir archivo
	escritura.open("Nombres de tecnologias.dat",ios::app);
	lectura.open("Nombres de tecnologias.dat");
	
	// Comprobar fichero
	if(!escritura) {
		cout << "El archivo no existe." << endl << endl;
		
		// Dormir
		Sleep(1000);
	} else {
		cout << "El archivo s" << char(161) << " existe." << endl << endl;
		
		// Mostrar
		
		cout << "Tecnolog" << char(161) << "as introducidas anteriormente:" << endl << endl;
		
		while(!lectura.eof()) {
			lectura.getline(palabra,100);
			cout << "- [" << i + 1 << "] " << palabra << endl;
			i++;
		}
			
		// Solicitar nombre
		cout << "\tIntroduce un nombre para la tecnolog" << char(161) << "a: ";
		cin >> tech.nombre;
		cout << endl;
				
		// Insertar nombre
		escritura << tech.nombre;
		escritura << endl;
	}
	
	// Cerrar archivo
	escritura.close();
	lectura.close();
}
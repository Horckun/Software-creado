void modificarTecnologia() {
	// Personalizaci�n
	system("color 0D");
	
	// T�tulo
	cout << "\t========================" << endl;
	cout << "\t=                      =" << endl;
	cout << "\t= MODIFICAR TECNOLOG" << char(214) << "A =" << endl;
	cout << "\t=                      =" << endl;
	cout << "\t========================" << endl << endl;
	
	// Declarar variable para manejar el archivo
	ofstream escritura, escritura2;
	ifstream lectura;
	
	// Abrir archivo
	lectura.open("Tecnologias.dat");
	escritura.open("Tecnologias.dat",ios::app);
	escritura2.open("tmp.dat");
	
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
		cout << "Tecnolog" << char(161) << "as introducidas anteriormente:" << endl << endl;
		while(!lectura.eof()) {
			lectura.getline(palabra,100);
			cout << "- [" << i << "] " << palabra << endl;
			i++;
		}
		cout << endl;
		
		// Cerrar archivo
		lectura.close();
		
		// Abrir archivo
		lectura.open("Tecnologias.dat");
		
		// Buscar palabra
		cout << "\tBusca la palabra a reemplazar: ";
		cin >> buscar;
		cout << endl;
		
		// Buscar la palabra dentro del archivo
		while(lectura >> palabra) {
			if(strcmp(palabra,buscar) == 0) {
				cout << "\tElige el nuevo nombre: ";
				cin >> palabra;
				cout << endl;
			}
			escritura2 << palabra << endl;
		}
	}
	
	// Cerrar archivo
	lectura.close();
	escritura.close();
	escritura2.close();
	
	// Eliminar archivo
	remove("Tecnologias.dat");
	
	// Renombrar archivo
	rename("tmp.dat","Tecnologias.dat");
}

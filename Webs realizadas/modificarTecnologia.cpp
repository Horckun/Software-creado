void modificarTecnologia() {
	// Personalización
	system("color 0D");
	
	// Título
	cout << "\t========================" << endl;
	cout << "\t=                      =" << endl;
	cout << "\t= MODIFICAR TECNOLOG" << char(214) << "A =" << endl;
	cout << "\t=                      =" << endl;
	cout << "\t========================" << endl << endl;
	
	// Declarar variable para manejar el archivo
	ofstream escritura, escritura2;
	ifstream lectura;
	
	// Abrir archivo
	lectura.open("Tecnologías.dat");
	escritura.open("Tecnologías.dat",ios::app);
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
		
		// Mostrar páginas web
		cout << "Tecnolog" << char(161) << "as introducidas anteriormente:" << endl << endl;
		while(!lectura.eof()) {
			lectura.getline(palabra,100);
			cout << "- [" << i + 1 << "] " << palabra << endl;
			i++;
		}
		cout << endl;
		
		// Cerrar archivo
		lectura.close();
		
		// Abrir archivo
		lectura.open("Tecnologías.dat");
		
		// Buscar palabra
		cout << "\tIntroduce el nombre de la tecnolog" << char(161) << "a a reemplazar: ";
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
	remove("Tecnologías.dat");
	
	// Renombrar archivo
	rename("tmp.dat","Tecnologías.dat");
}

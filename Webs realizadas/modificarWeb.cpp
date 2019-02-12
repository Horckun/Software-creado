void modificarWeb() {
	// Personalización
	system("color 0E");
	
	// Título
	cout << "\t========================" << endl;
	cout << "\t=                      =" << endl;
	cout << "\t= MODIFICAR P" << char(181) << "GINA WEB =" << endl;
	cout << "\t=                      =" << endl;
	cout << "\t========================" << endl << endl;
	
	// Declarar variable para manejar el archivo
	ofstream escritura, escritura2;
	ifstream lectura;
	
	// Abrir archivo
	lectura.open("PaginasWeb.dat");
	escritura.open("PaginasWeb.dat",ios::app);
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
		cout << "P" << char(160) << "ginas web introducidas anteriormente:" << endl << endl;
		while(!lectura.eof()) {
			lectura.getline(palabra,100);
			cout << "- [" << i + 1 << "] " << palabra << endl;
			i++;
		}
		cout << endl;
		
		// Cerrar archivo
		lectura.close();
		
		// Abrir archivo
		lectura.open("PaginasWeb.dat");
		
		// Buscar palabra
		cout << "\tIntroduce la web a reemplazar: ";
		cin >> buscar;
		cout << endl;
		
		// Buscar la palabra dentro del archivo
		while(lectura >> palabra) {
			if(strcmp(palabra,buscar) == 0) {
				cout << "\tElige la nueva direcci" << char(162) << "n web: ";
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
	remove("PaginasWeb.dat");
	
	// Renombrar archivo
	rename("tmp.dat","PaginasWeb.dat");
}

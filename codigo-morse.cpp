#include <iostream>
#include <conio.h>

using namespace std;

int main () {

	int opcion;

	cout<<"Bienvenido al traductor MorseTR 2.0"<<endl;

	do {

		while (true) {
			cout << "Digite una opcion\n1-) Texto >>> Morse\n2-) Morse >>> Texto\n3-) Salir\n\nDigite>>>";
			if (!(cin >> opcion) || opcion < 1 || opcion > 3) {
				while (cin.get() != '\n'); // Se limpia el búfer de entrada
				cout << "\nIngrese un valor valido, entre 1 y 3\n";
			} else {
				break;
			}
		}





		switch(opcion) {

			case 1:

				char palabra[30];

				cout<<"Ingrese su palabra:\n>>>"; cin>>palabra;
				cout<<"Su palabra en codigo morse es:\n>>>";

				for(int i = 0; i < 20; i++) {
					if(palabra[i] == 'a')
						cout<<".- ";
					if (palabra[i] == 'b')
						cout<< "-... ";
					if (palabra[i] == 'c')
						cout<< "-.-. ";
					if (palabra[i] == 'd')
						cout<< "-.. ";
					if (palabra[i] == 'e')
						cout<< ". ";
					if (palabra[i] == 'f')
						cout<< "..-. ";
					if (palabra[i] == 'g')
						cout<< "--. ";
					if (palabra[i] == 'h')
						cout<< ".... ";
					if (palabra[i] == 'i')
						cout<< ".. ";
					if (palabra[i] == 'j')
						cout<< ".--- ";
					if (palabra[i] == 'k')
						cout<< "-.- ";
					if (palabra[i] == 'l')
						cout<< ".-.. ";
					if (palabra[i] == 'm')
						cout<< "-- ";
					if (palabra[i] == 'n')
						cout<< "-. ";
					if (palabra[i] == 'o')
						cout<< "--- ";
					if (palabra[i] == 'p')
						cout<< ".--. ";
					if (palabra[i] == 'q')
						cout<< "--.- ";
					if (palabra[i] == 'r')
						cout<< ".-. ";
					if (palabra[i] == 's')
						cout<< "... ";
					if (palabra[i] == 't')
						cout<< "- ";
					if (palabra[i] == 'u')
						cout<< "..- ";
					if (palabra[i] == 'v')
						cout<< "...- ";
					if (palabra[i] == 'w')
						cout<< ".-- ";
					if (palabra[i] == 'x')
						cout<< "-..- ";
					if (palabra[i] == 'y')
						cout<< "-.-- ";
					if (palabra[i] == 'z')
						cout<< "--.. ";

				}
				cout<<"\n\n";
				break;

			case 2:

			cout<<">>>Opcion en mantenimiento, intente mas tarde<<<\n\n";
				break;

			case 3:
				cout<<"Gracias por usar nuestro traductor!";
				break;
		}
	} while(opcion != 3);

	return 0;
}
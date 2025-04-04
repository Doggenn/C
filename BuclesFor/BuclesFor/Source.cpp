#include <iostream>
#include <string>

int main() {
	using namespace std;
	
	int cantidadAsteriscos;

	cout << "Ingresa la cantidad de asteriscos a imprimir: ";
	cin >> cantidadAsteriscos;

	if (cantidadAsteriscos < 1) {
		cout << "La cantidad de asteriscos debe ser mayor a 0. \n";
		return 0;
	}

	for (int i = 1; i <= cantidadAsteriscos; i++) {
		for(int j = cantidadAsteriscos; j >= i; j--) {
			cout << "*";
		}
		cout << endl;
	}

	int numeroAdivinar = 10;
	int numeroIntentos = 5;
	int n;
	bool adivino = false;

	for (int i = 0; i < numeroIntentos; i++)
	{
		cout << "Intentos: "<< i << endl;
		cout << "Ingresa el valor: ";
		cin >> n;
		cout << endl;

		if (n == numeroAdivinar) {
			cout << "Adivinaste el numero! \n";
			adivino = true;
			break;
		}
		else {
			cout << "Numero incorrecto. \n";
		}
	}
	if(!adivino) {
		cout << "No adivinaste el numero. \n";
	}

	return 0;
}


/*
using namespace std;

	const float PI = 3.1416;
	float radio, largo, ancho;
	char opcion;

	cout << "Elige una opcion: \n\n"
		<< "a) Perimetro de rectangulo. \n"
		<< "b) Area de rectangulo \n"
		<< "c) Perimetro de circulo \n"
		<< "d) Area de circulo \n\n"
		<< "x) Salir \n\n"
		<< ">>";

	cin >> opcion;

	switch (opcion) {
		case 'a':
		case 'A':
			cout << "Ingresa el largo del rectangulo: ";
			cin >> largo;
			cout << "Ingresa el ancho del rectangulo: ";
			cin >> ancho;
			cout << "El perimetro del rectangulo es: " << (largo + ancho) * 2 << endl;
			break;
		case 'b':
		case 'B':
			cout << "Ingresa el largo del rectangulo: ";
			cin >> largo;
			cout << "Ingresa el ancho del rectangulo: ";
			cin >> ancho;
			cout << "El area del rectangulo es: " << largo * ancho << endl;
			break;
		case 'c':
		case 'C':
			cout << "Ingresa el radio del circulo: ";
			cin >> radio;
			cout << "El perimetro del circulo es: " << radio * PI * 2 << endl;
		case 'd':
		case 'D':
			cout << "Ingresa el radio del circulo: ";
			cin >> radio;
			cout << "El area del circulo es: " << radio * radio * PI << endl;
			break;
		case 'x':
		case 'X':
			cout << "Saliendo del programa... \n";
			return 0;
		default:
			cout << "Opcion no valida. \n";
	}

*/
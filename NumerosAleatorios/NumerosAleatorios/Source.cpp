#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

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
		for (int j = cantidadAsteriscos; j >= i; j--) {
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
		cout << "Intentos " << i << " de " << numeroIntentos << endl;
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
			if(n < numeroAdivinar)
				cout << "El numero es mayor. \n";
			else
				cout << "El numero es menor. \n";
		}
	}
	if (!adivino) {
		cout << "No adivinaste el numero. \n";
	}

	srand(time(0));

	int numeroAleatorio;
	numeroAleatorio = rand() % 100 + 1;


	numeroIntentos = 10;
	n;
	adivino = false;


	for (int i = 0; i < numeroIntentos; i++)
	{
		cout << "Intentos " << i << " de " << numeroIntentos << endl;
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
	if (!adivino) {
		cout << "No adivinaste el numero. \n" << "El numero era: " << numeroAleatorio << ".";
	}

	return 0;
}
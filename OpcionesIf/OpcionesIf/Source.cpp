#include <iostream>
#include <string>

int main() {
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

	if (opcion == 'a' | 'A') {
		cout << "Ingresa el largo del rectangulo: ";
		cin >> largo;
		cout << "Ingresa el ancho del rectangulo: ";	
		cin >> ancho;
		cout << "El perimetro del rectangulo es: " << (largo + ancho)*2 << endl;
	}
	else if (opcion == 'b' | 'B') {
		cout << "Ingresa el largo del rectangulo: ";
		cin >> largo;
		cout << "Ingresa el ancho del rectangulo: ";
		cin >> ancho;
		cout << "El area del rectangulo es: " << largo * ancho << endl;
	}
	else if (opcion == 'c' | 'C') {
		cout << "Ingresa el radio del circulo: ";
		cin >> radio;
		cout << "El perimetro del circulo es: " << radio * PI * 2 << endl;
	}
	else if (opcion == 'd' | 'D') {
		cout << "Ingresa el radio del circulo: ";
		cin >> radio;
		cout << "El area del circulo es: " << radio * radio * PI << endl;
	}
	else if (opcion == 'x' | 'X') {
		cout << "Saliendo del programa... \n";
	}
	else {
		cout << "Opcion no valida. \n";
	}
}
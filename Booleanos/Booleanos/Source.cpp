#include <iostream>
#include <string>

int main() {
	using namespace std;

	const float PI = 3.1416;
	float radio, largo, ancho;
	char opcion;
	bool hayError;

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
		if (largo <= 0) {
			hayError = true;
		}
		else {
			hayError = false;
		}

		if (hayError) {
			cout << "El largo no puede ser menor o igual a 0. \n";
			break;
		}
		cout << "Ingresa el ancho del rectangulo: ";
		cin >> ancho;

		hayError = ancho <= 0;

		if (hayError) {
			cout << "El ancho no puede ser menor o igual a 0. \n";
			break;
		}

		cout << "El perimetro del rectangulo es: " << (largo + ancho) * 2 << endl;
		break;
	case 'b':
	case 'B':
		cout << "Ingresa el largo del rectangulo: ";
		cin >> largo;
		cout << "Ingresa el ancho del rectangulo: ";
		cin >> ancho;

		if ((largo <=0) || (ancho <= 0)) {
			cout << "El largo y el ancho no puede ser menor o igual a 0. \n";
			break;
		}
		cout << "El area del rectangulo es: " << largo * ancho << endl;
		break;
	case 'c':
	case 'C':
		cout << "Ingresa el radio del circulo: ";
		cin >> radio;
		hayError = radio <= 0;

		if (hayError) {
			cout << "El radio no puede ser menor o igual a 0. \n";
			break;
		}
		cout << "El perimetro del circulo es: " << radio * PI * 2 << endl;
	case 'd':
	case 'D':
		cout << "Ingresa el radio del circulo: ";
		cin >> radio;
		if (radio <= 0) {
			cout << "El radio no puede ser menor o igual a 0. \n";
			break;
		}
		cout << "El area del circulo es: " << radio * radio * PI << endl;
		break;
	case 'x':
	case 'X':
		cout << "Saliendo del programa... \n";
		return 0;
	default:
		cout << "Opcion no valida. \n";
	}
}
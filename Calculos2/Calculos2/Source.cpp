#include <iostream>
#include <string>

int main() {
	int puntos = 0;
	int puntosMoneda;
	std::cout << "Ingrese la cantidad de puntos a sumar: ";
	std::cin >> puntosMoneda;

	puntos += puntosMoneda;

	std::cout << "Puntos = " << puntos << " - puntosMondeda = " << puntosMoneda << std::endl;

	std::cout << "Ingresa los puntos a sumar: ";
	std::cin >> puntosMoneda;

	puntos += puntosMoneda;

	std::cout << "Puntos = " << puntos << " - puntosMondeda = " << puntosMoneda << std::endl;

	std::cout << "Ingresa los puntos a sumar: ";
	std::cin >> puntosMoneda;

	puntos += puntosMoneda;

	std::cout << "Puntos = " << puntos << " - puntosMondeda = " << puntosMoneda << std::endl;
}
#include <iostream>
#include <string>

int main() {
	std::string nombre;
	std::string nombre2;
	int edad;
	int edad2;
	

	std::cout << "Escribe tu nombre: ";
	std::cin >> nombre;
	std::cout << "Ingresa tu edad: ";
	std::cin >> edad;
	std::cout << "Escribe el nombre de otra persona: ";
	std::cin >> nombre2;
	std::cout << "Ingresa la edad de " << nombre2 << ": ";
	std::cin >> edad2;

	std::cout << "Hola " << nombre << ", es un placer." <<std::endl << "No sabia que tienes " << edad << " años. Y " << nombre2 << " tiene " << edad2 << " años.";
}
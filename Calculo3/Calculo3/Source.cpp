#include <iostream>
#include <string>

int main() {
	int base, altura;
	float area;

	std::cout << "Ingrese la base y la altura del triangulo: ";
	std::cin >> base >> altura;

	area = (float)(base * altura) / 2;

	std::cout << "Area = " << area << std::endl;
}
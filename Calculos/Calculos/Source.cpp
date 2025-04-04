#include <iostream>
#include <string>

int main()
{
	int largo, ancho;
	int perimetro, area;
	std::cout << "Ingrese el largo del rectangulo: ";
	std::cin >> largo;
	std::cout << "Ingrese el ancho del rectangulo: ";
	std::cin >> ancho;

	perimetro = 2 * (largo + ancho);	
	area = largo * ancho;	

	std::cout << "El perimetro es: " << perimetro << std::endl;
	std::cout << "El area es: " << area << std::endl;	
}
#include <iostream>
#include <string>

int main()
{
	const int IVA = 22;
	float precioProducto;
	float calculoIVA, precioFinal;

	std::cout  << "Ingresa el precio del producto: ";
	std::cin >> precioProducto;
	
	calculoIVA = precioProducto * IVA / 100;
	precioFinal = precioProducto + calculoIVA;

	std::cout << "El precio inicial era: " << precioProducto<< std::endl << "El IVA es de: " << calculoIVA << std::endl << "El precio final es: " << precioFinal << std::endl;

	/*
	const float PI = 3.14;
	float radio, diametro;
	float area, perimetro;

	std::cout << "Ingresa el radio: ";
	std::cin >> radio;
	diametro = radio * 2;

	area = PI * (radio * radio);
	perimetro = PI * diametro;

	std::cout << "Perimetro = " << perimetro << std::endl;
	std::cout << "Area = " << area << std::endl;
	*/
}
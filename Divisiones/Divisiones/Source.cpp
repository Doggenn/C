#include <iostream>
#include <string>

int main() {
	int numeroCuatroC; //El numero entero a leer.
	
	/*Variables para obtener las cifras*/
	int c1, c2, c3, c4;
	
	//Pedir el numero entero.

	std::cout << "Ingrese un numero entero de 4 cifras: ";
	std::cin >> numeroCuatroC;

	/* 
	Vamos a obtener cociente y resto paso a paso
	entre multiplos de 10 para obtener restos por separado. 
	*/
	c1 = numeroCuatroC % 10;
	c2 = (numeroCuatroC / 10) % 10;
	c3 = (numeroCuatroC / 100) % 10;
	c4 = (numeroCuatroC / 1000);

	std::cout << c1 << c2 << c3 << c4 << std::endl;
}
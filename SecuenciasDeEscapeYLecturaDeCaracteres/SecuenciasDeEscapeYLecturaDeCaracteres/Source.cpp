#include <iostream>
#include <string>

int main() {
	char l1, l2, l3, l4;

	std::cout << "Introduce una palabra de 4 letras: ";
	std::cin >> l1 >> l2 >> l3 >> l4;	

	std::cout << l1 << std::endl 
			  << l2 << std::endl 
			  << l3 << std::endl 
			  << l4 << std::endl;

	std::cout << l4 << l3 << l2 << l1 << "\a" << std::endl; // \a es un sonido de notificacion

	std::cout << l1 << "\t" << l2 << "\t" << l3 << "\t" << l4 << std::endl; // \t es tabulador

	std::cout << l1 << "\n" << l2 << "\n" << l3 << "\n" << l4 << std::endl; // \n es salto de línea
	
}
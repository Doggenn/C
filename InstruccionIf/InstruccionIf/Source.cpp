#include <iostream>
#include <string>

int main() {
	using namespace std;

	int edad;	

	cout << "Ingresa tu edad: ";
	cin >> edad;

	if (edad < 40) {
		cout << "Eres joven" << endl;
		cout << "Tienes mucho por que vivir" << endl;
	}
	else if(edad == 40){
		cout << "Estas a la mitad de la vida." << endl;
	}
	else {
		cout << "Eres viejo" << endl;
		cout << "Igualmente tienes mucho por que vivir" << endl;
	}

	cout << "Gracias por compartir tu edad" << endl;
}
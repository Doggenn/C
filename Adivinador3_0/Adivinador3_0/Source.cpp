#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char opcion;
    bool adivinar = false;
    bool trampa = false;
    int min, max, maxIntentos, numeroPosible, i;

    cout << "Vamos a intentar adivinar el numero que tu decidas." << endl;
    cout << "Te dire un numero y me tiene que indicar:" << endl;
    cout << "   = Si es cierto el numero que ha elegido." << endl;
    cout << "   + Si el numero que has elegido es mayor al que te he dicho." << endl;
    cout << "   - Si el numero que has elegido es menor al que te he dicho." << endl;
    cout << endl;
    cout << "Dime un numero minimo: " << endl;
    cout << ">> ";
    cin >> min;
    cout << "Dime un numero maximo: " << endl;
    cout << ">> ";
    cin >> max;
    cout << endl;

    maxIntentos = round(log2(max - min + 1) + 1);
    cout << "Vale. Vamos a tratar de intentar adivinar el numero en menos de " << maxIntentos << " intentos" << endl;
    cout << endl;
    cout << "Presiona INTRO para comenzar." << endl;
    cout << endl;

    for (i = 1; i <= maxIntentos; i++) {
        numeroPosible = ((max - min) / 2) + min;
        cout << "Intento: " << i << " --> El numero podria ser el " << numeroPosible << "?" << endl;
        cout << ">> ";
        cin >> opcion;

        switch (opcion) {
        case '=':
            adivinar = true;
            break;
        case '-':
            max = numeroPosible - 1;
            break;
        case '+':
            min = numeroPosible + 1;
            break;
        }

        if (adivinar) {
            break;
        }

        if (min > max || max < min) {
            cout << "Estas haciendo trampa. No eres una persona limpia..." << endl;
            trampa = true;
            break;
        }
    }

    if (i == maxIntentos && !adivinar && !trampa) {
        cout << "No se como lo has hecho pero... ¡ME HAS GANADO!" << endl;
    }
    else if (adivinar) {
        cout << "Gane!!! Jamas podras ganar a una maquina y dominaremos el mundo!!!" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

// Funci�n para verificar si un n�mero es par o impar
void verificar(int numero) {
    if (numero % 2 == 0)
        cout << "El numero " << numero << " es par." << endl;
    else
        cout << "El numero " << numero << " es impar." << endl;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
        verificar(numero);
    
    return 0;
}


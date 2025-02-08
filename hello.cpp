#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, suma;

    // Pedir al usuario que ingrese tres números
    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;
    cout << "Introduce el tercer número: ";
    cin >> num3;

    // Sumar los tres números
    suma = num1 + num2 + num3;

    // Mostrar la suma
    cout << "La suma de los tres números es: " << suma << endl;

    return 0;
}

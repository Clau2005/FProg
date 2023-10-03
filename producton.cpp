#include <iostream>
using namespace std;
int main() {
	int cantidad, producto = 1;
	cout << "Ingrese la cantidad deseada ";
	cin >> cantidad;
	//bucle (sucesion repetitiva de eventos)
	for (int i = 0; i < cantidad; i++) {
		if (i > 0 && i % 2 == 0) {
			producto = producto * i;
		}
	}
	cout << "El producto de los numeros pares es: "<< producto << endl;
	return 0;
}

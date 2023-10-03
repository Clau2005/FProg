#include <iostream>
using namespace std;

int main() {
	int contador = 1, numeroaContar, pares;
	cout << "Ingresa la cantidad a evaluar: ";
	cin >> numeroaContar;
	//Convertir el num a positivo siempre
	if (numeroaContar < 0) {
		numeroaContar = numeroaContar*(-1);
	}
	while (contador <= numeroaContar) {
		if (contador % 2 == 0) {
			pares++;
		}
		contador++;
	}
	cout << "Numeros pares: " << pares;
	return 0;
}

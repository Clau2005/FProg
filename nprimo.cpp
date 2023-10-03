#include <iostream>
using namespace std;
int main() {
	int cantidad;
	bool isPrimo = true;
	cout << "Ingrese la cantidad deseada ";
	cin >> cantidad;
	//validar si el numero es primo
	for (int j = 2; j <= cantidad / 2; j++) {
        if (cantidad % j == 0) {
			isPrimo = false;
        }
    }
    if (isPrimo) {
    	cout << "El numero es primo";
	} else {
		cout << "El numero no es primo";
	}
	return 0;
}

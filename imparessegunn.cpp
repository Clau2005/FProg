#include <iostream>
using namespace std;

int main() {
	int num1, num2, contador = 0;
	cout << "Ingrese el primer numero ";
	cin >> num1;
	cout << "Ingrese el segundo numero ";
	cin >> num2;
	for (int i=num1; i <=num2; i++) {
		if (i % 2 != 0) {
			cout << i << "-" << endl;
			contador++;
		}
	}
	cout <<"Hay " << contador << " impares"; 
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int AnioNacimiento, Dia, AnioActual, edad = 0;
	string Mes;
	cout <<"Dia de Nacimiento: ";
	cin >> Dia;
	cout <<"Mes de Nacimiento: ";
	cin >> Mes;
	cout <<"Año de Nacimiento: ";
	cin >> AnioNacimiento;
	cout <<"Año Actual: ";
	cin >> AnioActual;
	for (int i=AnioNacimiento; i<=AnioActual; i++) {
		cout << Dia << " " << Mes << " " << i << endl;
		edad++;			
	}
	cout << "Tu Edad es "<< edad -1;
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	string promedioAprobatorio, AprobadoenMetAgiles, JrPracticas;
	cout << "Inscripcion a Calidad de Software" << endl;
	cout <<"Promedio >15 en SistemasInformacion: (Y/N)";
	cin >> promedioAprobatorio;
	cout <<"Aprobado en MetodologiasAgiles: (Y/N)";
	cin >> AprobadoenMetAgiles;
	cout <<"Jr PractProfesionales_Desarrollador: (Y/N)";
	cin >> JrPracticas;
	
	if(promedioAprobatorio =="Y") {
		if(AprobadoenMetAgiles =="Y") {
			if (JrPracticas =="Y") {
				cout << "YA PUEDES INSCRIBIRTE";
			} else {
				cout << "No puedes inscribirte a Calidad de Software";
			}
		} else {
			cout << "No puedes inscribirte a Calidad de Software";
		}
	} else {
		cout << "No puedes inscribirte a Calidad de Software";
	}
			return 0;
	}

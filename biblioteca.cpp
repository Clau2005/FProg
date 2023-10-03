#include <iostream>
using namespace std;

int main (){
        string DebeLibro, LibroenSala;
        int HorasPrestadas;
        cout << "Bienvenido a San Benito" << endl;
        cout << "Debe algun libro: (Y/N) ";
        cin >> DebeLibro;
        cout << "Cuantas horas desea el libro?: ";
        cin >> HorasPrestadas;
        cout << "Es un libro solo para leer en sala: (Y/N) ";
        cin >> LibroenSala;

        if (DebeLibro == "N" || DebeLibro == "n") {
            if (LibroenSala == "N" || LibroenSala == "n") {
                if (HorasPrestadas < 15 && HorasPrestadas > 1) {
                    cout << "EL LIBRO ES TODO TUYO";
                } else {
                    cout << "No puedo prestarte el libro";
                }
            } else {
                cout << "No puedo prestarte el libro";
            }
        } else {
                cout << "No puedo prestarte el libro";
        }

    return 0;
}
#include <iostream>
#include <ctime>
using namespace std;

int main() {

    srand((int) time(0));
    int liczba_losowa = (rand() % 15) + 1;
    int numer;
    cout << "Podaj numer" << endl;
    cin >> numer;
     
    while (numer != liczba_losowa) {
        if (numer < liczba_losowa) {
            cout << "Liczba jest za mała" << endl;
            cout << "Podaj numer" << endl;
            cin >> numer;
        }
        if (numer > liczba_losowa) {
            cout << "Liczba jest za duża" << endl;
            cout << "Podaj numer" << endl;
            cin >> numer;
        }
    }

    return 0;
}
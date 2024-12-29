#include <iostream>

using namespace std;

int silnia(int a){
	if(a<=1) return 1;
	else return a*silnia(a);
}

int main() {
    int a;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
	cout << "1. Silnia" <<endl;
        cin >> wyjscie;
    } while(wyjscie != 0 && wyjscie != 1);

    if(wyjscie == 1){
	cout << "Podaj liczbe naturanlna" << endl;
	cin << a;
	cout << "\nSilnia liczby " << a << " = " << silnia(a) <<endl;
    }

    return 0;
}


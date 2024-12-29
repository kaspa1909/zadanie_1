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
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}


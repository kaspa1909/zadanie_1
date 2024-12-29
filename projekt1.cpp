#include <iostream>

using namespace std;

int czy_pierwsza(int a){
    int test=1;

    for(int i=0; i<a; i++){
	if(a%i==0)test=0;
    }
    return test;
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


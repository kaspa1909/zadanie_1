#include <iostream>

using namespace std;

int silnia(int a){
	if(a<=1) return 1;
	else return a*silnia(a);
}
 
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
	cout << "1. Silnia" << endl;
	cout << "2. Czy pierwsza" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0 && wyjscie != 1 && wyjscie != 2);

    if(wyjscie == 1){
	cout << "Podaj liczbe naturanlna" << endl;
	cin << a;
	cout << "\nSilnia liczby " << a << " = " << silnia(a) <<endl;
    }

    if(wyjscie==2){
	cout << "\nPodaj liczbe naturanlna\n";
	cin >> a;
	cout<<"\nLiczba "<<a;
	if(czy_pierwsza(a)!=1) cout << " nie";
	cout<<" jest pierwsza\n";
    }
    return 0;
}


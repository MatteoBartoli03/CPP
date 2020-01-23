#include <iostream>
#include <math.h>
using namespace std;

int base, esponente, n, option;
int r = 0;
bool loop = true;
int main() {
	while(loop) {
    	cout << "\nOpzioni: \n1) Fattoriale\n2) Potenza\n3) Esci \n";
    	cin >>  option;
    	switch (option) {
    	case 1: {
    		cout << "inserisci il valore di cui fare il fattoriale: ";
    		cin >> n;
    		r = 1;
    		for (int i = 0; i < n; i ++){
    			r = r * (n-i);   			
			}
    		cout << "il risultato è: " << r;
        	break;
		}
    	case 2: {
    		cout << "\ninserisci la base della potenza: ";
			cin >> base;
			cout << "\ninserisci l'esponente della potenza': ";
			cin >> esponente;
			r = pow(base, esponente);
			cout << "il risultato è: " << r;   		
        	break;
		}
    	case 3: {
      		loop = false;
			break;
	  	}
	  	default: {
        	cout << "ritenta" << endl;
        	break;
      	}
    	}
	}
	return 0;
}

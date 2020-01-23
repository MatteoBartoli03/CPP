#include <iostream>
#include <math.h>
using namespace std;

int primo, secondo;
int r = 0;
int operatore;
bool loop = true;
int main() {
	cout << "\ninserisci il primo valore numerico: ";
	cin >> primo;
	cout << "\ninserisci il secondo valore numerico: ";
	cin >> secondo;
	while(loop) {
    	cout << "scegli l'operatore: \n1) +\n2) -\n3) /\n4) *\n5) ^\n";
    	cin >>  operatore;
    	cout << "il risultato è: ";
    	switch (operatore) {
    	case 1: {
    		r = primo + secondo;
    		cout << r;
        	break;
		}
    	case 2: {
    		r = primo - secondo;
    		cout << r;
        	break;
		}
    	case 3: {
    		r = primo / secondo;
    		cout << r;
        	break;
		}
    	case 4: {
    		r = primo * secondo;
    		cout << r;
        	break;
		}
    	case 5: {
    		r = pow(primo, secondo);
    		cout << r;
        	break;
		}
	  	default: {
        	cout << "ritenta" << endl;
        	break;
      	}
    	}
      	break;
	}
	return 0;
}

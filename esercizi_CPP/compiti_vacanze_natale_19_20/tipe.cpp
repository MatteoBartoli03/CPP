#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int INS(string str);
int CALC1(int X);
int CALC2(int Y);
int MENU(string str);
double RAPP(int C1, int C2);


int main() {
	int X, Y;
	double res = 1;
	cout << "Quest'esercizio calcolerà il rapporto tra il prodotto dei primi X numeri interi positivi e la potenza 3^Y mediante prodotti successivi";
	X = INS("\ninserisci il valore di X ");
	Y = INS("\ninserisci il valore di Y ");
	res = RAPP(CALC1(X), CALC2(Y));
	cout << "il risultato è uguale a " << setprecision(0) << res << " con resto di " << (CALC1(X) % CALC2(Y)) << endl;
    return 0;
    
    
    
    /*con menu
    bool loop = true;
    
	while(loop) {
    	option = MENU("stringa");
    	switch (option) {
    	case 1: {
        	break;
		}
    	case 2: {  		
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
	*/
}

int INS(string str) {
	int x;
	cout << str;
	cin >> x;
	return x;
}

int CALC1(int X) {
	int res = 1;
	for (int i = 0; i < X; i ++){
    	res = res * (X-i);   			
	}
	return res;
}

int CALC2(int Y) {
	int res = 1;
	for (int i = 0; i < Y; i ++){
    	res = res * 3;   			
	}
	return res;
}

int MENU(string str) {
	int x;
	cout << str;
	cin >> x;
	return x;
}

double RAPP(int C1, int C2) {
	double res;
	res = C1 / C2;
	return res;
}


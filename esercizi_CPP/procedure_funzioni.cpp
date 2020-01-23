#include <iostream>
using namespace std;

int main() {
    double tasso_EUR_USD = 1.1, tasso_EUR_GBP = 0.775,val, val2;
    int option;
    bool loop = true;
    while(loop) {
    	cout << "Opzioni: \n1) Cambio dollari in euro \n2) Cambio euro in dollari \n3) Cambio sterline in euro \n4) Cambio euro in sterline \n5) Cambia tasso euro dollari \n6) Cambia tasso euro sterline \n7) Esci \n";
    	cin >>  option;
    	switch (option) {
    	case 1: {
        	cout << "\ninserisci il valore in dollari da cambiare\n";
        	cin >> val;
        	val2 = val / tasso_EUR_USD;
        	cout << "\nil valore in euro: " << val2 << "\n";
        	break;
		}
      	case 2: {
	  		cout << "\ninserisci il valore in euro da cambiare\n";
        	cin >> val;
        	val2 = val * tasso_EUR_USD;
       		cout << "\nil valore in dollari: " << val2 << "\n";
        	break;
      	}
      	case 3: {
        	cout << "\ninserisci il valore in sterline da cambiare\n";
        	cin >> val;
        	val2 = val / tasso_EUR_GBP;
        	cout << "\nil valore in euro: " << val2 << "\n";
      	break;
    	}
      	case 4: {
	  		cout << "\n inserisci il valore in euro da cambiare\n";
        	cin >> val;
        	val2 = val * tasso_EUR_GBP;
        	cout << "\nil valore in sterline: " << val2 << "\n";
        	break;
      	}
      	case 5: {
	  		cout << "inserisci nuovo valore tasso euro-dollari\n";
	  		cin >> val;
			tasso_EUR_USD = val;
			cout << "\nil nuovo valore del tasso: " << tasso_EUR_USD << "\n";
        	break;
      	}
      	case 6: {
	  		cout << "\ninserisci nuovo valore tasso euro-sterline\n";
	  		cin >> val;
			tasso_EUR_GBP = val;
			cout << "\nil nuovo valore del tasso: " << tasso_EUR_GBP << "\n";
        	break;
      	}
      	case 7: {
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

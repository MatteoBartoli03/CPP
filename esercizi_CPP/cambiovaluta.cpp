#include <iostream>
using namespace std;
 
void cambio(double tasso, string valutainiziale, string valutafinale);
 
int main() {
    double tasso_EUR_USD = 1.1, tasso_EUR_GBP = 0.775,val, val2;
    int option;
    bool loop = true;
    while(loop) {
    	cout << "\nOpzioni: \n1) Cambio dollari in euro \n2) Cambio euro in dollari \n3) Cambio sterline in euro \n4) Cambio euro in sterline \n5) Cambia tasso euro dollari \n6) Cambia tasso euro sterline \n7) Esci \n";
    	cin >>  option;
    	switch (option) {
      	case 1: {
        	cambio(tasso_EUR_USD, "dollari", "euro");
      		break;
    	}
      	case 2: {
        	cambio(1/tasso_EUR_USD, "euro", "dollari");
        	break;
      	}
      	case 3: {
        	cambio(tasso_EUR_GBP, "sterline", "euro");
      		break;
    	}
      	case 4: {
        	cambio(1/tasso_EUR_GBP, "euro", "sterline");
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


void cambio(double tasso, string valutainiziale, string valutafinale) {
	double val;
	cout << "inserisci il valore in " << valutainiziale << " da cambiare:\n";
	cin >> val;
	double val2 = val / tasso;
	cout << "il valore  ottenuto in " << valutafinale << " è "<< val2;
}

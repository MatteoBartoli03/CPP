#include <iostream>
#define DIMENSIONE 10
#define X 3
#include <cstdlib>
using namespace std;
/*13. Caricare in un vettore N numeri dispari (N<=50)
e successivamente inserire in un secondo vettore tutti
i valori del primo che risultino multipli di un valore
X acquisito inizialmente. Visualizzare il secondo
vettore così ottenuto. Utilizzare le funzioni di
leggi_vettore() e multiplo() e tutte le funzioni che si
ritiene opportune per strutturare il problema*/

void leggi_vettore(int vettore[]);
bool multiplo(int valore);
void visualizza(int vettore[]);
void azzera(int vettore[]);

int main() {
	int vettore[DIMENSIONE], vettore2[DIMENSIONE];
	leggi_vettore(vettore);
	azzera(vettore2);
	
	for (int i=0; i<DIMENSIONE; i++) {
		if (multiplo(vettore[i])) {
			vettore2[i] = vettore[i];
		}
	}
	
	cout << "valore X: " << X << endl;
	cout << "vettore iniziale: ";
	visualizza(vettore);
	cout << "vettore finale: ";
	visualizza(vettore2);	

}

void visualizza(int vettore[]) {
	for(int i=0; i<DIMENSIONE; i++) {
		if (vettore[i]!=0) {
			cout << vettore[i] << " ";
		}		
	}
	cout << endl;
}

void leggi_vettore(int vettore[]) {
	for(int i=0; i<DIMENSIONE; i++) {
		vettore[i]= (2 * rand()%100) +1;
	}
}

void azzera(int vettore[]) {
	for(int i=0; i<DIMENSIONE; i++) {
		vettore[i]=0;
	}
}

bool multiplo(int valore) {
	if (valore%X==0) {
		return true;
	} else {
		return false;
	}
}

#include <iostream>
#define DIMENSIONE 90
#include <cstdlib>
using namespace std;

/* consegna:
Leggere in input un vettore di interi di dimensione N (N <=100)
e successivamente crearne un secondo contenente tutti gli elementi
del primo che risultano essere minori della media degli elementi
del primo compresi tra -100 e + 100.
Utilizzare le funzioni di leggi_vettore() e media() e tutte le
funzioni che si ritiene opportune per strutturare il problema.
*/

void leggi_vettore(int vettore[]);
int media(int vettore[]);
void visualizza(int vettore[]);
void azzera(int vettore[]);


int main() {
	int vettore[DIMENSIONE], vettore2[DIMENSIONE];
	leggi_vettore(vettore);
	azzera(vettore2);
	
	int m = media(vettore);
	for (int i=0; i<DIMENSIONE; i++) {
		if (vettore[i] < m) {
			vettore2[i] = vettore[i];
		}
	}
	
	cout << "vettore iniziale: ";
	visualizza(vettore);
	cout << "La media e' " << m << endl;
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
		vettore[i]=rand()% 400 -200;
	}
}

void azzera(int vettore[]) {
	for(int i=0; i<DIMENSIONE; i++) {
		vettore[i]=0;
	}
}

int media(int vettore[]) {
	int sum = 0;
	int c = 0;
	for (int i=0; i<DIMENSIONE; i++) {
		if (vettore[i] > -100 && vettore[i] < 100 ) {
			sum += vettore[i];
			c += 1;
		}
	}
	return sum/c;
}

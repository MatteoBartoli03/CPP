#include <iostream>
#define DIMENSIONE 10
#include <cstdlib>
using namespace std;

void leggi_vettore(int vettore[]);
void visualizza(int vettore[]);
void azzera(int vettore[]);

int main()
{
	int vettore[DIMENSIONE], vettore2[DIMENSIONE];
	leggi_vettore(vettore);
	azzera(vettore2);
	
	cout << "vettore iniziale: ";
	visualizza(vettore);
	cout << "vettore finale: ";
	visualizza(vettore2);	

}

void visualizza(int vettore[])
{
	for(int i=0; i<DIMENSIONE; i++) {
		if (vettore[i]!=0) {
			cout << vettore[i] << " ";
		}		
	}
	cout << endl;
}

void leggi_vettore(int vettore[])
{
	for(int i=0; i<DIMENSIONE; i++) {
		// diverso da zero
		//vettore[i]=rand()%10;
		//if (vettore[i]==0) {
		//	vettore[i]=rand()%10;
		//}
		
		// pari
		// vettore[i]= (2 * rand()%100) +1;
		
		// un numero da 0 a 100
		// rand()%100
		// un numero da -100 a 100
		// rand()%200-100 -> trova un numero da 0 a 200 e poi toglie 100
		// un numero da 100 a 200
		// rand()%100+100 -> trova un numero da 0 a 100 e poi aggiunge 100
	}
}

void azzera(int vettore[])
{
	for(int i=0; i<DIMENSIONE; i++) {
		vettore[i]=0;
	}
}

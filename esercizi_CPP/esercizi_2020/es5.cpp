#include <iostream>
#define DIMENSIONE 10
#include <cstdlib>
using namespace std;

void leggi_vettore(int vettore[]);
void inserisci_pari(int numero_da_inserire,int vettore[]);
void inserisci_dispari(int numero_da_inserire,int vettore[]);
void visualizza(int vettore[]);
void azzera(int vettore[]);
bool pari(int numero);


int main()
{
	int vettore[DIMENSIONE];
	int n_pari[DIMENSIONE];
	int n_dispari[DIMENSIONE];
	
	leggi_vettore(vettore);
	azzera(n_pari);
	azzera(n_dispari);
	for(int i=0; i<DIMENSIONE; i++)
	{
		if (pari(vettore[i])) inserisci_pari(vettore[i],n_pari);
								else
							  inserisci_dispari(vettore[i],n_dispari);
	
	}
	cout << "array iniziale: ";
	visualizza(vettore);
	cout << "array pari: ";
	visualizza(n_pari);
	cout << "array dispari: ";
	visualizza(n_dispari);

}
 

bool pari(int numero)
 {
 	return ((numero%2)==0);
 }

void inserisci_pari(int numero_da_inserire, int vettore[])
{
	for(int i=0; i<DIMENSIONE; i++) {
		if (vettore[i]==0){
			vettore[i] = numero_da_inserire;
			break;
		}
	}
}

void inserisci_dispari(int numero_da_inserire,int vettore[])
{
	for(int i=0; i<DIMENSIONE; i++) {
		if (vettore[i]==0){
			vettore[i] = numero_da_inserire;
			break;
		}
	}
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
		vettore[i]=rand()%10;
		if (vettore[i]==0) {
			vettore[i]=rand()%10;
		}
	}
}
void azzera(int vettore[])
{
	for(int i=0; i<DIMENSIONE; i++) {
		vettore[i]=0;
	}
}


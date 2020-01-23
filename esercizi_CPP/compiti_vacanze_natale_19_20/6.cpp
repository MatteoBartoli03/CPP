#include <iostream>
using namespace std;

int lenght = 20;
int v[20];
double media;
int pos, c = 0, s = 0;
int main() {
	for (int i = 0; i < lenght; i ++) {
		cout << "\ninserisci il valore di indice " << i+1 << ": ";
		cin >> v[i];
	}
	
	cout << "\nl'array:\n";
	for (int i = 0; i < lenght; i ++) {
		cout << v[i] << ", "; 
	}

	cout << "\necco i numeri pari del vettore:\n";
	for (int i = 0; i < lenght; i ++) {
		if ((v[i]%2) == 0) {
			cout << v[i] << ", ";
		}
	}
	
	cout << "\necco i numeri in pos pari del vettore:\n";
	for (int i = 0; i < lenght; i ++) {
		if (((i+1)%2) == 0) {
			cout << v[i] << ", ";
		}
	}
	
	for (int i = 0; i < lenght; i ++) {
		if (v[i] > 0) {
			v[i] += 1;
		} else if (v[i] < 0) {
			v[i] -= 1;
		}
	}
	cout << "\necco il nuovo array dopo aver aggiunto un'unità ai numeri positivi e tolta una a quelli negativi:\n";
	for (int i = 0; i < lenght; i ++) {
		cout << v[i] << ", ";
		s += v[i];
	}
	
	cout << "\ninserire la posizione dell'elemnto da visualizzare:\n";
	cin >> pos;
	if (pos > lenght || pos < 1) {
		cout << "\nla posizione insierita è sbagliata\n";
	} else {
	    cout << "\necco l'elemento della posizione corrispondente:\n" << v[pos-1];
	}
	
	media = s/lenght;
	for (int i = 0; i < lenght; i ++) {
		if (v[i] > media) {
			c += 1;
		}
	}
	cout << "\nci sono " << c << " numeri superiori alla media ed essi sono:\n";
	for (int i = 0; i < lenght; i ++) {
		if (v[i] > media) {
			cout << v[i] << ", ";
		}
	}
	
	c = v[0];
	v[0] = v[lenght-1];
	v[lenght-1] = c;
	cout << "\nvettore dopo aver scambiato primo ed ultimo elemento:\n";
	for (int i = 0; i < lenght; i ++) {
		cout << v[i] << ", ";
	}
	c = v[0];
	
	for (int i = 0; i < lenght; i ++) {
		if ( v[i] > c ) {
			c = v[i];
			s = i;
		}
	}
	cout << "\nil valore maggiore è " << c << " in posizione " << s;
	
	return 0;
}

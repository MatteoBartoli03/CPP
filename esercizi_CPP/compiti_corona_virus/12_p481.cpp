#include <iostream>
using namespace std;

int INS_INT(string str);
int prodotto(int a, int b);

int a, b;

int main() {
	
	a = INS_INT("Inserisci il primo valore: ");
	b = INS_INT("Inserisci il secondo valore: ");
	
	prodotto(a, b);
}

int INS_INT(string str) {
	int x;
	cout << str;
	cin >> x;
	
	while(x <= 0) {
		cout << "Inserisci nuovamente il valore, dev'essere maggiore di 0: ";
		cin >> x;
	}
	
	cout << "\n";
	return x;
}

int prodotto(int a, int b){
	int res = 0;

	for(int i=0; i<b; i++){
		res += a; 
	}
	
	cout << "Il prodotto tra i due valori è ";
	cout << res;
}

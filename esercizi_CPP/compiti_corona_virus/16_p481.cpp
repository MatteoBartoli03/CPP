#include <iostream>
using namespace std;

int INS_INT(string str);
void multipli(int a);

int main() {
	int a;
	a = INS_INT("inserisci il numero, di cui vuoi conoscere i primi 12 multipli: ");
	
	multipli(a);
}

int INS_INT(string str) {
	int x;
	cout << str;
	cin >> x;
	return x;
}

void multipli(int a){	
	for(int x=0; x<12; x++){
		cout << x*a << " ";
	}
}

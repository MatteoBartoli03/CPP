#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream f("input.txt");
	string s;
	if(!f) {
		cout << "Il file non esiste!";
		return 1;
	}

	while(f.good()){
		getline(f, s); //legge tutta la riga dal file e la mette nella variabile s
		cout<<s<<endl;
	}
	f.close();

	ofstream g("output.txt"); //se il file non esiste lo crea, altrimenti lo sovrascrive!
	if(!g) {
		cout << "Errore nella creazione del file!";
		return 1;
	}

	g << "ciao" << endl;
	g << 1 << endl;
	g << 1.3 << endl;
	
	g.close();
	cout << "Scrittura avvenuta con successo!";

	return 0;
}

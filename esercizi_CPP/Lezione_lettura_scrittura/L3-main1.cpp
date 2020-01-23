#include <iostream>
#include <fstream>
using namespace std;	


int main(int argc, char** argv) {
	
	char carattere;
	
	fstream filetesto; //costruttore : istanzio l'oggetto ifstream a filetesto
	
	//filetesto.open("dati.txt",fstream::out);
	filetesto.open("dati.txt",fstream::in);
	filetesto >> carattere;
    cout << "Ho letto " << carattere;
	filetesto.close();
	system("PAUSE");
	return 0;
}

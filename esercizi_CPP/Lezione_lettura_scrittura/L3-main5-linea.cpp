#include <iostream>
#include <fstream>      // std::fstream
#include <string>
using namespace std;

int main () {

  char avanti='s';
  string nome;
  fstream fs;
  // fs.open ("test.txt", std::fstream::in | std::fstream::out ); // questo sovrascrive
  fs.open ("test.txt", fstream::in | fstream::out | fstream::app );
  while (avanti=='s') {
	  cout << "Inserisci nome: ";
	  cin.ignore(); //questo server per pulire l'input buffer
	  getline (std::cin, nome);
	  fs << nome << "\n";
	  cout << "Altro nome (s/n) ? ";
	  cin >> avanti;
   }
  fs.close();
  return 0;
}

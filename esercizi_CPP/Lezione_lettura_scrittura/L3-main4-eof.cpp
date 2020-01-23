#include <iostream>
#include <fstream>     
using namespace std;

int main () {

  char carattere;

  fstream fs;
  // fs.open ("test.txt", std::fstream::in | std::fstream::out ); // questo sovrascrive
  fs.open ("test.txt", fstream::in | fstream::out | fstream::app );
  
  while (!fs.eof())  {
  fs >> carattere;  // l'operatore >> è in overload sui due oggetti :-) 
  cout << carattere;
	}
	
  fs.close();

  return 0;
}

#include <iostream>
#include <fstream>     
using namespace std;

int main () {

  char carattere;

  std::fstream fs;
  // fs.open ("test.txt", std::fstream::in | std::fstream::out ); // questo sovrascrive
  fs.open ("test.txt", std::fstream::in );
  
  fs >> carattere;  // l'operatore >> è in overload sui due oggetti :-) 

  std::cout << " Ho letto " << carattere;

  fs.close();

  return 0;
}

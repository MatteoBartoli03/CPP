#include <iostream>
#include <fstream>      // std::fstream
#include <string>

int main () {

  std::string nome;
  std::fstream fs;
  fs.open ("test.txt", std::fstream::in | std::fstream::out | std::fstream::app );
  while (!fs.eof()) {
	  std::getline (fs, nome);
	  std::cout << nome << "\n";
   }
  fs.close();
  return 0;
}

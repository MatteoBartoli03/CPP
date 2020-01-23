// fstream::open / fstream::close
#include <fstream>      // std::fstream

int main () {

  std::fstream fs;
  // fs.open ("test.txt", std::fstream::in | std::fstream::out ); // questo sovrascrive
  fs.open ("test.txt", std::fstream::in | std::fstream::out | std::fstream::app );

  fs << " Prova di scrittura su file ";

  fs.close();

  return 0;
}

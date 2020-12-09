#include <stdio.h>
#include <assert.h>
#include <iostream>
#include <fstream>
using namespace std;
const int N_MAX = 100000000;

int main() {
	int i, a;
	 
	//freopen("input/6", "r", stdin);
	ifstream fs("input/6");

	//freopen("output/6", "w", stdout);
	ofstream ofs("output/6");

	char carattere;
	
	do {
		//scanf("%c", &carattere);
		fs >> carattere;
		fs.get(carattere);
		if (carattere == ' ') {
			cout << "a";
		}		
		if (carattere != 'a' && carattere != 'e' && carattere != 'i' && carattere != 'o' && carattere != 'u' && carattere != 'y') {
			//printf("%c", carattere);
			ofs << carattere;
		}
	} while (!fs.eof());
	
}

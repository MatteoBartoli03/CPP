 #include <cstdio>
 #include <fstream>
 using namespace std;

 int main() {

 fstream filediinput,filedioutput;
 int N;
 
 // Legge da input.txt e scrive su output.txt
 filediinput.open("input.txt", std::fstream::in );
 filedioutput.open("output.txt", std::fstream::out );
 // Legge N
 filediinput >> N;
 int cnt = 1;
 // Finche’ N non e’ 1...
 while (N != 1) {
		 // Aumenta il numero di passaggi
		 cnt++;
		// Calcola l’N successivo
		 N = (N%2) ? (3*N+1) : (N/2);
		 filedioutput << N << endl;
 }
 
 }


 #include <cstdio>
 #include <iostream>
 using namespace std;

 int main() {
 // Legge da input.txt e scrive su output.txt
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 // Legge N
 int N;
 cin >> N;
 int cnt = 1;
 // Finche’ N non e’ 1...
 while (N != 1) {
 // Aumenta il numero di passaggi
 cnt++;
// Calcola l’N successivo
 N = (N%2) ? (3*N+1) : (N/2);
 cout << N << endl;
 }
 // Stampa il risultato
 
 }


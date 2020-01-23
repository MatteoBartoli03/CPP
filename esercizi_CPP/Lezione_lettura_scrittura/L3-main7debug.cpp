 #include <cstdio>
 #include <iostream>
 using namespace std;

 int main() {
 // Legge da input.txt e scrive su output.txt
 //freopen("input.txt", "r", stdin);
 //freopen("output.txt", "w", stdout);
 // Legge N
 int N;
 scanf("%d",&N);
 int cnt = 1;
 // Finche’ N non e’ 1...
 while (N != 1) {
			 // Aumenta il numero di passaggi
			 cnt++;
			// Calcola l’N successivo (? operatore ternario)
			 N = (N%2) ? (3*N+1) : (N/2);
			 printf("%d\n",N);
 }
 // Stampa il risultato
 
 }


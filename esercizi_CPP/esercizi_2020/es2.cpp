#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main(){
	int N=6, K=6;
	int V[N][K];
	srand(time(NULL));
	
	for (int i=0; i<N; i++){
		for (int c=0; c<K; c++){
			V[i][c] = rand()/((RAND_MAX + 1u)/6);
		}
	}
	
	for (int i=0; i<N; i++){
		cout<<"giudice "<< i+1 << ": ";
		for (int c=0; c<K; c++){
			cout<< "(candidato n" << c+1 << ") "<< V[i][c]<< " ";
		}
		cout<< endl;
	}
	
	int sum;
	int a = 0;
	int x = 0; 
	for (int i=0; i<N; i++){
		for (int c=0; c<K; c++) {
			a += V[i][c];
		}
		if ( i==0 ){
			sum = a;
		}
		if (sum > a){
			sum = a;
			x = i;
		}
		a = 0;
	}
	cout << "il giudice più severo è il numero " << x+1 << endl;
	
	sum = 0;
	a = 0;
	x = 0;
	for (int d=0; d<K; d++){
		for (int i=0; i<N; i++){
			a += V[i][d];
		}
		if (sum < a){
			sum = a;
			x = d;
		}
		a = 0;
	}
	cout << "il ragazzo più intelligente è il numero " << x+1 << endl;

	return 0;
}


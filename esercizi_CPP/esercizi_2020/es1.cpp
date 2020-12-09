#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main(){
	int N = 10,b;
	int A[N];
	int max=0,min;
	
	srand(time(NULL));
	for (int i=0; i<N; i++){		
		A[i]=rand();
		if (A[i]>=A[max]){
			max = i;
		}
	}
	min = max;
	
	for (int c=0; c<N; c++){
		if (A[c] < A[min]){
			min = c;
		}
	}

	cout << "stampa array" << endl;
	for (int x=0; x<N; x++){		
		   cout<<A[x]<<endl;
	}

	
	b = A[max];
	A[max] = A[min];
	A[min] = b;
	
	cout << endl << "stampa array con min e max invertiti" << endl;
	for (int x=0; x<N; x++){		
		   cout<<A[x]<<endl;
	}

	return 0;
}


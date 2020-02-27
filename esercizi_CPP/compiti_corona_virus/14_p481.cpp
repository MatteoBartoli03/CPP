#include <iostream>
using namespace std;

int main() {
	int N = 10;
	int tr[N][N];
	
	tr[0][0] = 1;
	for (int x=1; x<N; x++){
		tr[0][x] = 0;
	}
	
	for (int y=1; y<N; y++){
		tr[y][0] = 1;
		for (int x=1; x<N; x++){
			tr[y][x] = tr[y-1][x] + tr[y-1][x-1];
		}
	}
	
	for (int y=0 ; y<N ; y++ ){
	    for (int x=1 ; x<(N-y)*3 ; x++ )
    		cout << " ";
    	for (int x=0 ; x<=y ; x++ )
			printf("%6d", tr[y][x]);
    	cout << "\n";
  }
}

#include <iostream>
#include <stdio.h>
#include <assert.h>

int main() {
	int N, i;
	
	freopen("input/3", "r", stdin);
	freopen("output/3", "w", stdout);
	
	assert( 1 == scanf("%d", &N) );

	int lista[N];
	
	for( i = 0; i < N; i++) {
		assert( 1 == scanf("%d", &lista[i]) );
		
	}
	
	for( i = 0; i < N; i++) {
		if (lista[i] % 2 == 0) {
			printf("%d ", lista[i]/2);
		} else {
			printf("%d ", lista[i]*2);
		}
	}
	
}

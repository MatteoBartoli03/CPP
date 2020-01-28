#include <iostream>
#include <stdio.h>
#include <assert.h>

int main() {
	int N, i;
	
	freopen("input/4", "r", stdin);
	freopen("output/4", "w", stdout);
	
	assert( 1 == scanf("%d", &N) );

	int lista[N];
	
	for( i = 0; i < N; i++) {
		assert( 1 == scanf("%d", &lista[i]) );
		
	}
	
	for( i = 0; i < N; i++) {
		if (lista[i] % 2 != 0) {
			std::cout << lista[i];
			std::cout << " ";
		}
	}
}

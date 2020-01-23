#include <iostream>
#include <stdio.h>
#include <assert.h>

int main() {
	int N, sum, i, min, max;
	
	freopen("input/2", "r", stdin);
	freopen("output/2", "w", stdout);
	
	assert( 1 == scanf("%d", &N) );

	int lista[N];
	
	for( i = 0; i < N; i++) {
		assert( 1 == scanf("%d", &lista[i]) );
		
	}
	min = lista[0];
	max = lista[0];
	
	for( i = 0; i < N; i++) {
		if (lista[i] > max) {
			max = lista[i];
		} else if (lista[i] < min) {
			min = lista[i];
		}
	}
	
	sum = min + max;
	std::cout << sum;
	//printf("%n%d", sum);
}

#include <stdio.h>
#include <assert.h>

int main() {
	int n, i;
	
	freopen("input/3", "r", stdin);
	freopen("output/3", "w", stdout);
	
	assert( 1 == scanf("%d", &n) );

	n = n*2;
	
	int lista[n];
	
	for( i = 0; i < n; i++) {
		assert( 1 == scanf("%d", &lista[i]));
	}
	
	for (i = 0; i < n; i += 2) {
		printf("%d ", lista[i]+lista[i+1]);
	}
			

}

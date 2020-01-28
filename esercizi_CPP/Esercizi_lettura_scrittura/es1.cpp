#include <stdio.h>
#include <assert.h>

int main() {
	int n, i;
	
	freopen("input/1", "r", stdin);
	freopen("output/1", "w", stdout);
	
	assert( 1 == scanf("%d", &n) );

	int lista[n];
	
	for( i = 0; i < n; i++) {
		assert( 1 == scanf("%d", &lista[i]));
	}
	
	for (i = 0; i < n-1; i++) {
		printf("%d ", lista[i+1] + lista[i]);
	}
	
}

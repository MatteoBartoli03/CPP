#include <stdio.h>
#include <assert.h>

int main() {
	int n, i;
	
	freopen("input/2", "r", stdin);
	freopen("output/2", "w", stdout);
	
	assert( 1 == scanf("%d", &n) );

	int lista[n];
	
	for( i = 0; i < n; i++) {
		assert( 1 == scanf("%d", &lista[i]));
	}
	
	for (i = 0; i < n; i++) {
		if (lista[i]%2 == 0) {
			printf("%d ", lista[i]+1);
		} else {
			printf("%d ", lista[i]-1);
		}
			
	}
	
}

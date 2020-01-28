#include <stdio.h>
#include <assert.h>

int main() {
	int n, i;
	
	freopen("input/5", "r", stdin);
	freopen("output/5", "w", stdout);
	
	assert( 1 == scanf("%d", &n) );

	n = n*3;
	
	int lista[n];
	
	for( i = 0; i < n; i++) {
		assert( 1 == scanf("%d", &lista[i]));
	}
	
	for (i = 0; i < n; i += 3) {
		printf("%d ", (lista[i]+lista[i+1]+lista[i+2])/3);
	}
			

}

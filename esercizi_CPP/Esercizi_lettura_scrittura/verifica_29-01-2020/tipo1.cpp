#include <stdio.h>
#include <assert.h>

int main() {
	int N, i;
	
	freopen("input/*", "r", stdin);
	freopen("output/*", "w", stdout);
	
	assert( 1 == scanf("%d", &N) );

	int lista[N];
	
	for (i=0; i<N; i++) {
		assert( 1 == scanf("%d", &lista[i]) );
	}
	
	printf("%d", );
	
	// se è una lista metti lo spazio dopo ogni numero
}

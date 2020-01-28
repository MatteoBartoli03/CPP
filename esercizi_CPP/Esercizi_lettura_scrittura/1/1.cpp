
#include <stdio.h>
#include <assert.h>

int main() {
	int N, sum, i;
	
	freopen("input/1", "r", stdin);
	freopen("output/1", "w", stdout);
	
	assert( 1 == scanf("%d", &N) );

	int lista[N];
	
	for( i = 0; i < N; i++) {
		assert( 1 == scanf("%d", &lista[i]) );
		sum += lista[i];
	}
	printf("%d", sum);
}

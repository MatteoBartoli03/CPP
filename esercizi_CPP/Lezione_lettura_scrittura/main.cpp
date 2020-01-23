#include <stdio.h>
#include <assert.h>

int main() {
	int N, sum, i;
	
	freopen("input/input1.txt", "r", stdin);
	freopen("output/output1.txt", "w", stdout);
	
	assert( 1 == scanf("%d", &N) );

	int lista[N];
	
	for( i = 0; i < N; i++) {
		assert( 1 == scanf("%d", &lista[i]) );
		sum += lista[i];
	}
	printf("%d", sum);
}

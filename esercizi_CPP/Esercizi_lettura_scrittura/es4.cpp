#include <stdio.h>
#include <assert.h>

int main() {
	int n, i, y , a, m, sum;
	
	freopen("input/4", "r", stdin);
	freopen("output/4", "w", stdout);
	
	assert( 1 == scanf("%d", &n) );
	
	for (i = 0; i < n; i++) {
		assert( 1 == scanf("%d", &m) );
		for (y = 0; y < m; y++) {
			assert( 1 == scanf("%d", &a) );
			sum += a;
		}
	
	}
	printf("%d", sum);
	
}

#include <stdio.h>

int main() {
	int n, i, j;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		for(j=1; j<=n; j++) {
			if(i%2==1) {
				for(j=(i+1)*n; j>i*n; j--) {
					printf("%d ", j);
				}
			} else {
				for(j=1; j<=n; j++) {
					printf("%d ", i*n+j);
				}
			}
			//printf("%d ", i*n+j);
		} printf("\n");
	}
}

//진약수의 합
#include <stdio.h>
int main() {
	int n, sum=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(i==1) printf("1");
		else if(n%i==0 && i!=n && i!=1){
			printf(" + %d", i);
			sum = sum + i;
		}
	}
	printf(" = ");
	printf("%d", sum+1);
	return 0;
}

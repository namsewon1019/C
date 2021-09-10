//자연수의 합
#include <stdio.h>
int main() {
	int a, b, sum;
	scanf("%d %d", &a, &b);
	printf("%d",a);
	sum = a;
	for(int i=a+1; i<=b; i++){
		sum = sum + i;
		printf(" + %d", i);
		//printf(" + ");
	}
	printf(" = ");
	printf("%d",sum);
	return 0;
}

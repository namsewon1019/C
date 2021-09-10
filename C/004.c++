//나이 차이
#include <stdio.h>
int main() {
	int age[101]={};
	int n, box, jebal=0;
	scanf("%d", &n);
	for(int i=0; i<n;i++){
		scanf("%d",&age[i]);
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(age[i]>age[j]){
				box=age[i];
				age[i]=age[j];
				age[j]=box;
			}
		}
	}
	//printf("%d %d",age[0],age[n-1]);
	jebal = age[0] - age[n-1];
	printf("%d", jebal);
	return 0;
}

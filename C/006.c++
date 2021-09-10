//숫자만 추출
#include <stdio.h>
int main() {
	char str[50]={};
	scanf("%s", str);
	int i, box=0, count=0,b=0;
	for(i = 0; i < 50; i++)
	if(str[i] >= '0' && str[i] <= '9'){
		if(str[i]!='0'){
		//printf("%c", str[i]);
		}
		b=b*10 + (str[i]-48);
		
	}
	printf("%d\n", b);
	for(int i=1; i<=b; i++){
	if(b%i==0){
			count++;
		}
	}
	printf("%d", count);
	return 0;
}

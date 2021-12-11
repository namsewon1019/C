#include <stdio.h>

int count = 1, n;
int namsewon(int list[], int left, int right) {
	int pivot, temp, low, high;
	low = left;
	high = right+1;
	pivot = list[left];
	
	while(1){
		while(1){
			low += 1;
			if(list[low] < pivot)
				break;
		}
		while(1){
			high -= 1;
			if(list[high] > pivot || high == left)
				break;
		}
		
		if(low < high){
			temp = list[low];
			list[low] = list[high];
			list[high] = temp;
		}
		else
			break;
	}
	temp = list[left];
	list[left] = list[high];
	list[high] = temp;
	
	printf("%d´Ü°è :", count++);
	for(int i = 0; i < n; i++){
		printf(" %d", list[i]);
	}
	printf("\n");
	return high;
}

void namsort(int list[], int left, int right) {
	if(left<right) {
		int q=namsewon(list, left, right);
		namsort(list, left, q-1);
		namsort(list, q+1, right);
	}
}

int main() {
	scanf("%d", &n);
	int list[n];
	for(int i=0; i<n; i++) {
		scanf("%d", &list[i]);
	}
	namsort(list, 0, n-1);
}

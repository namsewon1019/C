#include <stdio.h>
int key, i, arr[100], fkey, count;

int search(int start, int end)
{
	count++;
	int middle;
	if(start <= end){
	middle = (start+end)/2;
	if(key == arr[middle]) return count;
	else if(key > arr[middle]) return search(middle+1, end);
	else if(key < arr[middle]) return search(start, middle-1);
	}
	return -1;
}

int main()
{
	scanf("%d", &key);
	for(i=0; i<key; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &fkey);
	int dne = search(0, key-1);
		if(dne == -1) printf("Å½»ö½ÇÆĞ");
		else printf("%d", count);
}



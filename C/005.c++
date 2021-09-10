//나이계산
#include <stdio.h>
int main() {
	int f, b;
	char m;
	scanf("%d%c%d", &f, &m, &b);
	b /= 1000000;
	f /= 10000;
	if (b == 1)
	{
		f += 1900;
		f = 2020 - f;
		printf ("%d M", f);
	}
	else if (b == 2)
	{
		f += 1900;
		f = 2020 - f;
		printf ("%d W", f);
	}
	else if (b == 3)
	{
		f += 2000;
		f = 2020 - f;
		printf ("%d M", f);
	}
	else if (b == 4)
	{
		f += 2000;
		f = 2020 - f;
		printf ("%d W", f);
	}
	
	return 0;
}

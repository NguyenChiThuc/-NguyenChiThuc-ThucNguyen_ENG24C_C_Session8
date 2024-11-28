#include <stdio.h>

int main()
{
	int a[100];
	int i;
	for ( i = 0; i <= 10; i ++)
		a[i] = i;
	for ( i = 10; i >=0; i --)
		printf("%d ", a[i]);
	return 0;
}

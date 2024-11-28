#include <stdio.h>

int main()
{
	int a[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n;
	scanf("%d", &n);
	int vi_tri = -1;
	int i;
	for ( i = 0; i < 11; i ++)
		if (a[i] == n)
		{
			vi_tri = i;
			break;
		}
	if (vi_tri != -1)
		printf("Vi tri phan tu trong mang la %d.", vi_tri + 1);
	else
		printf("Phan tu khong ton tai trong mang.");
	return 0;
}

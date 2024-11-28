#include <stdio.h>

int main()
{
	int n, m;
	printf("Nhap so hang cua mang: ");
	scanf("%d", &n);
	printf("Nhap so cot cua mang: ");
	scanf("%d", &m);
	int a[n][m];
	printf("Nhap mang 2 chieu:\n");
	for (int i = 0; i < n; i ++)
		for (int j = 0; j < m; j ++)
			scanf("%d", &a[i][j]);
	int FOPT = -99999;
	for (int i = 0; i < n; i ++)
	{
		for (int j = 0; j < m; j ++)
			if (a[i][j] > FOPT)
				FOPT = a[i][j];
	}
	printf("Phan tu lon nhat trong mang la: %d", FOPT);
	return 0;
}

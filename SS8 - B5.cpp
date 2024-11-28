#include <stdio.h>

int main()
{
	int n, m;
	printf("Nhap so cot cua mang: ");
	scanf("%d", &n);
	printf("Nhap so hang cua mang: ");
	scanf("%d", &m);
	int a[n][m];
	printf("Nhap mang 2 chieu:\n");
	for (int i = 0; i < n; i ++)
		for (int j = 0; j < m; j ++)
			scanf("%d", &a[i][j]);
	int Tong = 0;
	for (int i = 0; i < n; i ++)
	{
		for (int j = 0; j < m; j ++)
		{
			if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
				Tong += a[i][j];
		}
	}
	printf("Tong cac phan tu o bien la: %d", Tong);
	return 0;
}

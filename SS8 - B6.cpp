#include <stdio.h>

int main()
{
	int n;
	printf("Nhap kich thuoc cua ma tran: ");
	scanf("%d", &n);
	int a[n][n];
	printf("Nhap ma tran vuong:\n");
	for (int i = 0; i < n; i ++)
	
		for (int j = 0; j < n; j ++)
			scanf("%d", &a[i][j]);
	int Tong = 0;
	printf("Phan tu tren duong cheo chinh la: ");
	for (int i = 0; i < n; i ++)
	{
		printf("%d ", a[i][i]);
		Tong += a[i][i];
	}
	printf("\n");
	printf("Tong cac phan tu tren duong cheo chinh la: %d", Tong);
	return 0;
}

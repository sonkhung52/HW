#include "Header.h"

void NhapMang(int a[][100], int &m, int &n)
{
	printf("Nhap so hang: ");
	scanf("%d", &m);
	printf("Nhap so cot: ");
	scanf("%d", &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ", i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}
}

void XuatMang(int a[][100], int m, int n)
{
	printf("Mang cua ban la: \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int KiemTraHang(int a[][100], int m, int n, int x, int y)
{
	for (int j = 0; j < n; j++)
	{
		if (a[x][y]>a[x][j])
			return 0;
	}
	return 1;
}
int KiemTraCot(int a[][100], int m, int n, int x, int y)
{
	for (int i = 0; i < m; i++)
	{
		if (a[x][y] < a[i][y])
			return 0;
	}
	return 1;
}

void YenNgua(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KiemTraHang(a, m, n, i, j) && KiemTraCot(a, m, n, i, j))
			{
				printf("a[%d][%d] = %d la phan tu yen ngua\n", i + 1, j + 1, a[i][j]);
			}
		}
	}
}
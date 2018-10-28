#include "Header.h"

void NhapMang(int a[][100][100], int &m, int &n, int &k)
{
	printf("Nhap so hang: ");
	scanf("%d", &m);
	printf("Nhap so cot: ");
	scanf("%d", &n);
	printf("Nhap so lop: ");
	scanf("%d", &k);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int t = 0; t < k; t++)
			{
				printf("a[%d][%d][%d] = ", i + 1, j + 1, t + 1);
				scanf("%d", &a[i][j][t]);
			}
		}
	}
}

void TimKiem(int a[][100][100], int m, int n, int k)
{
	printf("Nhap gia tri muon tim: ");
	int x;
	scanf("%d", &x);
	printf("Vi tri cua x la: ");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int t = 0; t < k; t++)
			{
				if (a[i][j][t] == x) printf(" a[%d][%d][%d] ", i + 1, j + 1, t + 1);
			}
		}
	}
}
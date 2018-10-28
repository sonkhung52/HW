#include "Header.h"


void NhapMang(MaTran &a)
{
	printf("Nhap so hang: ");
	scanf("%d", &a.m);
	printf("Nhap so cot: ");
	scanf("%d", &a.n);
	for (int i = 0; i < a.m; i++)
	{
		for (int j = 0; j < a.n; j++)
		{
			printf("a[%d][%d] = ", i + 1, j + 1);
			scanf("%d", &a.MT[i][j]);
		}
	}
}

void XuatMang(MaTran &a)
{
	for (int i = 0; i < a.m; i++)
	{
		for (int j = 0; j < a.n; j++)
		{
			printf("%d ", a.MT[i][j]);
		}
		printf("\n");
	}
}

void Cong(MaTran a, MaTran b, MaTran &c)
{
	c.m = a.m;
	c.n = a.n;
	for (int i = 0; i < a.m; i++)
	{
		for (int j = 0; j < a.n; j++)
		{
			c.MT[i][j] = a.MT[i][j] + b.MT[i][j];
		}
	}
}


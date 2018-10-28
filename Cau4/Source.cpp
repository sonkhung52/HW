#include "Header.h"

void NhapMang(MaTran &a)
{
	printf("Nhap so hang: ");
	scanf("%d", &a.Hang);
	printf("Nhap so cot: ");
	scanf("%d", &a.Cot);
	for (int i = 0; i < a.Hang; i++)
	{
		for (int j = 0; j < a.Cot; j++)
		{
			printf("a[%d][%d] =", i + 1, j + 1);
			scanf("%d", &a.MT[i][j]);
		}
	}
}

void Tao(MaTran a,Obj aa[],int &cnt)
{
	int x = 0;
	int y = 0;
	cnt = 0;
	for (int i = 0; i < a.Hang*a.Cot; i++)
	{
		if (a.MT[x][y] == 0)
		{
			if (y == a.Cot - 1)
			{
				y = 0;
				x++;
			}
			else
			{
				y++;
			}
			continue;
		}
		aa[cnt].Value = a.MT[x][y];
		aa[cnt].Hang[aa[cnt].n] = x;
		aa[cnt].Cot[aa[cnt].n] = y;
		aa[cnt].n++;
		int xx = x;
		int yy = y;
		for (int j = i + 1; j < a.Hang*a.Cot; j++)
		{
			if (yy == a.Cot - 1)
			{
				yy = 0;
				xx++;
			}
			else
			{
				yy++;
			}
			if (a.MT[xx][yy] == a.MT[x][y])
			{
				aa[cnt].Hang[aa[cnt].n] = xx;
				aa[cnt].Cot[aa[cnt].n] = yy;
				a.MT[xx][yy] = 0;
				aa[cnt].n++;
			}
		}
		if (y == a.Cot - 1)
		{
			y = 0;
			x++;
		}
		else
		{
			y++;
		}
		cnt++;
	}
}

void TrungNhau(Obj a[],int m, Obj b[],int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i].Value == b[j].Value)
			{
				printf("(%d):", a[i].Value);
				for (int t = 0; t < a[i].n; t++)
				{
					printf("a[%d][%d] ", a[i].Hang[t] + 1, a[i].Cot[t] + 1);
				}
				for (int t = 0; t < b[j].n; t++)
				{
					printf("b[%d][%d] ", b[j].Hang[t] + 1, b[j].Cot[t] + 1);
				}
				printf("\n");
			}
		}
	}
}


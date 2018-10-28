#include "Header.h"

int Menu1()
{
	printf("1. Nhap mang\n");
	printf("2. Sap xep giam dan: tu trai sang phai, tu tren xuong duoi, tu duong cheo\n");
	printf("3. Sap xep tang tren hang nhung giam tren cot\n");
	printf("4. Sap xep giam tren hang nhung tang tren cot\n");
	printf("5. Thoat\n");
	printf("Nhap lua chon cua ban: ");
	int mod;
	scanf("%d", &mod);
	return mod;
}

int Menu2()
{
	printf("1. Quay lai menu chinh\n");
	printf("2. Thoat\n");
	printf("Nhap lua chon cua ban: ");
	int mod;
	scanf("%d", &mod);
	return mod;
}

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

void XuatMang(int a[][100], int &m, int &n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void HoanDoi(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void SapXep1(int a[][100], int &m, int &n)
{
	for (int tmp = 1; tmp < m*n; tmp++)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == m-1 && j == n-1)
					continue;
				int ii = i;
				int jj = j;
				if (jj == n - 1)
				{
					ii++;
					jj = 0;
				}
				else
				{
					jj++;
				}
				if (a[i][j] < a[ii][jj]) 
					HoanDoi(a[i][j], a[ii][jj]);
			}
		}
	}
}

void SapXep2(int a[][100], int &m, int &n)
{
	SapXep1(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
			HoanDoi(a[i][j], a[i][n - j - 1]);
		}
	}
}

void SapXep3(int a[][100], int &m, int &n)
{
	SapXep1(a, m, n);
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m / 2; i++)
		{
			HoanDoi(a[i][j], a[m - i - 1][j]);
		}
	}
}
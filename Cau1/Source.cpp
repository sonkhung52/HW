#include "Header.h"

void NhapMang(int a[], int &n)
{
	printf("Nhap so phan tu mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d:  ", i + 1);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[], int n)
{
	printf("Xuat mang: \n");
	for (int i = 0; i < n; i++)
	{
		printf("A[%d] = %d\n", i + 1, a[i]);
	}
}

void MangTam(int a[], int b[], int n, int &m)
{
	m = n;
	for (int i = 0; i< n; i++) b[i] = a[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (b[j] == b[i])
			{
				m--;
				for (int k = j; k < n; k++)
				{
					b[k] = b[k + 1];
				}
			}
		}
	}
}
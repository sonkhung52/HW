#include "Header.h"

int main()
{
	int n, m;
	int a[100][100] = {};
	int mod;
	NhapMang(a, m, n);
	do
	{
		system("cls");
		mod = Menu1();
		if (mod > 4) break;
		switch (mod)
		{
		case 1:
			NhapMang(a, m, n);
			break;
		case 2:
			SapXep1(a, m, n);
			XuatMang(a, m, n);
			break;
		case 3:
			SapXep2(a, m, n);
			XuatMang(a, m, n);
			break;
		case 4:
			SapXep3(a, m, n);
			XuatMang(a, m, n);
			break;
		}
		mod = Menu2();
	} while (mod < 2);
}
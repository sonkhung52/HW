#include "Header.h"

int main()
{
	int m, n;
	int a[100][100] = {};
	NhapMang(a, m, n);
	system("cls");
	XuatMang(a, m, n);
	YenNgua(a, m, n);
	_getch();
}
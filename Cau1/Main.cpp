#include "Header.h"

void main()
{
	int a[100], b[100], n, m;
	NhapMang(a, n);
	XuatMang(a, n);
	MangTam(a, b, n, m);
	int x = -m;
	XuatMang(b, x);
	_getch();
}
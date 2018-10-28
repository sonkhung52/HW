#include "Header.h"
#include <iostream>
int main()
{
	MaTran a, b;
	NhapMang(a);
	NhapMang(b);
	Obj aa[100];
	Obj bb[100];
	int m = 0;
	int n = 0;
	Tao(a, aa, m);
	Tao(b, bb, n);
	TrungNhau(aa, m, bb, n);
	_getch();
}
#ifndef __HEAD_H__
#define __HEAD_H__
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

struct MaTran
{
	int MT[100][100];
	int m, n;
};

void NhapMang(MaTran &a);
void XuatMang(MaTran &a);
void Cong(MaTran a, MaTran b, MaTran &c);

#endif
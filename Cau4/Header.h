#ifndef __HEAD_H__
#define __HEAD_H__
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct MaTran
{
	int MT[100][100];
	int Hang = 0;
	int Cot = 0;
};

struct Obj
{
	int Value;
	int n = 0;
	int Hang[100];
	int Cot[100];
};


void NhapMang(MaTran &a);
void Tao(MaTran a, Obj aa[],int &m);
void TrungNhau(Obj a[], int m, Obj b[], int n);

#endif
#ifndef __HEAD_H__
#define __HEAD_H__
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void NhapMang(int a[][100], int &m, int &n);
void XuatMang(int a[][100], int m, int n);
int KiemTraHang(int a[][100], int m, int n, int x, int y);
int KiemTraCot(int a[][100], int m, int n, int x, int y);
void YenNgua(int a[][100], int m, int n);
#endif
#pragma once
#include"Matrix4x4.h"
#include"Vector3.h"
#include<Novice.h>

static const int kRowHeight = 20;
static const int kColumnWidth = 60;

void MatrixScreenPrintf(int x, int y, Matrix4x4 matrix,const char* label) {
	Novice::ScreenPrintf(x , y, "%s", label);
	for (int row = 0; row < 4; ++row) {
		for (int colum = 0; colum < 4; ++colum) {
			Novice::ScreenPrintf(
				x + colum * kColumnWidth, 20+y + row * kRowHeight, "%6.02f",
				matrix.m[row][colum]
			);
		}
	}
}

void VectorScreenPrintf(int x, int y, const Vector3& vector, const char* label) {
	Novice::ScreenPrintf(x, y, "%.02f", vector.x);
	Novice::ScreenPrintf(x + kColumnWidth, y, "%.02f", vector.y);
	Novice::ScreenPrintf(x + kColumnWidth * 2, y, "%.02f", vector.z);
	Novice::ScreenPrintf(x + kColumnWidth * 3, y, "%s", label);
}
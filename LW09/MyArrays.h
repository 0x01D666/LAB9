#pragma once
#ifndef _MY_ARRAYS_H_
#define _MY_ARRAYS_H_
#include <iostream>
using namespace std;

class MyArrays {
public:
	void WorkWithArrayA(void);
	void WorkWithArrayB(void);
	void WorkWithArrayC(void);

private:
	void SetArraySize();
	int  GetArraySize();

	void FillSequence(double* A, int& N);
	void ShowDirectSequence(double* A, int& N);
	void ShowInvertSequence(double* A, int& N);

private:
	int N;
};
#endif
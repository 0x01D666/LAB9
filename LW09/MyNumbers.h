#pragma once
#ifndef _MY_NUMBERS_H_
#define _MY_NUMBERS_H_
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

class MyNumbers {
private:
	void SetValueForM();
	void SetValueForX();
	int  GetValueForM();
	int  GetValueForX();

	int CountAmountOfNumbersSmallerThenM(int& M);
	int CountSumOfDigitsInTheNumber(int M);
	int CountTheNumbersEqualToX(int& M, int& X);

public:
	void Init(void);

private:
	int M = 0, X = 0, Object = 0;
};
#endif
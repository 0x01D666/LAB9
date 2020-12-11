#pragma once
#ifndef _MY_POINT_H_
#define _MY_POINT_H_
#include <iostream>
#include <iomanip>
using namespace std;

class MyPoint
{
private:
	double FindSegmentLength(double x1, double y1, double x2, double y2);
	void ShowReadyTemplate(double x1, double y1, double x2, double y2, const char first_point_name, const char second_point_name);

public:
	void Init();

private:
	double Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
};
#endif
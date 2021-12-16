#pragma once
#include "AllLibraries.h"

class Point
{
private:
	short coord_x;
	short coord_y;
	short color;

public:
	Point();
	Point(const short coord_x, const short coord_y, const short color);
	Point(const Point& original);

	void SetCoord_x(const short coord_x);
	void SetCoord_y(const short coord_y);
	void SetCollor(const short color);

	short GetCoord_x() const;
	short GetCoord_y() const;
	short GetColor() const;

	void PointUp(const short number);
	void PointDown(const short number);
	void PointLeft(const short number);
	void PointRight(const short number);
	void ShowPoint();
	void DrowPoint();
};


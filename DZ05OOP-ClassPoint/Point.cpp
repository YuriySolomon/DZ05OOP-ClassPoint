#include "Point.h"
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

Point::Point() : Point(1, 1, 3) {}
Point::Point(const short coord_x, const short coord_y, const short color)
{
	SetCoord_x(coord_x);
	SetCoord_y(coord_y);
	SetCollor(color);
}
Point::Point(const Point& original)
{
	SetCoord_x(original.coord_x);
	SetCoord_y(original.coord_y);
	SetCollor(original.color);
}

void Point::SetCoord_x(const short coord_x)
{
	this->coord_x = coord_x;
}
void Point::SetCoord_y(const short coord_y)
{
	this->coord_y = coord_y;
}
void Point::SetCollor(const short color)
{
	this->color = color;
}

short Point::GetCoord_x() const
{
	return coord_x;
}
short Point::GetCoord_y() const
{
	return coord_y;
}
short Point::GetColor() const
{
	return color;

}

void Point::PointUp(const short number)
{
	coord_y = coord_y - number;
}
void Point::PointDown(const short number)
{
	coord_y = coord_y + number;
}
void Point::PointLeft(const short number)
{
	coord_x = coord_x - number;
}
void Point::PointRight(const short number)
{
	coord_x = coord_x + number;
}
void Point::ShowPoint()
{
	cout << GetCoord_x() << "\n";
	cout << GetCoord_y() << "\n";
	cout << GetColor() << "\n";
}
void Point::DrowPoint()
{
	COORD position;
	position.X = coord_x;
	position.Y = coord_y;
	SetConsoleCursorPosition(h, position);
	SetConsoleTextAttribute(h, color);
	cout << (char)46;
}
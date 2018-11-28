#include "Move.h"
#include <iostream>

using std::cout;
using std::endl;

Move::Move(double a, double b)
{
	this->reset(a, b);
}
void Move::showmove() const
{
	cout << "x = " << x << ", y = " << y << endl;
}
Move Move::add(const Move & m) const
{
	// double overflow handling is not very usefull in this class
	Move result(x + m.x, y + m.y);
	// automatically generated special member functions are good enough here
	return result;
}
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
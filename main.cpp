
#include "Point.h"
int main()
{
	Point p1;
	Point p2(10, 11, 12);
	p1.Print();
	p2.Print();
	p1.Save(p1.GetX());
	p1.Load();
	p1.Print();
	return 0;
}
#include "Point.h"

Point::Point()
{
	this->X = 0;
	this->Y = 0;
	this->Z = 0;
}
Point::Point(int x, int y, int z)
{
	this->X = x;
	this->Y = y;
	this->Z = z;
}

void Point::Print()
{
	cout << " Coord point : [" << X << ',' << Y << ',' << Z << ']' << endl;
}

int Point::GetX()
{
	return X;
}

int Point::GetY()
{
	return Y;
}

int Point::GetZ()
{
	return Z;
}

void Point::SetX(int x)
{
	this->X = x;
}

void Point::SetY(int y)
{
	this->Y = y;
}

void Point::SetZ(int z)
{
	this->Z = z;
}

void Point::SetXY(int x, int y)
{
	this->X = x;
	this->Y = y;
}

void Point::SetXYZ(int x, int y, int z)
{
	this->X = x;
	this->Y = y;
	this->Z = z;
}

void Point::Save(int tmp)
{
	file.open(path, ios::out | ios::binary);
	if(!file.is_open())
	{
		cout << "Error!" << endl;
	}
	else
	{
		file.write((char *) & tmp, sizeof(tmp));
		cout << "Saved!" << endl;
		file.close();
	}
}

int Point::Load()
{
	int object;
	file.open(path, ios::in | ios::binary);
	if(!file.is_open())
	{
		cout << "Error!" << endl;
	}
	else
	{

		file.read((char*) &object, sizeof(object));
		cout << "Loaded!" << endl;
		file.close();
	}
	return object;
}

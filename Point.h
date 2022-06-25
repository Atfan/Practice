#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Point
{
public:
	
	Point();
	Point(int x, int y, int z);
	void Print();

	int GetX();
	int GetY();
	int GetZ();

	void SetX(int x);
	void SetY(int y);
	void SetZ(int z);
	void SetXY(int x, int y);
	void SetXYZ(int x, int y, int z);

	void Save(int tmp);
	int Load();

private:
	int X;
	int Y;
	int Z;
	fstream file;
	string path;

};


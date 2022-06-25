#pragma once
#include <iostream>
#include <string>
using namespace std;

struct date
{
	int day;
	int month;
	int year;
	
	date(int day,int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
};

class Student
{
public:
	Student();
	~Student();

private:
	string SurName;
	string FirstName;
	string SecondName;
	date   birthday;
	string phone;
	string institution;
	string address;
	string groupe;


	
};

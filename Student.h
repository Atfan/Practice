#pragma once
#include <iostream>
#include <string>
using namespace std;

struct date
{
private:
	int day;
	int month;
	int year;
public:
	date() = default;
	date(int day,int month, int year)
	{

		this->day = day;
		this->month = month;
		this->year = year;
	}
	void Print()
	{
		cout << day << '.' << month << '.' << year;
	}
};
struct NameHuman
{		
private:
	string SurName;
	string FirstName;
	string SecondName;
public:
	NameHuman() = default;
	NameHuman(string SurName, string FirstName,	string SecondName)
	{
		this->SurName = SurName;
		this->FirstName = FirstName;
		this->SecondName = SecondName;
	}
	void Print()
	{
		cout << SurName << ' ' << FirstName << ' ' << SecondName;
	}
};

class Student
{
public:
	Student();
	void Student_Set(NameHuman NameStuden, date   birthday, string phone);
	void Distribution(string institution,	string address,	string groupe);
	void Print();

private:
	NameHuman NameStuden;
	date   birthday;
	string phone;
	string institution;
	string address;
	string groupe;


	
};

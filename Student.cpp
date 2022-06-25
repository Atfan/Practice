#include "Student.h"


Student::Student()
{
	date d(1, 1, 1900);
	this->SurName = "Unknown";
	this->FirstName = "Unknown";
	this->SecondName = "Unknown";
	this->birthday = d;
	this->phone = "Unknown";

}

Student::~Student()
{
}
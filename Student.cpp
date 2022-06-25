#include "Student.h"


Student::Student()
{
	string str = "Unknown";
	this->NameStuden = NameHuman(str, str, str);
	this->birthday = date(1, 1, 1900);
	this->phone = str;
	this->institution = str;
	this->address = str;
	this->groupe = str;
}
void Student::Student_Set(NameHuman NameStuden, date   birthday, string phone)
{
	this->NameStuden = NameStuden;
	this->birthday = birthday;
	this->phone = phone;
}
void Student::Distribution(string institution, string address, string groupe)
{
	this->institution = institution;
	this->address = address;
	this->groupe = groupe;
}

void Student::Print()
{
	cout << "\nName Student: ";
	this->NameStuden.Print();
	cout << "\nBirthday: ";
	this->birthday.Print();
	cout << "\nPhone: " << this->phone;
	cout << "\nInstitution: " << this->institution;
	cout << "\nAddress: " << this->address;
	cout << "\nGroupe: " << this->groupe<< endl<<endl;
}
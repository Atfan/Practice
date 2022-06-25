#include "Student.h"
using namespace std;

int main()
{

	Student student1;
	student1.Print();
	Student student2;
	student2.Student_Set(NameHuman("Ivanov","Ivan","Ivanovich"),date(23,04,1991),"(092)123331");
	student2.Print();
	Student student3;
	student3.Distribution("KPI", "Kiev", "IM-92");
	student3.Print();
	return 0;
}
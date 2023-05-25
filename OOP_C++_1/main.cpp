#include <iostream>
#include <conio.h>
#include <time.h>
#include "Student.h"

using namespace std;

int main()
{
	Student student;

	student.SetSurname("Huseynov");
	student.SetName("Osman");
	student.SetFather_Name("Anar");
	student.SetDate_of_Birth("2006.10.15");
	student.SetContact_Number("+994516845225");
	student.SetCity("Baku");
	student.SetCountry("Azarbaycan");
	student.SetThe_name_of_the_institution("STEP IT");
	student.SetCity_and_country("\nCountry -> Azarbaycan \nCity -> Baku");
	student.SetNumber_Group("FBAS_3_22_2_ru");
	student.ShowInfo();
}
#pragma once
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

class Student
{
private:
	char Surname[45];
	char Name[45];
	char Father_Name[45];
	char Date_of_Birth[45];
	char contact_number[45];
	char city[45];
	char country[45];
	char the_name_of_the_institution[45];
	char city_and_country[45];
	char number_group[45];

public:
	char* GetSurname();
	char* GetName();
	char* GetFather_Name();
	char* GetDate_of_Birth();
	char* GetContact_Number();
	char* GetCity();
	char* GetCountry();
	char* GetThe_name_of_the_institution();
	char* GetCity_and_country();
	char* GetNumber_Group();

	void SetSurname(const char* ValueSurname);
	void SetName(const char* ValueName);
	void SetFather_Name(const char* ValueFather_Name);
	void SetDate_of_Birth(const char* ValueDate_of_Birth);
	void SetContact_Number(const char* ValueContact_Number);
	void SetCity(const char* ValueCity);
	void SetCountry(const char* ValueCountry);
	void SetThe_name_of_the_institution(const char* ValueThe_name_of_the_institution);
	void SetCity_and_country(const char* ValueCity_and_country);
	void SetNumber_Group(const char* ValueNumber_Group);

	void ShowInfo();
};

#pragma region Gets
char* Student::GetSurname() 
{
	return Surname;
}

char* Student::GetName() 
{
	return Name;
}

char* Student::GetFather_Name() 
{
	return Father_Name;
}

char* Student::GetDate_of_Birth() 
{
	return Date_of_Birth;
}

char* Student::GetContact_Number() 
{
	return contact_number;
}

char* Student::GetCity() 
{
	return city;
}

char* Student::GetCountry() 
{
	return country;
}

char* Student::GetThe_name_of_the_institution() 
{
	return the_name_of_the_institution;
}

char* Student::GetCity_and_country() 
{
	return city_and_country;
}

char* Student::GetNumber_Group() 
{
	return number_group;
}
#pragma endregion

#pragma region Sets
void Student::SetSurname(const char* ValueSurname) {
	strncpy_s(Surname, ValueSurname, 44);
	Surname[44] = '\0';
}

void Student::SetName(const char* ValueName) {
	strncpy_s(Name, ValueName, 44);
	Name[44] = '\0';
}

void Student::SetFather_Name(const char* ValueFather_Name) {
	strncpy_s(Father_Name, ValueFather_Name, 44);
	Father_Name[44] = '\0';
}

void Student::SetDate_of_Birth(const char* ValueDate_of_Birth) {
	strncpy_s(Date_of_Birth, ValueDate_of_Birth, 44);
	Date_of_Birth[44] = '\0';
}

void Student::SetContact_Number(const char* ValueContact_Number) {
	strncpy_s(contact_number, ValueContact_Number, 44);
	contact_number[44] = '\0';
}

void Student::SetCity(const char* ValueCity) {
	strncpy_s(city, ValueCity, 44);
	city[44] = '\0';
}

void Student::SetCountry(const char* ValueCountry) {
	strncpy_s(country, ValueCountry, 44);
	country[44] = '\0';
}

void Student::SetThe_name_of_the_institution(const char* ValueThe_name_of_the_institution) {
	strncpy_s(the_name_of_the_institution, ValueThe_name_of_the_institution, 44);
	the_name_of_the_institution[44] = '\0';
}

void Student::SetCity_and_country(const char* ValueCity_and_country) {
	strncpy_s(city_and_country, ValueCity_and_country, 44);
	city_and_country[44] = '\0';
}

void Student::SetNumber_Group(const char* ValueNumber_Group) {
	strncpy_s(number_group, ValueNumber_Group, 44);
	number_group[44] = '\0';
}
#pragma endregion

#pragma region ShowInfo
void Student::ShowInfo() {
	cout << "\tSHOW SHOW STUDENT INFO BY NAME: " << Name << endl;
	cout << "\nSurname: " << GetSurname() << endl;
	cout << "\nName: " << GetName() << endl;
	cout << "\nFather's Name: " << GetFather_Name() << endl;
	cout << "\nDate of Birth: " << GetDate_of_Birth() << endl;
	cout << "\nContact Number: " << GetContact_Number() << endl;
	cout << "\nCity: " << GetCity() << endl;
	cout << "\nCountry: " << GetCountry() << endl;
	cout << "\nName of the Institution: " << GetThe_name_of_the_institution() << endl;
	cout << "\nCity and Country: " << GetCity_and_country() << endl;
	cout << "\nGroup Number: " << GetNumber_Group() << endl;
	cout << "------------------------------------" << endl;
}
#pragma endregion
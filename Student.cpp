/***********************************************************************
 * Module:  Student.cpp
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:06
 * Purpose: Implementation of the class Student
 ***********************************************************************/

#include "stdafx.h"
#include "IndividualProgram.h"
#include "Student.h"

using namespace std;

void Student::SetName(string n) // встановити ім'я
{
	name = n;
}
void Student::SetSurname(string s) // встановити прізвище
{
	surname = s;
}
void Student::SetRating(float r) // встановити рейтінг 
{
	rating = r;
}



Student::Student() :
	individualprogram(1, IndividualProgram()),
	name(""),
	surname(""),
	rating()
{
}

Student::Student(string fname, string sname, int rat) :
	individualprogram(1, IndividualProgram(" ", 0)),
	name(fname),
	surname(sname),
	rating(rat)
{
}

Student::Student(const Student& s) :
	individualprogram(s.individualprogram),
	name(s.name),
	surname(s.surname),
	rating(s.rating)
{
}

Student::~Student()
{
}

void Student::createindividualprogram(void)
{
	cout << "Create Individual Program" << endl;
	IndividualProgram program; //конструктор за замовчуванням
	string n;
	float m;
	cout << "Name of program: ";
	cin >> n; program.SetName(n); //встановити ім'я
	cout << "Individual Program was created" << endl;
}

void Student::dohw(void)
{
	cout << "Student did hw." << endl;
}

void Student::getmark(void)
{
	cout << "Student got marks." << endl;
}

void Student::examination(void)
{
	cout << "Student was eximinated." << endl;
}

ostream& operator << (ostream& os, const Student& student)
{
	os << student.name << " " << student.surname << " " << student.rating << " " <<  endl;
	return os;
}

istream& operator >> (std::istream& is, Student& student)
{
	std::string name, surname;
	int rating;
	cout << "Enter name: ";
	is >> name;
	cout << "Enter surname: ";
	is >> surname;
	cout << "Enter rating: ";
	is >> rating;

	student.SetName(name);
	student.SetSurname(surname);
	student.SetRating(rating);

	return is;
}

Student& Student ::operator=(const Student &student)
{
	this->name = student.name;
	this->surname = student.surname;
	this->rating = student.rating;
	return *this;

}
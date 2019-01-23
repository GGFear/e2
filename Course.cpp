/***********************************************************************
 * Module:  Course.cpp
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:33
 * Purpose: Implementation of the class Course
 ***********************************************************************/

#include "stdafx.h"
#include "Course.h"
#include <string>

void Course::SetName(string n) // ���������� ��'�
{
	namecourse = n;
}
void Course::SetCredits(float cr) // ���������� ������
{
	credits = cr;
}
void Course::SetSR(float sr) // ���������� �������� ��������
{
	sam_rab = sr;
}
void Course::SetPR(float pr) // ���������� �������� ��������
{
	prakt_rab = pr;
}



void Course::createcourse(void)
{
	cout << "Course was created" << endl;
}

void Course::editcourse(void)
{
	cout << "Course was edited" << endl;
}

istream& operator >> (istream& is, Course & cl)
{
	string input_name;
	float pr_z, cr;

	cout << "\nEnter course`s name: ";

	is >> input_name;
	cl.SetName(input_name);

	cout << "Enter count of tasks:  ";

	is >> pr_z;
	cl.SetPR(pr_z);

	cout << "Enter count of credits:  ";

	is >> cr;
	cl.SetCredits(cr);


	return is;
}


ostream& operator<<(std::ostream& os, const Course & cl)
{
	os << "\nCourse`s name: ";
	os << cl.GetName();
	os << "\nCount of task(number): ";
	os << cl.GetName();
	os << "\nCount of credits(number): ";
	os << cl.GetCredits();
	return os;
}
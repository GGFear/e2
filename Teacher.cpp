/***********************************************************************
 * Module:  Teacher.cpp
 * Author:  is7327
 * Modified: вторник, 20 но€бр€ 2018 г. 10:07:03
 * Purpose: Implementation of the class Teacher
 ***********************************************************************/

#include "stdafx.h"
#include "Teacher.h"
#include <iostream>

using namespace std;

void Teacher::SetName(std::string n)// встановити ≥м'€
{
	name = n;
}
void Teacher::SetSurname(std::string s) // встановити пр≥звище
{
	surname = s;
}
void Teacher::SetSubject(std::string s) // встановити рейтинговий бал
{
	subject = s;
}
void Teacher::SetQualification(int q) // встановити курси
{
	qualification = q;
}


void Teacher::createprograme(void)
{
	cout << "Indivual programs were created" << endl;
}

void Teacher::checkexam(void)
{
   // TODO : implement
}

void Teacher::checktests(void)
{
	cout << "Tests were checked." << endl;
}


void Teacher::checkhw(void)
{
	cout << "HW were checked" << endl;
}

void Teacher::helpstudents(void)
{
	cout << "Teacher helped students." << endl;
}

Teacher Teacher:: operator+(int s)
{
	qualification += s;
	return *this;
}

Teacher Teacher:: operator-(int s)
{
	qualification -= s;
	return *this;
}
Teacher Teacher::operator ++()
{
	qualification += 1;
	return *this;
}

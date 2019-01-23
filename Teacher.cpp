/***********************************************************************
 * Module:  Teacher.cpp
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:07:03
 * Purpose: Implementation of the class Teacher
 ***********************************************************************/

#include "stdafx.h"
#include "Teacher.h"
#include <iostream>

using namespace std;

void Teacher::SetName(std::string n)// ���������� ��'�
{
	name = n;
}
void Teacher::SetSurname(std::string s) // ���������� �������
{
	surname = s;
}
void Teacher::SetSubject(std::string s) // ���������� ����������� ���
{
	subject = s;
}
void Teacher::SetQualification(int q) // ���������� �����
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

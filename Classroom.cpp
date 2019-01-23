/***********************************************************************
 * Module:  Classroom.cpp
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:50
 * Purpose: Implementation of the class Classroom
 ***********************************************************************/

#include "stdafx.h"
#include "Classroom.h"
#include <iostream>

using namespace std;

void Classroom::SetName(string n) // встановити назву
{
	name = n;
}

void Classroom::SetTask(string t) // встановити оцінку
{
	task = t;
}



void Classroom::creare(void)
{
	cout << "Classroom was created." << endl;
}


void Classroom::registraition(void)
{
	cout << "Students were registrated" << endl;
}

istream& operator >> (istream& is, Classroom & cl)
{
	string input_name;

	cout << "\nEnter classroom`s name: ";
	
		is >> input_name;
		cl.SetName(input_name);
		
	return is;
}


ostream& operator<<(std::ostream& os, const Classroom & cl)
{
	os << "\nClassroom`s name: ";
	os << cl.GetName();
	return os;
}


﻿// ver3(+).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "SmartSystem.h"
#include "Classroom.h"
#include "Course.h"
#include "Elibrary.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
	cout << "Start" << endl <<endl;
	SmartSystem system1; // створення системи 
	system1.op(); 
	//system1.registration();
	cout << endl;
	cout << "Finish" << endl;
	system("pause");
	return 0;
}


/***********************************************************************
 * Module:  IndividualProgram.cpp
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:06
 * Purpose: Implementation of the class IndividualProgram
 ***********************************************************************/

#include "stdafx.h"
#include "IndividualProgram.h"

void IndividualProgram::SetName(string n) // ���������� �����
{
	namecourse = n;
}

void IndividualProgram::SetMark(float m) // ���������� ������
{
	mark = m;
}

void IndividualProgram::create(void)
{
	cout << "Individual Program was created." << endl;
}


bool IndividualProgram::pass(void)
{
	cout << "Student finished progam" << endl;
	return true;
}


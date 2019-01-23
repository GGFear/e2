/***********************************************************************
 * Module:  Student.h
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:06
 * Purpose: Declaration of the class Student
 ***********************************************************************/

#include "stdafx.h"
#include <iostream>
#include <vector>

#if !defined(__ClassDiagram_1_Student_h)
#define __ClassDiagram_1_Student_h

using namespace std;

class IndividualProgram;

class Student
{
public:
	// inline
	string GetName() const // �������� ��'�
	{
		return name;
	}
	string GetSurname() const // �������� �������
	{
		return surname;
	}
	float GetRating() const // �������� ������
	{
		return rating;
	}

	void SetName(string); // ���������� ��'�
	void SetSurname(string); // ���������� �������
	void SetRating(float); // ���������� ������ 

   void examination(void);
   void dohw(void);
   void getmark(void);
   void createindividualprogram(void);

   // ����������� inline
   Student(); // ����������� �� �����������
   Student(string n, string s, int r); // ����������� �����������
   Student(const Student& s);
   ~Student();

   friend  std::ostream& operator << (std::ostream& os, const Student& student); // �������� ���������
   friend  std::istream& operator >> (std::istream& is, Student& student); // �������� ��������
   friend  std::istream& operator >> (std::istream& is, Student& student); // �������� ������������

protected:
private:
   string name;
   string surname;
   float rating;
   vector <IndividualProgram> individualprogram;
};

#endif
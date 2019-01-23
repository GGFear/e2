/***********************************************************************
 * Module:  Student.h
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:06
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
	string GetName() const // отримати ім'я
	{
		return name;
	}
	string GetSurname() const // отримати прізвище
	{
		return surname;
	}
	float GetRating() const // отримати рейтінг
	{
		return rating;
	}

	void SetName(string); // встановити ім'я
	void SetSurname(string); // встановити прізвище
	void SetRating(float); // встановити рейтінг 

   void examination(void);
   void dohw(void);
   void getmark(void);
   void createindividualprogram(void);

   // конструктор inline
   Student(); // конструктор за замовченням
   Student(string n, string s, int r); // конструктор ініціалізації
   Student(const Student& s);
   ~Student();

   friend  std::ostream& operator << (std::ostream& os, const Student& student); // оператор виведення
   friend  std::istream& operator >> (std::istream& is, Student& student); // оператор введення
   friend  std::istream& operator >> (std::istream& is, Student& student); // оператор прирівнювання

protected:
private:
   string name;
   string surname;
   float rating;
   vector <IndividualProgram> individualprogram;
};

#endif
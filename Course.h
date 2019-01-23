/***********************************************************************
 * Module:  Course.h
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:33
 * Purpose: Declaration of the class Course
 ***********************************************************************/

#include <iostream>
#include <string>
#if !defined(__ClassDiagram_1_Course_h)
#define __ClassDiagram_1_Course_h

using namespace std;

class Course
{
public:
   void createcourse(void);
   void editcourse(void);

   // конструктори inline
   Course() : namecourse("") {}							// конструктор за замовченням
   Course(string n, float cr, float sr, float pr) : namecourse(n), credits(cr), sam_rab(sr), prakt_rab(pr) {}// конструктор ініціалізації
   ~Course() {}								// Деструктор

   // inline
   string GetName() const // отримати ім'я
   {
	   return namecourse;
   }
   float GetCredits() const // отримати кредити
   {
	   return credits;
   }
   float GetSR() const // отримати самостійні завдання
   {
	   return sam_rab;
   }
   float GetPR() const // отримати практичні завдання
   {
	   return prakt_rab;
   }

   void SetName(string); // встановити ім'я
   void SetCredits(float); // встановити кредити
   void SetSR(float); // встановити самостійні завдання
   void SetPR(float); // встановити практичні завдання
   friend istream & operator>> (istream& is, Course&); // оператор виведення
   friend ostream & operator<< (ostream& os, const Course&); // оператор введення

protected:
private:
   string namecourse;
   float credits;
   float sam_rab;
   float prakt_rab;


};

#endif
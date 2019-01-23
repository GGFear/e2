/***********************************************************************
 * Module:  Teacher.h
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:07:03
 * Purpose: Declaration of the class Teacher
 ***********************************************************************/

#include <iostream>
#include <string>

#if !defined(__ClassDiagram_1_Teacher_h)
#define __ClassDiagram_1_Teacher_h

using namespace std;

class Teacher
{
public:
	
	Teacher operator +(int); // оператор додавання 
	Teacher operator -(int); // оператор віднімання 
	Teacher operator ++();// оператор додавання



	string GetName() const // отримати ім'я
	{
		return name;
	}
	string GetSurname() const // отримати прізвище
	{
		return surname;
	}
	string GetSubject() const // отримати предмет
	{
		return subject;
	}
	int GetQualification() const  // отримати кваліфікацію
	{
		return qualification;
	}

	void SetName(string); // встановити ім'я
	void SetSurname(string); // встановити прізвище
	void SetSubject(string); // встановити предмет
	void SetQualification(int); // встановити кваліфікацію

   void checkexam(void);
   void checktests(void);
   void checkhw(void);
   void helpstudents(void);
   void createprograme(void);

   Teacher() : name("") {}																				// конструктор за замовченням															// конструктор ініціалізації
   Teacher(string n, string s, string sub, int q) : name(n), surname(s), subject(sub), qualification(q) {}			// конструктор копії																			// конструктор перетворення																		// деструктор
   ~Teacher() {}

  

protected:
private:
	string name;
	string surname;
    string subject;
    int qualification;
  


};

#endif
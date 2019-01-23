/***********************************************************************
 * Module:  Classroom.h
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:50
 * Purpose: Declaration of the class Classroom
 ***********************************************************************/

#if !defined(__ClassDiagram_1_Classroom_h)
#define __ClassDiagram_1_Classroom_h
#include <string>
#include <vector>

using namespace std;

class Classroom
{
public:
   void creare(void);
   void registraition(void);


   // конструктори inline
   Classroom() : name(""), task("") {}						// конструктор за замовченням
   Classroom(string n, string t) : name(n), task(t) {}		// конструктор ініціалізації
   ~Classroom() {}					// Деструктор

   //inline
   string GetName() const // отримати ім'я
   {
	   return name;
   }
   string GetTask() const // отримати завдання
   {
	   return task;
   }

   void SetName(string); // встановити ім'я
   void SetTask(string); // встановити завдання
   

   friend istream & operator>> (istream& is, Classroom&);
   friend ostream & operator<< (ostream& os, const Classroom&);

protected:
private:
   string name;
   string task;
};

#endif
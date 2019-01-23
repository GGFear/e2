/***********************************************************************
 * Module:  IndividualProgram.h
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:06
 * Purpose: Declaration of the class IndividualProgram
 ***********************************************************************/


#include <iostream>
#include <string>
#if !defined(__ClassDiagram_1_IndividualProgram_h)
#define __ClassDiagram_1_IndividualProgram_h

using namespace std;

class IndividualProgram
{
public:
   void create(void);
   bool pass(void);



   // конструктори inline
   IndividualProgram() : namecourse("") {}								// конструктор за замовченням
   IndividualProgram(string n, float m) : namecourse(n), mark(m) {}				// конструктор ініціалізації
   ~IndividualProgram() {}							// деструктор
   // inline
   string GetName() const // отримати ім'я
   {
	   return namecourse;
   }
   float GetMark() const // отримати оцінку
   {
	   return mark;
   }

   void SetName(string); // встановити ім'я
   void SetMark(float); // встановити оцінку
   
protected:
private:

   string namecourse;
   float mark;


};

#endif
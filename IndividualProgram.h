/***********************************************************************
 * Module:  IndividualProgram.h
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:06
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



   // ������������ inline
   IndividualProgram() : namecourse("") {}								// ����������� �� �����������
   IndividualProgram(string n, float m) : namecourse(n), mark(m) {}				// ����������� �����������
   ~IndividualProgram() {}							// ����������
   // inline
   string GetName() const // �������� ��'�
   {
	   return namecourse;
   }
   float GetMark() const // �������� ������
   {
	   return mark;
   }

   void SetName(string); // ���������� ��'�
   void SetMark(float); // ���������� ������
   
protected:
private:

   string namecourse;
   float mark;


};

#endif
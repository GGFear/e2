/***********************************************************************
 * Module:  Course.h
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:33
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

   // ������������ inline
   Course() : namecourse("") {}							// ����������� �� �����������
   Course(string n, float cr, float sr, float pr) : namecourse(n), credits(cr), sam_rab(sr), prakt_rab(pr) {}// ����������� �����������
   ~Course() {}								// ����������

   // inline
   string GetName() const // �������� ��'�
   {
	   return namecourse;
   }
   float GetCredits() const // �������� �������
   {
	   return credits;
   }
   float GetSR() const // �������� �������� ��������
   {
	   return sam_rab;
   }
   float GetPR() const // �������� �������� ��������
   {
	   return prakt_rab;
   }

   void SetName(string); // ���������� ��'�
   void SetCredits(float); // ���������� �������
   void SetSR(float); // ���������� �������� ��������
   void SetPR(float); // ���������� �������� ��������
   friend istream & operator>> (istream& is, Course&); // �������� ���������
   friend ostream & operator<< (ostream& os, const Course&); // �������� ��������

protected:
private:
   string namecourse;
   float credits;
   float sam_rab;
   float prakt_rab;


};

#endif
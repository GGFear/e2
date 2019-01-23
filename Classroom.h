/***********************************************************************
 * Module:  Classroom.h
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:50
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


   // ������������ inline
   Classroom() : name(""), task("") {}						// ����������� �� �����������
   Classroom(string n, string t) : name(n), task(t) {}		// ����������� �����������
   ~Classroom() {}					// ����������

   //inline
   string GetName() const // �������� ��'�
   {
	   return name;
   }
   string GetTask() const // �������� ��������
   {
	   return task;
   }

   void SetName(string); // ���������� ��'�
   void SetTask(string); // ���������� ��������
   

   friend istream & operator>> (istream& is, Classroom&);
   friend ostream & operator<< (ostream& os, const Classroom&);

protected:
private:
   string name;
   string task;
};

#endif
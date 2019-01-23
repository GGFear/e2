/***********************************************************************
 * Module:  Teacher.h
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:07:03
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
	
	Teacher operator +(int); // �������� ��������� 
	Teacher operator -(int); // �������� �������� 
	Teacher operator ++();// �������� ���������



	string GetName() const // �������� ��'�
	{
		return name;
	}
	string GetSurname() const // �������� �������
	{
		return surname;
	}
	string GetSubject() const // �������� �������
	{
		return subject;
	}
	int GetQualification() const  // �������� �����������
	{
		return qualification;
	}

	void SetName(string); // ���������� ��'�
	void SetSurname(string); // ���������� �������
	void SetSubject(string); // ���������� �������
	void SetQualification(int); // ���������� �����������

   void checkexam(void);
   void checktests(void);
   void checkhw(void);
   void helpstudents(void);
   void createprograme(void);

   Teacher() : name("") {}																				// ����������� �� �����������															// ����������� �����������
   Teacher(string n, string s, string sub, int q) : name(n), surname(s), subject(sub), qualification(q) {}			// ����������� ��ﳿ																			// ����������� ������������																		// ����������
   ~Teacher() {}

  

protected:
private:
	string name;
	string surname;
    string subject;
    int qualification;
  


};

#endif
/***********************************************************************
 * Module:  SmartSystem.h
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:07:03
 * Purpose: Declaration of the class SmartSystem
 ***********************************************************************/


#include <iostream>
#include <string>
#include <vector>
#if !defined(__ClassDiagram_1_SmartSystem_h)
#define __ClassDiagram_1_SmartSystem_h

using namespace std;

class Teacher;
class Student;
class Course;
class Elibrary;
class Classroom;

class SmartSystem
{
public:
	// ������������ inline
	SmartSystem();					// ����������� �� �����������
	SmartSystem(string n);				// ����������� �����������
	SmartSystem(const SmartSystem& s);
	~SmartSystem();				// ����������

   void registration(void);
   void autorization(void);
   void diploma(void);
   void op(void);
   // inline
   string GetType() const // �������� ���
   {
	   return name;
   }
   void SetType(string); // ���������� ���

   vector<Teacher> GetName();
   vector<Teacher> SetName();
   vector<Teacher> GetSurname();
   vector<Teacher> SetSurname();
   vector<Teacher> GetSubject();
   vector<Teacher> SetSubject();
   vector<Teacher> GetQualification();
   vector<Teacher> SetQualification();

   void operator += (const Teacher&); //�������������� ��������� +=
   void operator += (const Student&); //�������������� ��������� +=
   void operator += (const Classroom&);
   void operator += (const Course&);
   void operator += (const Elibrary&);

   friend std::ostream& operator<< (std::ostream& os, const SmartSystem&); //�������������� ������ ��'����
   friend void operator += (std::vector<std::string> list_of_elements, const std::string& element); //�������������� ��������� +=, �� ���� ������� string �� vector

   friend std::ostream & operator<< (std::ostream& os, const Teacher&); //�������������� ������ ��'����
   friend  std::ostream & operator<< (std::ostream& os, const Student&);
   friend  std::ostream & operator<< (std::ostream& os, const Classroom&);
   friend  std::ostream & operator<< (std::ostream& os, const Course&);
   friend  std::ostream & operator<< (std::ostream& os, const Elibrary&);


protected:
private:
   string name;
   vector <Teacher> teacher;
   vector <Student> student;
   vector <Classroom> classroom;
   vector <Course> course;
   vector <Elibrary> elibrary;

};

#endif
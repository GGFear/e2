/***********************************************************************
 * Module:  SmartSystem.cpp
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:07:03
 * Purpose: Implementation of the class SmartSystem
 ***********************************************************************/

#include "stdafx.h"
#include "Teacher.h"
#include "Student.h"
#include "Course.h"
#include "Elibrary.h"
#include "Classroom.h"
#include "SmartSystem.h"

void SmartSystem::SetType(string n)
{
	name = n;
}

vector<Teacher> SmartSystem::GetName(){
	return teacher;
}

vector<Teacher> SmartSystem::SetName() {
	return teacher;
}

vector<Teacher> SmartSystem::GetSurname()
{
	return teacher;
}
vector<Teacher> SmartSystem::SetSurname()
{
	return teacher;
}
vector<Teacher> SmartSystem::GetSubject()
{
	return teacher;
}
vector<Teacher> SmartSystem::SetSubject()
{
	return teacher;
}
vector<Teacher> SmartSystem::GetQualification()
{
	return teacher;
}
vector<Teacher> SmartSystem::SetQualification()
{
	return teacher;
}



SmartSystem::SmartSystem() :
	teacher(1, Teacher()),
	student(1, Student()),
	classroom(1, Classroom()),
	course(1, Course()),
	elibrary(1, Elibrary()),
	name(" ")
{
}

SmartSystem::SmartSystem(string n) :
	teacher(1, Teacher("tt", "tt", "tt", 78)),
	student(1, Student("tt", "tt", 78)),
	classroom(1, Classroom("tt", "tt")),
	course(1, Course("tt", 5, 6, 7)),
	elibrary(1, Elibrary("tt", "tt", "tt", "tt")),
	name(n)

{
}

SmartSystem::SmartSystem(const SmartSystem& s) :
	teacher(s.teacher),
	student(s.student),
	classroom(s.classroom),
	course(s.course),
	elibrary(s.elibrary),
	name("")
{
}

SmartSystem::~SmartSystem()
{
}


void SmartSystem::registration(void)
{
	cout << "Registrating Student" << endl;
	{
		{
			cout << endl << "\nCreating 'Student':\n" << endl;
			Student student1;//����������� �� �������������
			std::string n, s;
			float r;
			cout << "\nStudent\nName: ";
			cin >> n; student1.SetName(n); //���������� ��'�
			cout << "Surname: ";
			cin >> s; student1.SetSurname(s); //���������� �������
			cout << "Rating: ";
			cin >> r; student1.SetRating(r); //���������� ����������� ���
			
			cout << endl;
			cout << "Student\nName: " << student1.GetName() << "\nSurname: " << student1.GetSurname() << "\nRating: " << student1.GetRating() << endl; //�������� ��'� ������ ����������� ��� ����� �������� ��������
		}
	}

	cout << "Registrating Teacher" << endl;
	{
		cout << endl << "\nCreating 'Teacher':\n" << endl;
		Teacher teacher1;//����������� �� �������������
		std::string n, s, sub;
		float r, q;
		cout << "\nTeacher\nName: ";
		cin >> n; teacher1.SetName(n); //���������� ��'�
		cout << "Surname: ";
		cin >> s; teacher1.SetSurname(s); //���������� �������
		cout << "Subject: ";
		cin >> sub; teacher1.SetSubject(sub); //���������� �������
		cout << "Qualification: ";
		cin >> q; teacher1.SetQualification(q); //���������� �����������


		cout << endl;
		cout << "Teacher\nName: " << teacher1.GetName() << "\nSurname: " << teacher1.GetSurname() << "\nSubject: " << teacher1.GetSubject() << "\nQualification: " << teacher1.GetQualification() << endl; //�������� ��'� ������ ������� �������
	}

	cout << "Registrating Classroom" << endl;
	{
		cout << endl << "\nCreating 'Classroom':\n" << endl;
		Classroom classroom1;//����������� �� �������������
		string n, t;
		float r, q;
		cout << "\nClassroom\nName: ";
		cin >> n; classroom1.SetName(n); //���������� �����
		cout << "Task: ";
		cin >> t; classroom1.SetTask(t); //���������� ��������

		cout << endl;
		cout << "Classroom\nName: " << classroom1.GetName() << "\nTask: " << classroom1.GetTask() << endl; //�������� ����������� ��� ������ ������
	}
	cout << "Registrating course" << endl;
	{
		cout << endl << "\nCreating 'Course':\n" << endl;
		Course course1;//����������� �� �������������
		string n;
		float r,c,sr, pr;
		cout << "\nCourse\nName: ";
		cin >> n; course1.SetName(n); //���������� �����
		cout << "Credits: ";
		cin >> c; course1.SetCredits(c); //���������� �������
		cout << "Sam zavd: ";
		cin >> sr; course1.SetSR(sr); //���������� ��������
		cout << "Prakt zavd: ";
		cin >> pr; course1.SetPR(pr); //���������� ��������
		
		cout << endl;
		cout << "Course\nName: " << course1.GetName() << "\nCredits: " << course1.GetCredits() << "\nSam rab: " << course1.GetSR() << "\nPrakt rab: " << endl; //�������� ����������� ��� ����
	}
	
	cout << "Registrating elibrary" << endl;
	{
		cout << endl << "\nCreating 'elibrary':\n" << endl;
		Elibrary elibrary1;//����������� �� �������������
		string v, veb;
		cout << "\nCourse\nVideo: ";
		cin >> v; elibrary1.SetVideo(v); //���������� ����
		cout << "Vebinari: ";
		cin >> veb; elibrary1.SetVeb(veb); //���������� �������

		cout << endl;
		cout << "Elibrary\nVideo: " << elibrary1.GetVideo() << "\n:Vebinari " << elibrary1.GetVeb() << endl; //�������� ����������� ��� ����
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       SmartSystem::autorization()
// Purpose:    Implementation of SmartSystem::autorization()
// Return:     void
////////////////////////////////////////////////////////////////////////

void SmartSystem::autorization(void)
{
	cout << "Everything fine." << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       SmartSystem::diploma()
// Purpose:    Implementation of SmartSystem::diploma()
// Return:     void
////////////////////////////////////////////////////////////////////////

void SmartSystem::diploma(void)
{
	cout << "Student get diploma." << endl;
}

void SmartSystem:: operator += (const Teacher& new_teacher)
{
	teacher.push_back(new_teacher);
}

void SmartSystem:: operator += (const Student& new_student)
{
	student.push_back(new_student);
}

void SmartSystem:: operator += (const Classroom& new_classroom)
{
	classroom.push_back(new_classroom);
}

void SmartSystem:: operator += (const Course& new_course)
{
	course.push_back(new_course);
}

void SmartSystem:: operator += (const Elibrary& new_elibrary)
{
	elibrary.push_back(new_elibrary);
}

void SmartSystem::op(void)
{
	cout << "Operators 'cout' and 'cin'" << endl << endl;
	Classroom classroom;
	cin >> classroom;
	cout << classroom;
	cout << endl;
	Course course;
	cin >> course;
	cout << course;
	cout << endl;
	Elibrary elibrary;
	cin >> elibrary;
	cout << elibrary;
	cout << endl << endl;
	Student student;
	Student student1("Surname", "Name", 0);
	cout << "Operator = " << endl << endl;
	cout << student1;//�������������� �������� ������ ���������� ��� ��������
	cin >> student1; //�������������� �������� ����� ���������� ��������
	student = student1; //�������������� �������� ��������� 
	cout << endl;
	cout << endl << student1;//�������������� �������� ������ 
	cout << student;//�������������� �������� ������ 
	cout << endl;
	Teacher teacher("English", "Olha", "Rubtsova", 7);
	cout << teacher.GetSubject() << " " << teacher.GetQualification() << " " << teacher.GetName() << " " << teacher.GetSurname() << " " << endl;
	//teacher++; //�������������� �������� ����������� ���������� ��� ��������� ����������� ���������
	cout << "Operators + and -\n\n";
	cout << "\n Enter number you want to add qualification: ";
	int s;
	cin >> s;
	teacher = teacher + s;//�������������� �������� ���� ��� ��������� ����������� � ���������
	cout << teacher.GetSubject() << " " << teacher.GetQualification() << " " << teacher.GetName() << " " << teacher.GetSurname() << " " << teacher.GetSubject() << " " << endl;
	cout << "Operator -\n Enter number you want to subtract qualification: ";
	cin >> s;
	teacher = teacher - s;//�������������� �������� ���� ��� ��������� ����������� � ���������
	cout << teacher.GetSubject() << " " << teacher.GetQualification() << " " << teacher.GetName() << " " << teacher.GetSurname() << " " << teacher.GetSubject() << " " << endl;

}
/***********************************************************************
 * Module:  SmartSystem.cpp
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:07:03
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
			Student student1;//конструктор за замовчуванням
			std::string n, s;
			float r;
			cout << "\nStudent\nName: ";
			cin >> n; student1.SetName(n); //встановити ім'я
			cout << "Surname: ";
			cin >> s; student1.SetSurname(s); //встановити прізвище
			cout << "Rating: ";
			cin >> r; student1.SetRating(r); //встановити рейтинговий бал
			
			cout << endl;
			cout << "Student\nName: " << student1.GetName() << "\nSurname: " << student1.GetSurname() << "\nRating: " << student1.GetRating() << endl; //отримати ім'я прізвие рейтинговий бал курси заліковку студента
		}
	}

	cout << "Registrating Teacher" << endl;
	{
		cout << endl << "\nCreating 'Teacher':\n" << endl;
		Teacher teacher1;//конструктор за замовчуванням
		std::string n, s, sub;
		float r, q;
		cout << "\nTeacher\nName: ";
		cin >> n; teacher1.SetName(n); //встановити ім'я
		cout << "Surname: ";
		cin >> s; teacher1.SetSurname(s); //встановити прізвище
		cout << "Subject: ";
		cin >> sub; teacher1.SetSubject(sub); //встановити предмет
		cout << "Qualification: ";
		cin >> q; teacher1.SetQualification(q); //встановити кваліфікацію


		cout << endl;
		cout << "Teacher\nName: " << teacher1.GetName() << "\nSurname: " << teacher1.GetSurname() << "\nSubject: " << teacher1.GetSubject() << "\nQualification: " << teacher1.GetQualification() << endl; //отримати ім'я прізвие предмет вчителя
	}

	cout << "Registrating Classroom" << endl;
	{
		cout << endl << "\nCreating 'Classroom':\n" << endl;
		Classroom classroom1;//конструктор за замовчуванням
		string n, t;
		float r, q;
		cout << "\nClassroom\nName: ";
		cin >> n; classroom1.SetName(n); //встановити назва
		cout << "Task: ";
		cin >> t; classroom1.SetTask(t); //встановити завдання

		cout << endl;
		cout << "Classroom\nName: " << classroom1.GetName() << "\nTask: " << classroom1.GetTask() << endl; //отримати іінформацію про класну кімнату
	}
	cout << "Registrating course" << endl;
	{
		cout << endl << "\nCreating 'Course':\n" << endl;
		Course course1;//конструктор за замовчуванням
		string n;
		float r,c,sr, pr;
		cout << "\nCourse\nName: ";
		cin >> n; course1.SetName(n); //встановити назву
		cout << "Credits: ";
		cin >> c; course1.SetCredits(c); //встановити кредити
		cout << "Sam zavd: ";
		cin >> sr; course1.SetSR(sr); //встановити завдання
		cout << "Prakt zavd: ";
		cin >> pr; course1.SetPR(pr); //встановити завдання
		
		cout << endl;
		cout << "Course\nName: " << course1.GetName() << "\nCredits: " << course1.GetCredits() << "\nSam rab: " << course1.GetSR() << "\nPrakt rab: " << endl; //отримати іінформацію про курс
	}
	
	cout << "Registrating elibrary" << endl;
	{
		cout << endl << "\nCreating 'elibrary':\n" << endl;
		Elibrary elibrary1;//конструктор за замовчуванням
		string v, veb;
		cout << "\nCourse\nVideo: ";
		cin >> v; elibrary1.SetVideo(v); //встановити відео
		cout << "Vebinari: ";
		cin >> veb; elibrary1.SetVeb(veb); //встановити вебінари

		cout << endl;
		cout << "Elibrary\nVideo: " << elibrary1.GetVideo() << "\n:Vebinari " << elibrary1.GetVeb() << endl; //отримати іінформацію про курс
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
	cout << student1;//Перевантажений оператор виводу інформації про студента
	cin >> student1; //Перевантажений оператор вводу інформації студента
	student = student1; //Перевантажений оператор присвоєння 
	cout << endl;
	cout << endl << student1;//Перевантажений оператор виводу 
	cout << student;//Перевантажений оператор виводу 
	cout << endl;
	Teacher teacher("English", "Olha", "Rubtsova", 7);
	cout << teacher.GetSubject() << " " << teacher.GetQualification() << " " << teacher.GetName() << " " << teacher.GetSurname() << " " << endl;
	//teacher++; //Перевантажений оператор префіксного інкременту для підвищення кваліфікації викладача
	cout << "Operators + and -\n\n";
	cout << "\n Enter number you want to add qualification: ";
	int s;
	cin >> s;
	teacher = teacher + s;//Перевантажений оператор суми для збільшення кваліфікації у викладача
	cout << teacher.GetSubject() << " " << teacher.GetQualification() << " " << teacher.GetName() << " " << teacher.GetSurname() << " " << teacher.GetSubject() << " " << endl;
	cout << "Operator -\n Enter number you want to subtract qualification: ";
	cin >> s;
	teacher = teacher - s;//Перевантажений оператор суми для зменшення кваліфікації у викладача
	cout << teacher.GetSubject() << " " << teacher.GetQualification() << " " << teacher.GetName() << " " << teacher.GetSurname() << " " << teacher.GetSubject() << " " << endl;

}
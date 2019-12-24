#include "Student.h"

Student::Student(string course, string grant, string session, string name, string surname, string age) : Human::Human(name, surname, age)
{
	this->course = course;
	this->grant = grant;
	this->session = session;
}

Student::Student()
{
}
Student::~Student()
{
}

string Student::get_course()
{
	return course;
}

string Student::get_grant()
{
	return grant;
}

string Student::get_session()
{
	return session;
}

string Student::get_info()
{
	return "Данные студента: " + Human::get_info() + " Специальная информация: " + "Курс-" + get_course() + ", Стипендия-" + get_grant() + ", Состояние сессии-" + get_session();
}
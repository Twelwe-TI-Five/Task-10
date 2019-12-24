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
	return "������ ��������: " + Human::get_info() + " ����������� ����������: " + "����-" + get_course() + ", ���������-" + get_grant() + ", ��������� ������-" + get_session();
}
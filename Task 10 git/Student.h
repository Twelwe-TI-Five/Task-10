#pragma once
#include "Human.h"
#include <iostream>

using namespace std;

class Student :
	public Human
{
	string course, grant, session; // Данные элемента списка
public:
	Student(string course, string grant, string session, string name, string surname, string age);
	Student();
	~Student();

	string get_course();
	string get_grant();
	string get_session();
	string get_info() override;
};
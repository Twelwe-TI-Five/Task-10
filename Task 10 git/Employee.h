#pragma once
#include "Human.h"
class Employee :
	public Human
{
	string post, salary;

public:
	Employee(string post, string salary, string name, string surname, string age);
	Employee();
	~Employee();

	string get_post();
	string get_salary();
	string get_info() override;
};
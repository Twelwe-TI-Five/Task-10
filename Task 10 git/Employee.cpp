#include "Employee.h"


Employee::Employee(string post, string salary, string name, string surname, string age) : Human::Human(name, surname, age)
{
	this->post = post;
	this->salary = salary;
}

Employee::Employee()
{
}
Employee::~Employee()
{
}


string Employee::get_post()
{
	return post;
}

string Employee::get_salary()
{
	return salary;
}

string Employee::get_info()
{
	return "Данные работника: " + Human::get_info() + " Специальная информация: " + "Должность-" + get_post() + ", Зряплата- " + get_salary();
}
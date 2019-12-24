#include "Human.h"


Human::Human(string name, string surname, string age)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
}

Human::Human()
{
}
Human::~Human()
{
	cout << "Вызвался деструктор ";
}

string Human::get_name()
{
	return name;
}

string Human::get_surname()
{
	return surname;
}

string Human::get_age()
{
	return age;
}

string Human::get_info()
{
	return get_name() + " " + get_surname() + ", " + get_age() + ".";
}
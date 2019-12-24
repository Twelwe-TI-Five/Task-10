#pragma once
#include <string>
#include <iostream>

using namespace std;

class Human
{
	string name, surname, age;

public:
	Human(string name, string surname, string age);
	Human();
	~Human();

	string get_name();
	string get_surname();
	string get_age();
	virtual string get_info();
};
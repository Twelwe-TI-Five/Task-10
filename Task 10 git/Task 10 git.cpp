#include "Human.h"
#include "Student.h"
#include "Employee.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void print_stud_info();
void print_empl_info();
void print_info();
void fill_stud_info();
void fill_empl_info();
Human *arr_hum[6];

int main()
{
	setlocale(LC_ALL, "ru");

	fill_stud_info();
	fill_empl_info();

	int ans;
	cout << "Выберите решение:" << endl;
	cout << "0 - вывести список студентов" << endl;
	cout << "1 - вывести список работников" << endl;
	cout << "2 - вывести полный список" << endl;
	cout << "Любое другое значение завершит работу" << endl;
	cin >> ans;
	while (ans == 0 || ans == 1 || ans == 2)
	{
		switch (ans)
		{
		case 0: print_stud_info();
			break;
		case 1: print_empl_info();
			break;
		case 2: print_info();
			break;
		default:
			break;
		}
		cout << endl;
		cout << "Выберите решение:" << endl;
		cout << "0 - вывести список студентов" << endl;
		cout << "1 - вывести список работников" << endl;
		cout << "2 - вывести полный список" << endl;
		cout << "Любое другое значение завершит работу" << endl;
		cin >> ans;
	}
	return 0;
}

void print_stud_info()
{
	for (int i = 0; i < 3; i++)
	{
		cout << arr_hum[i]->get_info() << endl;
	}
}

void print_empl_info()
{
	for (int i = 3; i < 6; i++)
	{
		cout << arr_hum[i]->get_info() << endl;
	}
}

void print_info()
{
	for (int i = 0; i < 6; i++)
	{
		cout << arr_hum[i]->get_info() << endl;
	}
}

void fill_stud_info()
{
	fstream fin;
	fin.open("Student.txt");
	int j = 0;
	while (!fin.eof())
	{
		string stud_info[6];
		for (int i = 0; i < 6; i++)
		{
			fin >> stud_info[i];
		}
		arr_hum[j] = new Student(stud_info[0], stud_info[1], stud_info[2], stud_info[3], stud_info[4], stud_info[5]); j++;
	}
	fin.close();
}

void fill_empl_info()
{
	fstream fin;
	fin.open("Employee.txt");
	int j = 3;
	while (!fin.eof())
	{
		string empl_info[5];
		for (int i = 0; i < 5; i++)
		{
			fin >> empl_info[i];
		}
		arr_hum[j] = new Employee(empl_info[0], empl_info[1], empl_info[2], empl_info[3], empl_info[4]); j++;
	}
	fin.close();
}
// Employee_class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>

using namespace std;

class Employee
{
	int m_empid;
	string m_empname;
	double m_empsalary;
public:
	Employee()
	{
		m_empid = 0;
		m_empname = '\0';
		m_empsalary = 0;
	}

	Employee(int eid, string ename, double esal)
	{
		m_empid = eid;
		m_empname = ename;
		m_empsalary = esal;
	}

	Employee(const Employee &object)
	{
		m_empid = object.m_empid;
		m_empname = object.m_empname;
		m_empsalary = object.m_empsalary;
	}

	Employee& operator = (Employee &object)
	{
		if (this != &object)
		{
			m_empid = object.m_empid;
			m_empname = object.m_empname;
			m_empsalary = object.m_empsalary;
		}
		return *this;
	}

	void display()
	{
		cout << m_empid << " " << m_empname << " " << m_empsalary << endl;
	}
	
};

int main()
{
	Employee emp1;
	emp1.display();
	Employee emp2(101, "Uday kumar", 90000);
	emp2.display();
	Employee emp3(emp2);
	emp3.display();
	Employee emp4;
	emp4.display();
	emp4 = emp2;
	emp4.display();

    return 0;
}


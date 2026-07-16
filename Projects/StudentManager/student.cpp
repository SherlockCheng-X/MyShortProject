#include "student.h"
#include <iostream>
#include <string>
#include <map>

class Student
{
public:
	Student();
	~Student();

private:
	std::string name;
	int id;
	std::map<std::string, double> scores;
};

Student::Student()
{}

Student::~Student()
{}
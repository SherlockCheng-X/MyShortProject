#include "student.h"
#include <iostream>



Student::Student() : name(""), id(0) { }
Student::Student(const std::string& tname, const int tid) : name(tname), id(tid) {}
void Student::setid(const int tid)
{
	this->id = tid;
}

void Student::setname(const std::string& tname)
{
	this->name = tname;
}

void Student::setscore(const std::string& subject, int tscore)
{
	this->scores[subject] = tscore;
}

int Student::getid() const
{
	return this->id;
}

std::string Student::getname() const
{
	return this->name;
}

std::optional<double> Student::getscore(const std::string subject) const
{
	auto it = this->scores.find(subject);
	if (it != this->scores.end()) return it->second;
	else return std::nullopt;
}

double Student::getaverage() const
{
	if (this->scores.empty()) return 0.0;
	double total { 0.0 };
	for (const auto& temp : this->scores) total += temp.second;
	return total / this->scores.size();
}

double Student::getsum() const
{
	double result{ 0 };
	for (const auto& temp : this->scores) result += temp.second;
	return result;
}
#pragma once
#include <string>
#include <map>
#include <optional>


class Student
{
public:
	Student();
	Student(const std::string& tname, const int tid);
	void setid(const int tid);
	void setname(const std::string& tname);
	void setscore(const std::string& subject, int tscore);
	int getid() const;
	std::string getname() const;
	std::optional<double> getscore(const std::string subject) const;
	double getaverage() const;
	double getsum() const;

private:
	std::string name;
	int id;
	std::map<std::string, double> scores;
};
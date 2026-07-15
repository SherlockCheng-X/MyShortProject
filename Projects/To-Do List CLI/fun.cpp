#include "fun.h"
#include <fstream>


std::string add_mode()
{
	std::string temp;
	std::cout << "Plz enter the content:";
	std::getline(std::cin, temp);
	return temp;
}

bool loadTasks(std::vector<std::string>& tasks)
{
	std::ifstream infile("tasks.txt");
	if (!infile.is_open()) return false;
	else
	{
		std::string temp;
		while (std::getline(infile, temp))
		{
			tasks.push_back(temp);
		}
	}
	return true;
}

void saveTasks(const std::vector<std::string>& tasks)
{
	std::ofstream outfile("tasks.txt");
	for (const std::string& temp : tasks)
	{
		outfile << temp << std::endl;
	}
	return;
}
#pragma once
#include <iostream>
#include <string>
#include <vector>

std::string add_mode();

template<typename T>
void display(T first, T last)
{
	std::cout << '\n' << std::string(50, '-') << std::endl;
	std::cout << "Task content\n" << std::endl;
	int num = 1;
	for (auto it = first; it != last; it++, num++)
	{
		std::cout << num << '.' << * it << std::endl;
	}
	std::cout << std::string(50, '-') << '\n' << std::endl;
}

bool loadTasks(std::vector<std::string>& tasks);
void saveTasks(const std::vector<std::string>& tasks);
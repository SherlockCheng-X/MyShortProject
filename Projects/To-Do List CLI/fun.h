#pragma once
#include <iostream>
#include <string>
std::string add_mode();

template<typename T>
void display(T first, T last)
{
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "Task content\n" << std::endl;
	int num = 1;
	for (auto it = first; it != last; it++, num++)
	{
		std::cout << num << '.' << * it << std::endl;
	}
	std::cout << std::string(50, '-') << std::endl;
}
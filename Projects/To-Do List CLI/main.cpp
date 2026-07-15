#include <iostream>
#include <limits>
#include "fun.h"
#include <vector>
#include <exception>

int main()
{
    std::vector<std::string> tasks;
    if (!loadTasks(tasks))
    {
        std::cout << "Starting with empty task list." << std::endl;
    }
    int choice;
    do {
        std::cout << "1.Add 2.Display 3.Delete 0.Quit\nchoice:";
        std::cin >> choice;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            choice = -1;
        }
        switch (choice)
        {
        case 0:
        {
            std::cout << "Ok, see ya!";
            choice = 0;
            saveTasks(tasks);
            break;
        }
        case 1:
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            tasks.push_back(add_mode());
            break;
        }
        case 2:
        {
            if (tasks.size() != 0) display(tasks.begin(), tasks.end());
            else
            {
                std::cout << "You don't have any task yet. try adding one!" << std::endl;
            }
            break;
        }
        case 3:
        {
            if (tasks.size() == 0)
            {
                std::cout << "You don't have any tasks yet, try adding one!" << std::endl;
                break;
            }
            else
            {
                try
                {
                    std::string a;
                    display(tasks.begin(), tasks.end());
                    std::cout << "Which one do you wanna delete(Enter the number):";
                    std::getline(std::cin >> std::ws, a);
                    int n = std::stoi(a);
                    if (n <= 0 || n > tasks.size()) throw std::invalid_argument("Invalid input");
                    tasks.erase(tasks.begin() + n - 1);
                }
                catch (std::invalid_argument)
                {
                    std::cout << "Invalid argument!" << std::endl;
                    break;
                }
                catch (const std::exception&)
                {
                    std::cout << "Error" << std::endl;
                    break;
                }
            }
            std::cout << "Done!" << std::endl;
            break;
        }
        default:
            std::cout << "Unexpected choice, plz enter correctly. again! :(" << std::endl;
            break;
        }
    } while (choice != 0);
}
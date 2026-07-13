#include <iostream>
#include "header.h"
#include <vector>

int main()
{
    vector<string> tasks;
    int choice;
    do {
        cout << "1.Add 2.Display 3.Delete 0.Quit";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        switch (choice)
        {
        case 0:
        {
            cout << "Ok, see ya!";
            break;
        }
        case 1:
        {
            cout << "add" << endl;
            break;
        }
        case 2:
        {
            cout << "display" << endl;
            break;
        }
        case 3:
        {
            cout << "delete" << endl;
            break;
        }
        default:
            cout << "Unexpected choice, quit. :(";
            break;
        }
    } while (choice != 0);
}
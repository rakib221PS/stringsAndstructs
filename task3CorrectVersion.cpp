// Create a program which reverses the order of lines that the user put in: first, ask the user for n -- a number of lines to read. It then creates an array of n std::strings, and reads n lines from the user (use std::getline with std::string as the second argument). Then please print out the lines in reverse order.
// A bit harder version of the previous -- do not ask the user for the number of lines. Output the reverse only after the user types "end".
#include <iostream>
#include <string>

// void inputLines(std::string *dynArrOfStr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << "Enter element for position: " << i<<": ";
//         std::getline(std::cin, dynArrOfStr[i]);
//     }
// }

// void inputLines(std::string *dynArrOfStr)
// {
//     int i = 0;
//     std::string answer;
//     do
//     {
//         std::cout << "Enter line for position for [" << i << "]: ";
//         std::cin >> dynArrOfStr[i];
//         i++;
//         std::cout<<"Do you want to continue?('end' for stop and yes for continue): ";
//         std::cin>>answer;
//     } while (answer != "end");
// }

void inputLines(std::string *dynArrOfStr)
{
    int i = 0;
    std::string answer;
    while (1)
    {
        std::cout << "Enter line for position for [" << i << "]: ";
        std::cin >> dynArrOfStr[i];
        std::cout << "Do you want to continue?('end' for stop and yes for continue): ";
        std::cin >> answer;
        if (answer == "end")
        {
            break;
        }
        else
        {
            i++;
        }
    }
}

void outputLines(std::string *dynArrOfStr)
{
    int n = *(&dynArrOfStr + 1) - dynArrOfStr;
    for (int i = n - 1; i >= 0; i--)
    {
        std::cout << dynArrOfStr[i] << std::endl;
    }
}

int main()
{
    std::string dynArrOfStr[] = {};
    inputLines(dynArrOfStr);
    outputLines(dynArrOfStr);

    return 0;
}
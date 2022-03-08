// Create a program which reverses the order of lines that the user put in: first, ask the user for n -- a number of lines to read. It then creates an array of n std::strings, and reads n lines from the user (use std::getline with std::string as the second argument). Then please print out the lines in reverse order.

#include <iostream>
#include <string>

void inputLines(std::string *dynArrOfStr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter element for position: " << i<<": ";
        std::getline(std::cin, dynArrOfStr[i]);
    }
}

void outputLines(std::string *dynArrOfStr, int n)
{
    for (int i = n-1; i >= 0; i--)
    {
        std::cout<< dynArrOfStr[i]<<std::endl;
    }
}

int main()
{
    int n;
    std::cout << "Enter number of lines: ";
    std::cin >> n;
    std::string *dynArrOfStr = new std::string[n];
    inputLines(dynArrOfStr, n);
    outputLines(dynArrOfStr, n);

    return 0;
}
#include <iostream>
#include <string>

void inputLines(std::string *dynArrOfStr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter element for position: " << i<<": ";
        std::getline(std::cin, dynArrOfStr[i]);
    }
    std::cout<<"\n";
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
    int n = 4;
    std::string command;
    std::string *dynArrOfStr = new std::string[n];
    inputLines(dynArrOfStr, n);
    std::cout<<"Now enter your command (end for reverse order output and anything for decline): ";
    std::getline(std::cin, command);
    if (command == "end")
    {
        outputLines(dynArrOfStr, n);
    }
    else{
        std::cout<<"Sorry! You have to be enter end as command to get output"<<std::endl;
    }
    
    return 0;
}
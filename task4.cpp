// Create a struct Person, with a name and surname (both std::string), and an age. Write a method that outputs the Person. Write a method that reads a Person from the standard input.
#include <iostream>
#include <string>

struct Person
{
    std::string name;
    std::string surename;
    int age;

    void outputMethod()
    {
        std::cout
            << "Your's name " << name
            << " Sure name " << surename
            << " Your's age " << age << std::endl;
    }
};

void outputPersondetails(const Person &p)
{
    std::cout
        << "Your's name " << p.name
        << " Sure name " << p.surename 
        << " Your's age " << p.age << std::endl;
}

int main()
{
    Person p;
    p.name = ' ';
    p.surename = ' ';
    p.age = 0;
    std::cout << "Enter person name: ";
    std::getline(std::cin, p.name);
    std::cout << "Enter your surename: ";
    std::getline(std::cin, p.surename);
    std::cout << "Enter you age: ";
    std::cin >> p.age;
    outputPersondetails(p);
    std::cout<<"-------------------------------------------------------------"<<std::endl;
    p.outputMethod();
    return 0;
}
#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Enter your name ";
    std::getline(std::cin, name);
    std::cout<<"Welcome: " <<name;

    return 0;
}
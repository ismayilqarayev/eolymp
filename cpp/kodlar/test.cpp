#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Adinizi daxil edin: ";
    std::getline(std::cin, name);
    std::cout << "Salam, " << name << "!" << std::endl;
    return 0;
}
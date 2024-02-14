#include<iostream>

int main() 
{
    int a;
    std::cin >> a;

    if (a == 12 || a == 1 || a == 2) 
    {
        std::cout << "Winter";
    }

    else if (a == 3 || a == 4 || a == 5) 
    {
        std::cout << "Spring";
    }

    else if (a == 6 || a == 7 || a == 8) 
    {
        std::cout << "Summer";
    }

    else if (a == 9 || a == 10 || a == 11) 
    {
        std::cout << "Autumn";
    }

    else 
    {
        std::cout << "Invalid month"; // Handle invalid input
    }

    return 0;
}
#include <iostream>
#include <list>

int main()
{
    // 1, 2, 3, 4, 5 elementlərindən ibarət olan siyahı yaradılır
    std::list<int> numbers{ 1, 2, 3, 4, 5 };

    // Siyahının ilk elementi
    int first { numbers.front() };  // 1
    // Siyahının son elementi
    int last { numbers.back() };  // 5

    // İlk və son elementləri çap edirik
    std::cout << "First: " << first << std::endl;
    std::cout << "Last: " << last << std::endl;

    // Range-based for döngüsü ilə siyahı elementlərini çap edirik
    for (int n : numbers)
        std::cout << n << "\t";
    std::cout << std::endl;

    // Iteratorlardan istifadə edərək siyahı elementlərini çap edirik
    for (auto iter = numbers.begin(); iter != numbers.end(); iter++)
    {
        std::cout << *iter << "\t";
    }
    std::cout << std::endl;

    return 0;
}

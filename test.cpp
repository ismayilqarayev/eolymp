
#include <iostream>
class App
{
public:
    void run()
    {
        int number_1 = 3;
        int number_2 = 4;
        std::cout << "run=" << number_1;
        std::cout << "run=" << number_2;
    }

    int get()
    {
        int number_8 = 8;
        int number_9 = 9;
        std::cout << "run=" << number_8 << std::endl;
        std::cout << "run=" << number_9 << std::endl;
        return number_8 + number_9;
    }
};

int main()
{
    
    int number_3 = 5;
    int number_4 = 6;
    std::cout << "run" << number_3;
    
    std::cout << "run" << number_4;

    App app;
    app.run();
    int result = app.get();
    std::cout << "Result of get() = " << result << std::endl;

    return 0;
}




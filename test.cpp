//https://www.eolymp.com/az/problems/911

#include <iostream>
#include <cmath>

int main() 
{
    double a, b, c, d;
    int x1, x2;
    
    std::cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);  
    
    if (d < 0)
        std::cout << "No roots";
    else {
        x1 = (-b + std::sqrt(d)) / (2 * a);
        x2 = (-b - std::sqrt(d)) / (2 * a);
        
        if (x1 < x2)
            std::cout << "Two roots: " << x1 << " " << x2;
        else if (x1 > x2)
            std::cout << "Two roots: " << x2 << " " << x1;
        else if (x1 == x2)
            std::cout << "One root: " << x1;
    }
    
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;

    int d = b * b - 4 * a * c;

    if (d < 0) 
    {
        cout << "No roots";
    }

    else if (d == 0) 
    {
        cout << "One root: " << -b / (2 * a);
    }

    else if (0 < d) 
    {
        // İki kök var
        int root1 = (-b - sqrt(d)) / (2 * a);
        int root2 = (-b + sqrt(d)) / (2 * a);
        cout << "Two roots: " << min(root1, root2) << " " << max(root1, root2);
    }

    return 0;
}
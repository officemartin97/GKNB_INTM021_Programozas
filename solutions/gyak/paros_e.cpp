#include <iostream>

int main()
{
    int i;
    std::cin >> i;

    if (i % 2 ==0)
    {
        std::cout << "A megadott szam paros.";
    }
    else
    {
        std::cout << "A megadott szam paratlan;";
    }
    
    std::cout << std::endl;
    return 0;
}
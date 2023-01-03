#include <iostream>
#include <vector>

/* Teszt a github miatt. */
/*Second test. */

int main()
{
    std::vector<std::vector<char>> t;
    srand((unsigned int)time(NULL));
    char toc[3][2] = {
        {'a','a'},
        {'b','b'},
        {'c','c'}
    };

    // Initializing the <vector> table of characters:
    for(int i=0; i < 2; i++)
    {
        std::vector<char> row;
        for(int j = 0; j < 3; j++)
        {
            int randomCharCounter[3] = {0,0,0};
            char randomChar = 'a' + rand()%3;

            
            row.push_back(randomChar);
        }
        t.push_back(row);
    }

    // Print out the <vector> table of characters:
    for(const auto &row : t)
    {
        for(const auto &c : row)
        {
            std::cout << c <<' ';
        }
        std::cout << std::endl;
    }



    /*int a;
    int b;
    std::cout << "Memoriajatek"<< std::endl << "____________" << std::endl;
    std::cout << "Sor: ";
    std::cin >> a;
    std::cout << "Oszlop: ";
    std::cin >> b;*/
}
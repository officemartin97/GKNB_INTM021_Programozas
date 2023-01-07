#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

int main()
{
    std::srand(unsigned(time(0)));
    std::vector<char> base;
    std::vector<std::vector<char>> table;
    std::vector<std::vector<char>> solution;

    // Filling up the solution table wit only '.' characters
    for(int i = 0; i < 5; i++)
    {
        std::vector<char> row;
        for (int i = 0; i < 5; i++)
        {
            row.push_back('.');
        }
        solution.push_back(row);
    }

    // Filling up the base vector with 25 characters
    // 9 for '*' :
    for (int i = 0; i < 9; i++)
    {
        base.push_back('*');
    }
    // 16 for '.' :
    for (int i = 0; i < 16; i++)
    {
        base.push_back('.');
    }

    // Randomly shuffle the characters of base
    random_shuffle(base.begin(), base.end());
    
    // Filling up table vector from base
    int idx=0;
    for (int i = 0; i < 5; i++)
    {
        std::vector<char> row;
        for (int i = 0; i < 5; i++)
        {
            row.push_back(base[idx]);
            idx++;
        }
        table.push_back(row);
    }

    /*
    for (auto row : solution)
    {
        for (auto col : row)
        {
            std::cout << col;
        }
        std::cout << std::endl;
    }
    */
    
    // Repeat cycle until table equals solution table
    do
    {
        int sor,oszl;
        // Printing out the table
        int i = 1;
        std::cout << " 1 2 3 4 5" << std::endl;
        for (auto row : table)
        {
            std::cout << i << ' ';
            for (auto col : row)
            {
                std::cout << col << ' ';
            }
            std::cout << std::endl;
            i++;
        }

        // Communicating with user
        std::cout << "Mezo sora: ";
        std::cin >> sor;
        std::cout << "Mezo oszlopa: ";
        std::cin >> oszl;
        std::cout << std::endl;
        sor--;
        oszl--;
        
        // Making sure the vaLUE OF THE CHOSEN CELL ON THE TABLE CHANGES CHARACTER
        if (table[sor][oszl]=='*') table[sor][oszl] = '.';
        else if (table[sor][oszl]=='.') table[sor][oszl] = '*';
        
        // CHANGING THE CHARACTERS TO THE OPPOSITE BY THE GIVEN ROW AND COLUMN
        // CHANGING COLUMNS BY ITERATING THROUGH ROWS
        for (int i = 0; i < 5; i++)
        {
            if (table[i][oszl] == '.') table[i][oszl] = '*';
            else if (table[i][oszl] == '*') table[i][oszl] = '.';
        }
        // CHANGING ROW BY ITERATING THROUGH COLUMNS
        for (int i = 0; i < 5; i++)
        {
            if (table[sor][i] == '.') table[sor][i] = '*';
            else if (table[sor][i] == '*') table[sor][i] = '.';
        }
        

    } while (table != solution);
    
    
    



    return 0;
}
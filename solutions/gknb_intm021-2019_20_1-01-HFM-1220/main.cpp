#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

/* Teszt a github miatt. */
/*Second test. */

int main()
{
    std::srand(unsigned(time(0)));
    std::vector<std::vector<char>> myvector;
    std::vector<char> basevector = {
        'a','a','b','b','c','c'
    };
    std::vector<std::vector<char>> temp = {
        {'*','*','*'},
        {'*','*','*'}
    };

    random_shuffle(basevector.begin(), basevector.end());

    int idx = 0;
    for(int i = 0; i < 2; i++) {
        std::vector<char> row;
        for (int j = 0; j < 3; j++ ) {
            row.push_back(basevector[idx]);
            idx++;
        };
        myvector.push_back(row);
    };

    bool eog;
    char prev = ' ';
    int previdx[2];
    int counter;
    while(temp != myvector){
        for (auto row : temp){
            for (auto column : row){
                std::cout << column << ", ";
            }
            std::cout << std::endl;
        }
        
        int sor;
        int oszl;
        std::cout << "Megforditando kartya sora: ";
        std:: cin >> sor;
        std::cout << "Megforditando kartya oszlopa: ";
        std::cin >> oszl;

        temp[sor-1][oszl-1] = myvector[sor-1][oszl-1];
        if (prev == ' '){
            prev = myvector[sor-1][oszl-1];
            previdx[0] = sor-1;
            previdx[1] = oszl-1;
            std::cout << prev << std::endl;
        }
        else{
            if(prev == myvector[sor-1][oszl-1]) {
                for (auto row : temp){
                    for (auto column : row){
                        std::cout << column << ", ";
                    }
                    std::cout << std::endl;
                }
                std::cout << "Grat faszi!" << std::endl;
                prev = ' ';
            }
            else {
                for (auto row : temp){
                    for (auto column : row){
                        std::cout << column << ", ";
                    }
                    std::cout << std::endl;
                }
                std::cout << "Ez most nem jott ossze faszi :(" << std:: endl;
                prev = ' ';
                temp[previdx[0]][previdx[1]] = '*';
                temp[sor-1][oszl-1] = '*';

            }
        }
        counter++;
    }
    std::cout << "Gratulalok, " << counter << " lepesbol sikeresen befejezted a jatekot! :)";
    
    return 0;
}
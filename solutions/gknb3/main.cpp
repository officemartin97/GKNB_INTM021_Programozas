#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


int main() 
{
    std::vector<std::string> words;
    std::vector<int> counter;
    std::string temp;


    std::cout << "Adja meg a szöveget!" << std::endl;
    
    getline(std::cin, temp);
    

    // Separator
    for (int i = 0; i < temp.length(); i++)
    {
        std::cout << temp[i];
        std::string currentWord;
        if (temp[i] != ' ')
        {
            currentWord += temp[i];
            if (currentWord == "[vege]")
            {
                break;
            }
        }
        else
        {
            if (std::find(words.begin(), words.end(), currentWord) != words.end() )
            {
                 counter[(std::find(words.begin(), words.end(), currentWord))-words.begin()] += 1;
            }
            else
            {
                words.push_back(currentWord);
                currentWord = "";
                counter.push_back(1);
            }
        }
    }

    for (auto val : words)
    {
        std::cout << val << std::endl;
    }
    std::cout << std::endl;


    return 0;
}
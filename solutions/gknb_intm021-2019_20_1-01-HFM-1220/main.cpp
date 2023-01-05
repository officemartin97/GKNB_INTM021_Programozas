#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

/* Teszt a github miatt. */
/*Second test. */

int main()
{
    /*pick a random element from array and paste it, then remove it from the source array
    or
    initialize a set of characters in array then swpa them and spice things up by repositioning the elements randomly*/
    std::srand(std::time(0));
    char myArray[] = {
        'a','a','b','b','c','c'
    };

    char myArray2 = std::random_shuffle(myArray, myArray+1);

    for (auto& element : myArray){
        std::cout << myArray;
    }
    return 0;
}
#include <iostream>


int main()
{
    int akt = 0, min = 0, max = 0;

    std::cout << "Adjon meg szamokat, majd a program eldonti mennyi a max es mennyi a min." << std::endl;
    std::cout << "(POZITIV EGESZ SZAMOKAT ADJON MEG)" << std::endl;
    std::cout << "Negativ sztam megadasaval befejeződik a program." << std::endl;

    while(akt >= 0)
    {
        std::cin >> akt;

        akt > max ? max = akt : max = max;
        akt < min ? min = akt : min = min;
        
    }
    std::cout << std::endl;

    std::cout << "MIN: " << min << std::endl;
    std::cout << "MAX: " << max << std::endl;
    
    return 0;
}
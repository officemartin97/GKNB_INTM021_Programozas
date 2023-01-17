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

        if (akt > max)
        {
            max = akt;
        }
        else if (akt < min)
        {
            min = akt;
        }
        
    }
    std::cout << std::endl;

    std::cout << "MIN: " << min << std::endl;
    std::cout << "MAX: " << max << std::endl;
    
    return 0;
}
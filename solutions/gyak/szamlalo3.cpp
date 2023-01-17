#include <iostream>
#include <cstdio>
#define DB 10

int main(void)
{
    int i=0, k, feher=0, egyeb=0;
    int szamjegyek[DB] = {0};
    
    std::cout << "Szamjegyek, ures- es egyeb karakterek leszamlalasa\na bemeneten EOF-ig vagy Ctrl + D- vagy C-ig.\n\n";
    
    while( (k=std::cin.get()) != EOF)
    {
        if (k>='0' && k<='9'){ szamjegyek[k-'0']++; }
        else if (k == ' ' || k == '\n' || k == '\t'){ feher++; }
        else { egyeb++; }
    }

    i = 0;
    std::cout << "Szamjegyek:\n";
    while (i < DB)
    {
        std::cout << i << "\t" << szamjegyek[i] << "db\n";
        i++;
    }
    std::cout << "Ures karakterek: " << feher << "db\n";
    std::cout << "Egyeb karakterek: " << egyeb << "db\n";

    return 0;
}
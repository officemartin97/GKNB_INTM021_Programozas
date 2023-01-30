#include <iostream>
#include <iomanip>



double terulet (double a) {

    double solution;
    float temp, sqrt;

    sqrt = 3 /2;
    temp = 0;

    while(sqrt != temp){
        temp = sqrt;
        sqrt = (3/temp + temp) / 2;
    }

    solution = 0.25*(sqrt)*(a*a);

    return solution;
}


int main() {
    
    std::cout << std::fixed << std::setprecision(3) << terulet(2.) << std::endl;


    return 0;
}
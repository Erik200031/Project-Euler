#include <iostream>
#include <vector>
#include <math.h>

int main () {

    bool flag = true;
    std::vector<double> numbers;
    for (int i = 2; i <= 100; ++i) {
        for (int j = 2; j <= 100; ++j) {
            for ( auto it : numbers) {
                if ( it != pow (i,j)) {
                    flag = true;
                }
                else if ( it == pow (i,j)) {
                    flag = false;
                    break;
                }
            }
            if ( flag ) {
                numbers.push_back( pow(i,j));
                std::cout << i<<" ^ "<< j <<" = "<< pow(i,j) << std::endl;
            }
        }
    }
    std::cout << numbers.size();
}
#include <iostream>
#include <math.h>
#include <vector>

bool is_twice_square (int num) {
    num /= 2;
    double tmp = sqrt(num);
    if (tmp == int(tmp)) {
        return true;
    }
    return false;
}

bool is_prime (int num) {
    for(int i = 2; i <= sqrt(num); ++i) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {

    std::vector<int> some_prime_numbers;
    for (int i = 2; i < 10000; ++i) {
        if ( is_prime(i) ) {
            some_prime_numbers.push_back( i );
        }
    }
    int result {};
    int j {};
    bool breaker = true;
    for ( int i = 3; breaker; i+= 2 ) {
        j = 0;
        breaker = false;
        while (i >= some_prime_numbers[j]) {
            if ( is_twice_square( i - some_prime_numbers[j] ) ) {
                breaker = true;
                break;
            }
            ++j;
        }
        if(breaker == false) {
            result = i;
        }
    }
    std::cout<<"Result : " << result; 


}
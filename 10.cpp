#include <iostream>
#include <cmath>
bool is_prime (int num) {
    for(int i=2; i <= sqrt(num); ++i) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {

    size_t sum {};
    for (int i = 2; i < 2000000; ++i) {
        if( is_prime(i) ) {
            sum += i;
        }
    }
    std::cout << sum;
}
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

size_t foo (int num) {
    size_t i = 2, count = 0;
    while (true) {
        if ( is_prime(i) ) {
            ++count;
        }
        if (count == num) {
            return i;

        }
        i++;
    }
    return -1;
}


int main () {

    std::cout<<foo(10001);

}
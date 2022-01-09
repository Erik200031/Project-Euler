#include <iostream>
#include <math.h>
bool is_prime (int num) {
    for(int i=2; i <= sqrt(num); ++i) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {

   size_t number = 600851475143;
   size_t tmp;
   for (size_t i = sqrt(number); i >= 2; --i ) {
       if( number % i == 0  && is_prime(i)) {
           std::cout << i ;
           break;
       }
   }
}
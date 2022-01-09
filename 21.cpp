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

    size_t sumf {};
    size_t sums {};
    size_t count_amicable {};
    size_t sum_amicable {};
    for ( int i = 1; i < 10000; ++i ) {
        sums = 0;
        sumf = 0;
        for ( int j = 1; j < i; ++j ) {
            if ( i % j == 0 ) {
                sumf += j;
            }
        }
        if ( i != sumf && !( is_prime(i) && is_prime(sumf) ) ) {
            for( int k = 1; k < sumf; ++k ) {
                if( sumf % k == 0 ) {
                    sums += k;
                }
            }
        }
        if ( i == sums ) {
            std::cout << i << " " << sumf << " " << sums << "\n";
            ++count_amicable;
            sum_amicable += i;
        }
    }
    std::cout <<"Count is: " << count_amicable;
    std::cout <<"\nSum is: " << sum_amicable;
}
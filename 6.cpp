#include <iostream>
#include <math.h>
int main () {

    unsigned long long sum {};
    unsigned long long sum1 {};
    for(size_t i = 1; i <= 100; ++i) {
        sum += pow(i,2);
        sum1 += i;
    }
    std::cout<<sum1*sum1 - sum;
}
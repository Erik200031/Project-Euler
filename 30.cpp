#include <iostream>
#include <math.h>

int main () {
    
    size_t sum {};
    size_t tmp {};
    size_t total {};
    int digit {};
    for (int i = 2; i < 355000; ++i) {
        tmp = i;
        sum = 0;
        while (tmp != 0) {
            digit = tmp % 10;
            sum += pow(digit,5);
            tmp /= 10;
        }
        if (sum == i) {
            total += i;
        }
    }
    std::cout << "Total: "<< total;
}
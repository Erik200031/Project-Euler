#include <iostream>

int main () {

    size_t result {};
    size_t last_ten = 10000000000;
    
    for (int i = 1; i <= 1000; i++) {
        size_t tmp = i;
        for (int j = 1; j < i; j++) {
            tmp *= i;
            tmp %= last_ten;
        }
        result += tmp;
        result %= last_ten;
    }
    std::cout<<result;
}
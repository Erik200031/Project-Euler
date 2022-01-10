#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

bool is_prime (int num) {
    if(num <= 1) {return false;}
    for(int i = 2; i <= sqrt(num); ++i) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_prime_for_string (const std::string& number) {
    long num = std::stol(number);
    if(num <= 1) {return false;}
    for(int i = 2; i <= sqrt(num); ++i) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {

    int only_eleven {};
    size_t total {};
    long number = 11;
    std::string tmp;
    bool flag = true;
    while (only_eleven != 11) {
        tmp = "";
        if ( is_prime( number ) ) {
            tmp = std::to_string(number);
            while ( !tmp.empty() ) {
                flag = true;
                if ( !is_prime_for_string(tmp) ) {
                    flag = false;
                    break;
                }
                tmp.pop_back();
            }
            if (flag) {
                tmp = std::to_string(number);
                while ( !tmp.empty() ) {
                    flag = true;
                    if ( !is_prime_for_string(tmp) ) {
                        flag = false;
                        break;
                    }
                    tmp.erase(0,1);
                }
            }
            if (flag) {
                total += number;
                only_eleven++;
            }
        }
        number++;
    }
    std::cout<<"Total : "<<total;
}
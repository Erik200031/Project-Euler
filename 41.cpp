#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <vector>

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


bool is_unique(const std::string & str)
{
     int count{};
    for(int i = 0; i < str.size(); ++i)
    { 
        if (count & ( 1 << (str[i] - 'a') ) ) 
        return false;
        else {
        count |= ( 1 << (str[i] - 'a') );
        } 
    }
    return true;
} 

int main () {

    std::string number = "987654321";  //max pandigital number
    std::string for_index(number);
    std::string tmp(number);
    std::vector <int> results;
    int result {};
    bool is_found = false;
    int count {};
    int index {};
    do {
        if( is_unique( number ) && is_prime_for_string( number ) ) {
            results.push_back(std::stoi(number));
            is_found = true;
        }
        std::next_permutation(number.begin(),number.end());
        if( tmp == number ){
            if (is_found) {
                break;
            }
            index = number.find( for_index[count] );
            number.erase(index,1);
            tmp = number;
            count++;
        }
    }while (true);

    for (auto it : results) {
        if (result < it) {
            result = it;
        }
    }
    std::cout << "Result : "<< result;
}
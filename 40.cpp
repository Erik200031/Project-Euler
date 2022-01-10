#include <iostream>
#include <string>

int main () {

    std::string numbers;
    for(int i = 1; ; ++i ) {
        if( numbers.size() > 1000000 ) {
            break;
        }
        numbers += std::to_string(i);
    }
    size_t mul = (numbers[0] - '0') * (numbers[9] - '0') * (numbers[99] - '0') * (numbers[999] - '0') * (numbers[9999] - '0') * (numbers[99999] - '0') * (numbers[999999] - '0') ;
    std::cout << mul;
}
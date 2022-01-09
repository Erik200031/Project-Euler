#include <iostream>
#include <vector>

bool check_number (size_t num, const std::vector<int> & abundant_numbers ) {
    int index;
    for (int i = 0; i < abundant_numbers.size(); ++i) {
        if ( abundant_numbers[i] > num ) {
            index = i;
            break;
        }
    }

    for (int i = 0; i < index; ++i) {
        for (int j = 0; j < index; ++j) {
            if (abundant_numbers[i] + abundant_numbers[j] == num) {
                return true;
            }
        }
    }
    return false;
}

int main () {

    std::vector<int> abundant_numbers;
    int tmp_sum {};
    for (int i = 2; i < 28123; ++i) { 
        tmp_sum = 0;
        for (int j = 1; j < i; ++j) {
            if (i % j == 0) {
                tmp_sum += j;
            }
        }
        if (tmp_sum > i) {
            abundant_numbers.push_back( i );
        }
    }
    size_t total {};
    for (int i = 0; i < 28123; ++i) {
        std::cout<<"i->"<<i<<"\n";
        std::cout<<"Total->"<<total<<"\n";
        if ( !check_number(i , abundant_numbers) ) {
            total += i;
        }
    }
    std::cout <<"Total: "<< total;
}
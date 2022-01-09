#include <iostream>

bool is_that ( size_t num) {
    int count {};
    for( int i = 2; i<=num; ++i ) {
        if ( num % i == 0 ) {
            count++;
        }
    }
    if(count >= 500){
        return true;
    }
    return false;
}

int main () {

    size_t current_num {};
    for( size_t current_num_index = 2; ; ++current_num_index ) {
        current_num = 0;
        for (size_t j = 1; j <= current_num_index; ++j ) {
            current_num += j;
        }
        std::cout<<current_num<<"\n";
        if(is_that(current_num)){
            std::cout << "Result : "<< current_num;
            exit(0);
        }
    }
}
#include <iostream>
#include <math.h>
#include <string>

int main () {

    std::string helper;
    helper = std::to_string ( pow( 2, 1000 ) );
    size_t sum {};
    for ( auto it : helper ) {
        if( it >= '0' && it <= '9' )
        sum += it - '0';
    }
    std::cout << sum;

}
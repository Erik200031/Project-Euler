#include <iostream>
#include <string>
#include <algorithm>

std::string to_binary(int num)
{
    std::string r;
    while( num != 0 ) {
        r = ( num % 2 == 0 ? "0" : "1" ) + r;
        num /= 2;
    }
    return r;
}

bool is_palindrom (const std::string & number ) {
    std::string tmp( number );
    std::reverse( tmp.begin(), tmp.end() );
    if( number == tmp ) {
        return true;
    }
    return false;
}

int main () {

    size_t total {};
    for (int i = 0; i < 1000000; ++i ) {
        if( is_palindrom( std::to_string(i) ) && is_palindrom( to_binary( i ) ) ) {
            total += i;
        }
    }
    std::cout << "Total : " << total;
}
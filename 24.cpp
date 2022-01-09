#include <iostream>
#include <string>
#include <algorithm>

int main () {

    std::string number = "0123456789";
    const int limit = 1000000;
    int perm_count = 1;

    while ( std::next_permutation( number.begin(), number.end() ) ) {
        perm_count++;
        if (perm_count == limit) {
            std::cout << "Result : " << number;
            break;
        }
    }
}
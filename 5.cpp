#include <iostream>

int main () {

    int i = 1;
    int res {};
    while (true) {
        for(int j = 1; j <= 20; ++j ) {
            if(i % j != 0) {
                ++i;
                j = 1;
            }
        }
        res = i;
        break;
    }
    std::cout<<res;
}
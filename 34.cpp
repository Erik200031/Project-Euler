#include <iostream>

size_t fact ( int num ) {
    int f = 1;
    for ( int i = 1; i <= num; ++i ) {
        f *= i;
    }
    return f;
}

int main () {

    size_t sum {};
    size_t total {};
    const size_t MAX = 2540161;
    int tmp;
    for (int i = 3; i < MAX; ++i ) {
        tmp = i;
        sum = 0;
        while ( tmp != 0 ) {
            sum += fact(tmp % 10);
            tmp /= 10;
        }
        if ( sum == i ) {
            total += i;
        }
    }
    std::cout << "Total : "<<total;
}
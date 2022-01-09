#include <iostream>

int main () {

    int day {2};
    int sunday {};
    int month[12] = { 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for ( int i = 1901; i < 2001; ++i ) {
        if ( i % 4 == 0 ) {
            month[1] = 29;
        }
        else {
            month[1] = 28;
        }
        for (int j = 0; j < 12; ++j ) {
            if ( day == 0 ) {
                sunday++;
            }
            day += month[j];
            day %= 7;
        }
    }
    std::cout << sunday;
}
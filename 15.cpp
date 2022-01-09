#include <iostream>

int main () {
    unsigned long long g[21][21];
    for (int i = 0; i < 21; ++i) {
        g[i][0] = 1;
        g[0][i] = 1;
    }
    
    for (int i = 1; i < 21; ++i) {
        for (int j = 1; j < 21; ++j) {
            g[i][j] = g[i-1][j] + g[i][j-1];
        }
    }
    std::cout<<g[20][20];
    
}
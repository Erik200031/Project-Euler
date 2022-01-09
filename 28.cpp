#include <iostream>

int main () {

    int size = 1001;
    size_t count = 1;
    size_t value = 1;
    size_t total {};
    size_t tmp {};
    int matrix[size][size];
    matrix[size/2][size/2] = value;
    int i = size/2;
    int j = size/2;
    while (count != size+1) {
        tmp = 0;
        if(count % 2 == 1) {
            tmp = count;
            while (tmp && (value < (size * size))) {
                ++j;
                ++value;
                matrix[i][j] = value;
                --tmp;
            }
            if(value < size * size){
                tmp = count;
                while (tmp) {
                    ++i;
                    ++value;
                    matrix[i][j] = value;    
                    --tmp;                
                }
            }
            count++;
        }
        if(count % 2 == 0 && value < size * size) {
            tmp = count;
            while (tmp) {
                --j;
                ++value;
                matrix[i][j] = value;
                --tmp;
            }
            if(value < size * size){
                tmp = count;
                while (tmp) {
                    --i;
                    ++value;
                    matrix[i][j] = value;
                    --tmp;
                }
            }
            count++;
        }
    }

    for(int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if(i == j) {
                total += matrix[i][j];
            }
            else if ( i == size - j - 1) {
                total += matrix[i][j];
            }
        }
    }
    std::cout<<total;

}
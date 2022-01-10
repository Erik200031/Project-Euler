#include <iostream>
#include <string>
#include <algorithm>

bool is_that (size_t num) {
    size_t tmp1 = 2 * num;
    size_t tmp2 = 3 * num;
    size_t tmp3 = 4 * num;
    size_t tmp4 = 5 * num;
    size_t tmp5 = 6 * num;
    std::string numstr = std::to_string(num);
    std::string tmp = std::to_string(tmp1);
    std::string tmpcopy(tmp);
    do{
        std::next_permutation(tmp.begin(),tmp.end());
        if (tmp == numstr) {
            break;
        }
        else if(tmpcopy == tmp){
            return false;
        }
    }while(true);
    tmp = std::to_string(tmp2);
    tmpcopy = tmp;
    do{
        std::next_permutation(tmp.begin(),tmp.end());
        if (tmp == numstr) {
            break;
        }
        else if(tmpcopy == tmp){
            return false;
        }
    }while(true);

    tmp = std::to_string(tmp3);
    tmpcopy = tmp;
    do{
        std::next_permutation(tmp.begin(),tmp.end());
        if (tmp == numstr) {
            break;
        }
        else if(tmpcopy == tmp){
            return false;
        }
    }while(true);

    tmp = std::to_string(tmp4);
    tmpcopy = tmp;
    do{
        std::next_permutation(tmp.begin(),tmp.end());
        if (tmp == numstr) {
            break;
        }
        else if(tmpcopy == tmp){
            return false;
        }
    }while(true);

    tmp = std::to_string(tmp5);
    tmpcopy = tmp;
    do{
        std::next_permutation(tmp.begin(),tmp.end());
        if (tmp == numstr) {
            break;
        }
        else if(tmpcopy == tmp){
            return false;
        }
    }while(true);
    return true;
}

int main () {

    size_t number = 1;

    while (true) {
        if ( is_that(number) ) {
            std::cout<<"Result : "<<number;
            break;
        }
        number++;
    }
}
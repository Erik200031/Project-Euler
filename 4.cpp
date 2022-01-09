#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
bool is_palindrom(int number) {
    std::string tmp = std::to_string(number);
    std::string tmp1(tmp);
    std::reverse(tmp1.begin(),tmp1.end());
    if(tmp1 == tmp) {
        return true;
    }
    return false;
}


int main () {
    int max {};
    std::vector<int> vec;
    for(int i = 999; i>=100; --i) {
        for(int j = 999; j>=100; --j) {
            if(is_palindrom(i * j)) {
                vec.push_back(i*j);
            }
        }
    }
    for(auto it : vec) {
        if(it > max) {
            max = it;
        }
    }
    std::cout<<max;
    
}
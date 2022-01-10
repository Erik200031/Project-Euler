#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main () {

    std::vector<std::string> separate;
    std::vector<int> some_triangle_nums;
    std::ifstream fin;
    std::string alphabet;
    size_t tmp {};
    int sum {};
    int count {};
    char ch='A';
    while(ch != 'Z'+1){
        alphabet+=ch;
        ch++;
    }
    fin.open ("42_words.txt");
    if (!fin.is_open()) {
        std::cout<<"not";
    }
    while (!fin.eof()) {
        std::string str;
        fin >> str;
        separate.push_back(str);
    }

    for (int i = 1; i < 100; ++i) {
        some_triangle_nums.push_back((i+1)*i/2);
    }

    for (int i = 0; i < separate.size(); ++i) {
        sum = 0;
        tmp = 0;
        for (int j = 0; j < separate[i].size(); ++j) {
            tmp = alphabet.find(separate[i][j]) ;
            if (tmp != std::string::npos)
                sum += tmp + 1;
        }
        for( int it = 0; it < some_triangle_nums.size(); ++it ) {
            if (some_triangle_nums[it] == sum) {
                ++count;
                break;
            }
            else if (it > sum) {
                break;
            }
        }
    }
    std::cout << count;

}
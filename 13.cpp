#include <iostream> 
#include <fstream>
#include <vector>

int main () {

    std::vector<std::string> separate;
    std::ifstream fin;
    fin.open("13_number.txt");
    if(!fin.is_open()){
        std::cout<<"not";
    }
    while(!fin.eof()){
        std::string str;
        getline(fin,str);
        separate.push_back(str);
    }
    double sum {};
    for ( auto it : separate ) {
        sum += std::stod(it);
    }
    std::string res = std::to_string(sum);
    std::cout<<res.substr(0,10);
}
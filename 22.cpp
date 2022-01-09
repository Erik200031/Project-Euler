#include <iostream>
#include <fstream>
#include <list>
#include <vector>

int main () {

    std::list<std::string> lst;             //for sorting names
    std::vector<std::string> names;
    std::ifstream fin;
    std::string tmp;
    std::string alphabet;
    char ch='A';
    while(ch != 'Z'+1){
        alphabet+=ch;
        ch++;
    }
    fin.open( "22_names.txt" );
    if( fin.is_open() ) {
        while ( !fin.eof() ) {
            tmp = "";
            fin >> tmp;
            lst.push_back(tmp);
        }
    }
    lst.sort();
    for ( auto it : lst ) {
        names.push_back( it );
    }
    int index {};
    size_t sum_word {};
    size_t score = 0;
    size_t total {};
    for ( int i = 0; i < names.size(); ++i ) {
        sum_word = 0;
        for ( int j = 0; j < names[i].size(); ++j ) {
            index = alphabet.find( names[i][j] );
            sum_word += index + 1;
        }
        score = (i+1) * sum_word;
        total += score;
    }
    std::cout << total;
    fin.close();
}
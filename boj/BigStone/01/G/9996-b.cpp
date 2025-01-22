#include <iostream>
#include <string>
#include <vector>


std::vector<std::string> split(std::string input, std::string delimeter){

    std::vector<std::string> ret;
    std::string token;
    long long pos = 0;

    while( (pos = input.find( delimeter )) != std::string::npos ){
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimeter.length());        
    }

    ret.push_back(input);
    return ret;
}


int main(){
    int loops;
    std::string pattern;
    std::string word;
    std::vector<std::string> parse;
    std::vector<std::string> list;

    std::cin >> loops;
    std::cin >> pattern;

    for(int i=0; i<loops; i++){
        std::cin >> word;
        list.push_back(word);
    }

    parse = split(pattern, "*");

    for(std::string str : list){
        if( str.length() < pattern.length() -1 ){
            std::cout << "NE" << "\n";
            continue;
        }

        if( (str.substr(0, parse[0].length() ) == parse[0] ) && (str.substr( str.length() - parse[1].length(), str.length()  -1) == parse[1]) ){
            std::cout << "DA" << "\n";
        }else{
            std::cout << "NE" << "\n";
        }
    }

    return 0;
}
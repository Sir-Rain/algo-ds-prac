#include <iostream>
#include <string>
#include <vector>

int cnt;
std::string pattern, word;
int s_point, e_point;
std::vector<std::string> pattern_v;

std::vector<std::string> split(std::string input, std::string delimeter){
    std::vector<std::string> ret;
    long long pos = 0;
    std::string token = "";    

    while( (pos = input.find(delimeter)) != std::string::npos){
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimeter.length());
    }

    ret.push_back(input);
    return ret;
}

int main(){
    

    std::cin >> cnt; 
    std::cin >> pattern;

    pattern_v = split(pattern, "*");

    for(int i=0; i< cnt; i++){
        std::cin >> word;
        s_point = pattern_v[0].length();
        e_point = word.length() - pattern_v[1].length();

        if( e_point < 0 || word.length() < pattern.length() - 1 ){
            std::cout << "NE" << "\n";
            continue;
        }

        if( (word.substr(0, s_point)) == pattern_v[0] ){
            
            if( word.substr(e_point) == pattern_v[1] ){
                std::cout << "DA" << "\n";
            }else{
                std::cout << "NE" << "\n";
            }
            
        }else {
            std::cout << "NE" << "\n";
        }
    }

    return 0;
}
#include <iostream>
#include <string>

int cnt, star_index;
std::string pattern, prefix, suffix, word;

int main(){

    std::cin >> cnt;
    std::cin >> pattern;

    star_index = pattern.find("*");
    prefix = pattern.substr(0, star_index);
    suffix = pattern.substr(star_index + 1);

    for(int i = 0; i<cnt; i++){
        std::cin >> word;

        if(word.length() < pattern.length()-1){
            std::cout << "NE\n"; 
        }else{
            if(word.substr(0, prefix.length()) == prefix && word.substr( word.length() - suffix.length()) == suffix ) std::cout << "DA\n";
            else std::cout << "NE\n"; 
        }
    }
    return 0;
}
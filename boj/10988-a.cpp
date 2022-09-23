#include <iostream>
#include <string> 
#include <algorithm>

std::string word, temp;

int main(){
    std::cin >> word;
    temp= word;
    std::reverse(temp.begin(), temp.end());
    if(word == temp) std::cout << 1;
    else std::cout << 0;
}
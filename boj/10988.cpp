#include <iostream>
#include <algorithm>
#include <string>


bool isPalindrome(std::string word){
    int size = word.size() -1; 
    if(word[0] != word[size]){
        return 0;
    }

    if(size <= 2 && word[0] == word[size]){
        return 1;
    }


    return isPalindrome(word.substr(1, size -1 ));
}

int main(){
    std::string word;
    std::cin >> word;

    std::cout << isPalindrome(word);
}
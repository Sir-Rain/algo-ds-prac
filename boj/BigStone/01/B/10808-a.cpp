#include <iostream>
#include <string>

typedef long long li;

std::string str;
int cnt[26] = {0,};
int main(){

    std::cin >> str;
    for(char a : str){
        cnt[a - 'a']++;
    }

    for(int n : cnt){
        std::cout << n << " ";
    }

    return 0;
}
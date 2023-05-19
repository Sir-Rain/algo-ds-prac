#include <iostream>
#include <string>

// 첫 줄 선수명
// 첫 글자 같은 선수명 ( 알파벳 26자 )
// 5명 없으면 PREDAJA

int nop;
int firstChar[26] = {0, };
int flag = false;
int main(){

    std::cin >> nop;

    for(int i=0; i<nop; i++){
        std::string name;
        std::cin >> name;

        char f = name.at(0);
        int index = f - 97;
        // std::cout << index << ":";
        firstChar[index] = firstChar[index] + 1;
    }

    for(int i=0; i<26; i++){
        if( firstChar[i] > 4) {
            std::cout << (char) ( i+97);
            flag = true;
        }
    }

    if(!flag){
        std::cout << "PREDAJA";
    }


    return 0;
}
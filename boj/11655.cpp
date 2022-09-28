#include <iostream>
#include <string>
#include <algorithm>

std::string word;
char ret[100] = {0, };
int i = 0;
int main(){

    std::getline(std::cin, word);

    for(char s : word){
        if( s >= 65 && s<91){
            if(s + 13 >= 91){
                s = s - 26;
            }
            s = s + 13;
        }

        if( s >= 97 && s <123 ){
            if(s + 13 >= 123){
                s= s-26;
            }
            s = s+ 13;
        }
        ret[i] = s;
        i++;
    }

    i = 0;

    do{
        std::cout << ret[i];
        i++;
    }while(ret[i] != 0);

    return 0;   
}
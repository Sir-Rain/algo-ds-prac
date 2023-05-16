#include <vector>
#include <iostream>

int ret[26] = {0, };
int main(){
    std::string input;

    std::cin >> input;

    for(char s: input){
        ret[s-97] = ret[s-97] + 1;
    }

    for(int i: ret){
        std::cout << i << " ";
    }
    
    return 0;
}
#include <iostream>
#include <algorithm>
#include <string>

int result[26] = {0,};
int main(){
    int index = 0;
    std::string val;
    std::cin >> val;

    for(char a: val){
        index = (int) a- 97;
        result[index] = result[index] + 1;
    }

    for(int i : result){
        std::cout << i << " ";
    }

    return 0;
}
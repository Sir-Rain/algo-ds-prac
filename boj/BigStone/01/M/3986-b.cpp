#include <iostream>
#include <string>
#include <vector>

int n, count = 0;
std::string word;
int main(){

    std::cin >> n;

    for(int i=0; i<n; i++){
        std::vector<char> tempList;
        std::vector<char> charList;

        std::cin >> word;

        for(char s : word){
            charList.push_back(s);
        }

        // ABAB
        // B     BA    BAB
        //ABA    AB     A

        // AABB
        // B
        // AAB

        while( !charList.empty() ){
            char c = charList.back();
            charList.pop_back();
            if( !tempList.empty() && c == tempList.back()){
                tempList.pop_back();
         }else {
            tempList.push_back(c);
         }
        }
        if(tempList.empty()) count++;
    }

    std::cout << count;

    return 0;
}
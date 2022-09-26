#include <iostream>
#include <string>

int word_arr[27] = {0, };
int a_count= 0;
int e_count =0;
std::string a_name;

int main(){

    std::cin >> a_count;

    for(int i =0; i<a_count; i++){
        std::cin >> a_name;
        word_arr[(a_name[0] - 96)]++;
    }

    for(int i=1; i<27; i++){
        if(word_arr[i] >= 5){
            std::cout << (char) (i +96);
        }else{
            e_count++;
        }
    }

    if(e_count == 26){
        std::cout << "PREDAJA";
    }

    return 0;
}


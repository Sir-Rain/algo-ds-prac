#include <iostream>
#include <algorithm>
#include <vector>


int main(){
    std::vector<int> ninth_list;

    int input;
    for(int i =0; i<9; i++){
        std::cin >> input;
        ninth_list.push_back(input);
    }

    std::sort(ninth_list.begin(), ninth_list.end());

    do{
        int sum = 0;
        for(int i=0; i<7; i++){
            sum = sum + ninth_list[i];
        }
        if(sum == 100){
            for(int i=0; i<7; i++){
                    std::cout << ninth_list[i] << "\n";
            }
            break;
        }
    }while(next_permutation(ninth_list.begin(), ninth_list.end()));



    return 0;
}
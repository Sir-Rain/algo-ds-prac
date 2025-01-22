#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int> ninth_list;

    int nums;
    int sum = 0;
    for(int i=0; i<9; i++){
        std::cin >> nums;
        sum = sum + nums;
        ninth_list.push_back(nums);
    }

    sum = sum - 100;

    bool flag = false;
    int num2;
    int num2_index;
    for(int i=0; i< ninth_list.size()-1; i++){
        for(int j=1; j< ninth_list.size(); j++){
            if( ninth_list[i]+ ninth_list[j] == sum){
                num2 = ninth_list[j];
                ninth_list.erase(ninth_list.begin()+i);
                num2_index = find(ninth_list.begin(), ninth_list.end(), num2) - ninth_list.begin();
                ninth_list.erase(ninth_list.begin()+ num2_index);
                flag = true;
                break; 
            }
        }
        if(flag){
            break;
        }
    }

    std::sort(ninth_list.begin(), ninth_list.end());

    for(int i=0; i< ninth_list.size() ; i++){
        std::cout << ninth_list[i] << "\n";
    }
    

    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// 9개의 입력을 받는다.
// 카운트에 총합 저장
// remain에 총합인 100을 뺀 것을 저장.
// 2개의 합이 remain 인 것을 건너뜀??

int main(){

    std::vector<int> ret;
    int count = 0;
    int remain;
    int first, second;

    for(int i=0; i<9; i++){
        int input;

        std::cin >> input;

        count = count + input;
        ret.push_back(input);
    }

    remain = count - 100;

    for(int i=0; i<(int) ret.size()-1; i++){
        for(int j=1; j<(int) ret.size(); j++){
            if(ret[i] + ret[j] == remain){
                first = ret[i];
                second = ret[j];
            }
        }
    }

    std::sort(ret.begin(), ret.end());

    for(int output : ret){
        if(output == first || output == second){
            continue;
        }

        std::cout << output << "\n";
    }
    

    return 0;
}
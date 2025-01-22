#include <iostream>

// 1 1 1 1 1 1
// 0 0 1 1 1 0
// 0 1 1 1 1 1 1 1

// 1 2 3 3 2 1 1
// 5 6 3 3 6 5 5 
// 15 + 12 + 6 

// 트럭은 세 대까지

// a원 , b원, c원


int trucks[104] = {0, };
int price[4] = {0, };
int count = 0;
int main(){

    std::cin >> price[1] >> price[2] >> price[3];

    for(int i =0; i<3; i++){
        int start, end;
        std::cin >> start >> end;

        for(int j=start; j<end; j++){
            trucks[j] = trucks[j] + 1;
        }
    }

    for(int i =1; i<sizeof(trucks)/sizeof(*trucks); i++){
        int p = trucks[i];
        count = count + price[p] * p;
    }

    std::cout << count;

    return 0;

}
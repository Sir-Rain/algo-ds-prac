// 1 2 3 4 5 6
// 0 0 3 4 5 0
// 0 2 3 4 5 6 7 8

// 1 2 3 3 3 2 1 1 

// 5 6 3 3 3 6 5 5

#include <iostream>

int cnt[101];
int s, e;
int price[4];

void timeCount(int s, int e){

    for(int i=s ; i<e; i++){
        cnt[i]++;
    }
}

int main(){
    int sum = 0;
    for(int i=1; i<4; i++){
        std::cin >> price[i];
    }

    for(int i=0; i<3; i++){
        std::cin >> s >> e;
        timeCount(s, e);
    }

    for(int i : cnt){
        sum = sum + (price[i] * i);
    }

    std::cout << sum;

    return 0;
}

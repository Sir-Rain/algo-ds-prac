#include <iostream>
int A, B, C, a ,b, cnt[104], ret;

int main(){
    std::cin >> A >> B >> C;

    for(int i=0; i<3; i++){
        std::cin >> a >> b;
        for(int j=a; j<b ; j++) cnt[j]++;
    }

    for(int j=1; j<100; j++){
        if(cnt[j]){
            if(cnt[j] == 1) ret += A;
            else if(cnt[j] == 2) ret += B * 2;
            else if(cnt[j] == 3) ret += C * 3;
        }
    }

    std::cout << ret << "\n";

    return 0;
}
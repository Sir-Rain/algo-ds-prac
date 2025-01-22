#include <iostream>
#include <vector>
#include <algorithm>

int a[9], sum = 0;
std::pair<int, int> ret;

void solve(){
    for(int i=0; i<9; i++){
        for(int j=0; j<i; j++){
            if(sum - a[i] - a[j] == 100){
                ret = {i, j};
                return;
            }
        }
    }
}

int main(){
    std::vector<int> v;
    for(int i=0; i<9; i++){
        std::cin >> a[i];
        sum = sum + a[i];
    }

    solve();
    for(int i=0; i< 9; i++){
        if(ret.first == i || ret.second == i) continue;
        v.push_back(a[i]);
    }

    std::sort(v.begin(), v.end());

    for(int i : v){
        std::cout << i << "\n";
    }

    return 0;

}
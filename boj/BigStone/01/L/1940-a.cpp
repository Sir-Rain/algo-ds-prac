#include <iostream>


int n, m, cnt, a[15004];
int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::cin >> n >> m;

    for(int i=0; i<n; i++) std::cin >> a[i];

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] + a[j] == m)cnt++;
        }
    }

    std::cout << cnt << "\n";

    return 0;
}
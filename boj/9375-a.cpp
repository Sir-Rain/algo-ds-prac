#include <iostream>
#include <string>
#include <map>

int t, n;
std::string a, b;

int main(){
    std::cin  >> t;

    while(t--){
        std::map<std::string, int> _map;
        std::cin >> n;

        for(int i=0; i<n; i++){
            std::cin >> a >> b;
            _map[b]++;
        }

        long long ret = 1;
        for(auto c : _map){
            ret *= ((long long) c.second +1);
        }
        ret--;
        std::cout << ret << "\n";
    }

    return 0;
}
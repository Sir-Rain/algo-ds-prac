#include <iostream>
#include <string>
#include <map>

int n, m;
std::map<std::string, int> mp;
std::string arr[100004];
std::string pm, question;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    std::cin >> n >> m;

    for(int i=1; i<n+1; i++){
        std::cin >> pm;

        mp.insert(std::make_pair(pm, i));
        arr[i] = pm;
    }

    for(int i=1; i<m+1; i++){
        std::cin >> question;

        if(question[0] > 64){
            std::cout << mp.find(question) -> second << "\n";
        }else {
            int index = std::stoi(question);
            std::cout << arr[index] << "\n";
        }
    }

    return 0;
}
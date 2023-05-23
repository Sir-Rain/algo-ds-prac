#include <iostream>
#include <string>
#include <algorithm>
#include <map>


std::map<std::string, int> intList ;
std::map<int, std::string> stringList;
std::string pm, question;
int n,m;
int main(){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    std::cin >> n >> m;

    for(int i=1; i<n+1; i++){
        std::cin >> pm;
        intList.insert(std::make_pair(pm, i));
        stringList.insert(std::make_pair(i, pm));
    }

    for(int i=0; i<m; i++){
        std::cin >> question;

        if(question[0] > 64 ){
            std::cout << intList.find(question) -> second << "\n";
        }else {
            int index = std::stoi(question);
            std::cout << stringList.find(index) -> second << "\n";
        }
    }
    

    return 0;
}
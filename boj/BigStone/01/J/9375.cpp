#include <iostream>
#include <map>
#include <string>

int k, n;
std::map<std::string, int> category;
std::string temp, wear;

int main(){
  std::ios::sync_with_stdio(0);
  std::cin.tie(0); std::cout.tie(0);

  std::cin >> k;

    for(int i=0; i<k; i++){
        std::cin >> n;
        for(int i=0; i<n; i++){
            std::cin >> temp >> wear;
            if (category.find(wear) == category.end()){
            category.insert({wear, 1});
            }else {
            int cnt = category[wear];
            category[wear] = cnt + 1;
            }
        }
        int ret = 1;
        for(auto iter : category){
            ret = ret * (iter.second + 1);
        }
        std::cout << ret -1 << "\n";
        category.clear();
  }
  return 0;
}
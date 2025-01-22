#include <iostream>
#include <string>
#include <algorithm>
#include <map>


int n, m;
std::string p_arr[100004];
std::string temp, ans;
std::map<std::string, int> p_map[27];

int main(){
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cin >> n >> m ;

for(int i=1; i< n+1; i++){
  std::cin >> temp;
    p_arr[i] = temp;

    if( temp[0] < 97 ){
        p_map[temp[0] - 64].insert({temp, i});
    }else if( temp[temp.size()] < 97 ){
        p_map[temp[temp.size()] - 64].insert({temp, i});
    }
  }

  for(int i=1; i< m+1; i++){
    std::cin >> ans;

    int idx = atoi(ans.c_str());

    if(idx != 0){
      std::cout << p_arr[idx] << "\n";
      continue;
    }

    if( ans[0] < 97 ){
      int a = p_map[ans[0] - 64].find(ans) -> second;
      std::cout << a << "\n";
    }else if( temp[ans.size()] < 97 ){
int a = p_map[temp[ans.size()] - 64].find(ans) -> second;
      std::cout << a << "\n";
    }

    }

    return 0;
}
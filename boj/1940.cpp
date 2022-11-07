#include <iostream>

int n, m, temp, cnt, nums[15001];

int main(){

  std::cin >> n;
  std::cin >> m;

    for(int i =0; i<n; i++){
    std::cin >>temp;
        nums[i] = temp;
    }

    for(int i = 0; i<n -1; i++){
      for(int j=i+1; j<n; j++){
        if(nums[i] + nums[j] == m){
          cnt++;
        }
      }
    }
    std::cout << cnt << "\n";
    return 0;
}
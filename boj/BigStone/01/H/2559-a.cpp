#include <iostream>
#include <algorithm>

int n, k, temp, psum[1000001], ret = -1000000;

int main(){
  std::cin >> n >> k;

  for(int i=1; i<=n; i++){
    std::cin >> temp;
    psum[i] = psum[i -1] + temp;
  }

  for(int i=k; i<=n; i++){
    ret = std::max(ret, psum[i] - psum[i-k]);
  }

  std::cout << ret << "\n";
  return 0;
}
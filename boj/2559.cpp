#include <iostream>
#include <algorithm>

int temp_arr[100004] = {0, };
int ret[100004] = {0, };
int all_d, w_d, num, temp_sum=0, cnt=0;

int main(){
    std::cin >> all_d >> w_d;

    for(int i=1; i < all_d + 1; i++){
      std::cin >> num;
      temp_arr[i] = num;

      temp_sum = temp_sum + num;

      if( i >= w_d){
        temp_sum = temp_sum - temp_arr[i - w_d];
        ret[i-w_d] = temp_sum;
        cnt++;
      }
    }

    std::cout << *std::max_element(ret, ret+cnt);

    return 0;

}
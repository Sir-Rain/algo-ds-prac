#include <iostream>
#include <string>
#include <algorithm>

std::string word, mid, a, b;
int spell_list[26];
int one_cnt;

int main(){

  std::cin >> word;

  for(int i = 0; i< word.size(); i++){
    spell_list[ word[i] - 65 ]++;
  }

  for(int i =0; i< 26; i++){
    if(spell_list[i] % 2 == 1){
      one_cnt++;
        mid = (char) (i + 65);
    }

    if(one_cnt > 1){
        std::cout << "I'm Sorry Hansoo\n";
        return 0;
    }
  }

  for(int i=0; i<26; i++){
    for(int j=0 ; j< spell_list[i]/ 2; j++ ){
      a = a + (char) (i + 65);
      b = b + (char) (i + 65);
    }
  }

  std::reverse(b.begin(), b.end());

  std::cout << a << mid << b;

  return 0;
}
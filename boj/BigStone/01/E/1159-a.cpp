#include <iostream>
#include <string>
int n, cnt[26];

std::string s, ret;

int main(){
    std::cin >> n;

    for(int i =0; i<n; i++){
        std::cin >> s;
        cnt[s[0]- 'a']++;
    }

    for(int i=0; i<26; i++){ if(cnt[i]>=5) ret+= i + 'a';}
    if(ret.size()) std::cout << ret << "\n";
    else std::cout << "PREDAJA" << "\n";

    return 0;
}

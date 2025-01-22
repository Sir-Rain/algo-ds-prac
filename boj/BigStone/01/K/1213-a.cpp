#include <iostream>
#include <string>

std::string s, ret;
int cnt[200], flag;
char mid;
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    std::cin >> s;

    for(char a: s) cnt[a]++;

    for(int i= 'Z'; i >= 'A'; i--){
        if(cnt[i]){
            if(cnt[i] & 1){ // binary
                mid = char(i); flag++;
                cnt[i]--;
            }
            if(flag == 2 ) break;
            for(int j=0; j < cnt[i]; j += 2){
                ret = char(i) + ret;
                ret += char(i);
            }
        }
    }

    if(mid)ret.insert(ret.begin() + ret.size() / 2, mid);
    if(flag == 2) std::cout << "I'm Sorry Hansoo\n";
    else std::cout << ret << "\n";

    return 0;
}
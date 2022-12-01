#include <iostream>
#include <string>
#include <stack>

int cnt, ret=0;
std::string word;

int main(){

    std::cin >> cnt;

    for(int i =0; i<cnt; i++){
        std::cin >> word;

        if ( word.size() < 2 || word.size() > 100000){
            break;
        }

        std::stack<char> s;
        std::stack<char> ts;

        for(char c : word ){
            s.push(c);
        }


        while( s.size() > 1 ){
            char c = s.top();
            s.pop();
            ts.push(c);

            if( s.top() == ts.top()){
                s.pop();
                ts.pop();
            }

            if( ts.size() > 1 ){
                char temp = ts.top();
                ts.pop();
                if( ts.top() == temp ){
                    ts.pop();
                }else {
                    ts.push(temp);
                }
            }
        }

        if( s.size() == 1 && !(ts.empty()) ){
            if(s.top() == ts.top()){
                s.pop();
                ts.pop();
            }
        }

        if( s.empty() && ts.empty() ) {
            ret++;
        }
    }

    std::cout << ret << "\n";


    return 0;
}


#include <vector>
#include <string>
#include <iostream>

std::string decode_reverse(const std::string& exp) {
    std::vector<std::string> space;

    for(char c: exp) {
        if( c >= '0' && c <= '9') {
            space.push_back({c});
        } else {
            std::string second = space.back();
            space.pop_back();

            std::string first = space.back();
            space.pop_back();

            if( c == '*' || c == '/') {
                if(first.size() > 1) first = "(" + first + ")";
                if(second.size() > 1) second = "(" + second + ")";
            }


            switch(c) {
                case '+':
                    space.push_back(first + " + " + second);
                    break;
                case '-':
                    space.push_back(first + " - " + second);
                    break;
                case '*':
                    space.push_back(first + " * " + second);
                    break;
                case '/':
                    space.push_back(first + " / " + second);
                    break;
            }
        }
    }

    return space.back();
}

int main() {

    std::cout << decode_reverse("612+*8-");

    return 0;
}
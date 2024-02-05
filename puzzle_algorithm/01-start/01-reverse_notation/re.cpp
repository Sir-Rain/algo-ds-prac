#include <vector>
#include <string>
#include <iostream>

double calc_poland(const std::string& exp) {

    std::vector<double> space;

    for (char c: exp) {
        if(c >= '0' && c <= '9') {
            int add = c -'0';

            space.push_back(add);
        } else {
            double second = space.back();
            space.pop_back();
            double first = space.back();
            space.pop_back();

            switch(c) {
                case '+':
                    space.push_back(first + second);
                    break;
                case '-':
                    space.push_back(first - second);
                    break;
                case '/':
                    space.push_back(first / second);
                    break;
                case '*':
                    space.push_back(first * second);
                    break;
            }
        }
    }
    
    return space.back();
}

int main() {

    std::cout << calc_poland("612+*8-");
}
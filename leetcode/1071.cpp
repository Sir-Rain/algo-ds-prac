class Solution {

    int getGcd (int a, int b) {
        int r = a % b;
        if(r == 0) {
            return b;
        }

        return gcd(b, r);
    }
public:
    string gcdOfStrings(string str1, string str2) {

        string s = "";

        if(str1 + str2 != str2 + str1) {
            return s;
        }

        int longerLeng = str1.size() > str2.size() ? str1.size() : str2.size();
        int shortLeng = str1.size() <= str2.size() ? str1.size() : str2.size();

        int gcd = getGcd(longerLeng, shortLeng);


        for(int i=0; i<gcd; i++) {
            if(str1[i] == str2[i]) {
                s = s + str1[i];
            }
        }

        return s;
    }
};
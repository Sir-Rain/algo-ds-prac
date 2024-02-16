class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int fullSize = word1.size() + word2.size();
        
        std::string mergedString = "";

        int countIndex = 0;

        while( fullSize != mergedString.size() ) {

            if( word1.size() > countIndex) {
                mergedString += word1[countIndex];
            }

            if( word2.size() > countIndex ) {
                mergedString += word2[countIndex];
            }

            countIndex++;
        } 
    
        return mergedString;
    }
};
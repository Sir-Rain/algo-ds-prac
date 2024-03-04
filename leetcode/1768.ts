function mergeAlternately(word1: string, word2: string): string {

    const wordLength: number = word1.length + word2.length;

    let mergedString = "";

    let countIndex: number = 0;

    while( mergedString.length !== wordLength) {

        if(word1[countIndex]) {
            mergedString = mergedString + word1[countIndex];
        }

        if(word2[countIndex]) {
            mergedString = mergedString + word2[countIndex];
        }

        countIndex++;
    }

    return mergedString;
};
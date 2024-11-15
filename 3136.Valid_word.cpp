// Leetcode Solution
class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) return false ;
        bool num=0, vowel=0, conso=0 ;
        for (int i=0; i<word.size(); i++){
            char ele = tolower(word[i]) ;
            if (!isalnum(word[i])) return false ;
            else if (word[i] >= '0' && word[i] <= '9') num = 1 ;
            else if (ele=='a' || ele=='e' ||ele=='i' || ele=='o' || ele=='u') vowel = 1 ;
            else conso = 1 ;
            }
        if (vowel && conso) return true ;
        return false ;
    }
};
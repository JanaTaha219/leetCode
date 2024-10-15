class Solution {
public:
    long long minimumSteps(string s) {
        long long swap = 0, black = 0;
        for (int i = 0; s[i]; i++){
            if(s[i] == '0')
                swap += black;
            else
                black++;    
        }
        return swap;
    }
};
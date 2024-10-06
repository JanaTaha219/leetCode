class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        for (int i = 0; s[i]; i++){
            if (s[i] == 'I')
                result += 1;
            else if (s[i] == 'V'){
                result += 5;
                if (i > 0 && s[i-1] == 'I')
                    result -= 2;
            }
            else if (s[i] == 'X'){
                result += 10;
                if (i > 0 && s[i-1] == 'I')
                    result -= 2;
            }
            else if (s[i] == 'L'){
                result += 50;
                if (i > 0 && s[i-1] == 'X')
                    result -= 20;
            }
            else if (s[i] == 'C'){
                result += 100;
                if (i > 0 && s[i-1] == 'X')
                    result -= 20;
            }
            else if (s[i] == 'D'){
                result += 500;
                if (i > 0 && s[i-1] == 'C')
                    result -= 200;
            }
            else if (s[i] == 'M'){
                result += 1000; 
                if (i > 0 && s[i-1] == 'C')
                    result -= 200;  
            }         
        }
        return result;
    }
};
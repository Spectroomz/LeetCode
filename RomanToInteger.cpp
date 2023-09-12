class Solution {
public:
    int romanToInt(string s) {
        int result = 0;

        int length = s.length();

        if(length == 0) return 0;

        for(int i = 0; i < length; ++i) {
            switch(s[i]){
            case 'I':
                result += 1;
                break;
            case 'V':
                result += 5;
                break;
            case 'X':
                result += 10;
                break;
            case 'L':
                result += 50;
                break;
            case 'C':
                result += 100;
                break;
            case 'D':
                result += 500;
                break;
            case 'M':
                result += 1000;
                break;
            }
        }
        for(int k = 1; k < length; ++k) {
            if((s[k] == 'V' || s[k] == 'X') && s[k-1] == 'I'){
                result -= 1 + 1;
            }

            if((s[k] == 'L' || s[k] == 'C') && s[k-1] == 'X'){
                result -= 10 + 10;
            }

            if((s[k] == 'D' || s[k] == 'M') && s[k-1] == 'C'){
                result -= 100 + 100;
            }
        }
        return result;
    }
};

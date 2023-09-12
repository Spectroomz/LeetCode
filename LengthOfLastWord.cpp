class Solution {
public:
    int lengthOfLastWord(std::string& s) {

        std::string lastWord = "";

        int lastLetterIndex = s.find_last_not_of(' ');
        int end = s.size()-1;

        for(int i = lastLetterIndex; i >= 0; i--) {
          
          if(s[i] == ' ' && lastWord.size() > 0) return lastWord.size();
          else lastWord += s[i];
        }

        return lastWord.size();

        }
};

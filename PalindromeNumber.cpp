class Solution {
public:
    bool isPalindrome(int x) {
  std::string s1="";
  std::string s2="";
  int y = abs(x);

  std::string len = std::to_string(y);
  int digits[len.length()];

      for(int i=0; i<len.length() ; i++)
        {
        digits[i]=y%10;
        y=y/10;
    }

if(x < 0){ s1 += "-";}
  for(int j = 0; j < len.length(); ++j) {
    
    s1 += std::to_string(digits[j]);
  }

  for(int k = len.length()-1; k >= 0; --k) {
    s2 += std::to_string(digits[k]);
    
  }
    if (x < 0){ s2 += "-";}
    
    if (s1 == s2) return true;
    else return false;
    }

};

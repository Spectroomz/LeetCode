class Solution {
public:
    bool isValid(string s) {
        stack<char> str;

        for(auto i:s){
            if(i == '(' or i == '[' or i == '{') str.push(i);
            else {
                if(str.empty() or (str.top() == '(' and i != ')') or (str.top() == '[' and i != ']') or (str.top() == '{'               and i != '}')) return false;
                str.pop();
            }
        }
        return str.empty();
    }
};

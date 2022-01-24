#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        for (char& c : s) {
            switch (c) {
                case '(': par.push(c); break;
                case '{': par.push(c); break;
                case '[': par.push(c); break;
                case ')': if (par.empty() || par.top()!='(')
                {
                    return false;
                }
                else
                {
                    par.pop();
                    break;
                }
                case '}': if (par.empty() || par.top()!='{')
                {
                    return false;
                }
                else
                {
                    par.pop();
                    break;
                }
                case ']': if (par.empty() || par.top()!='[')
                {
                    return false;
                }
                else
                {
                    par.pop();
                    break;
                }
                default: ;
            }
        }
        return par.empty() ;
    }
};
class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        for(int i=s.length()-1 ; i>=0 ; i--)
        {
            if(c > 0 && s[i] == ' ') return c;
            if(s[i] != ' ') c++;
            if(s[i] == ' ') continue;
        }
    return c;
    }
};
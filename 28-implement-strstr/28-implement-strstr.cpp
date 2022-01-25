class Solution {
public:
    int strStr(string haystack, string needle) {
        int count = 0;
        if(haystack.size() == 0 && needle.size() == 0)
        {
            return 0;
        }
        else if(haystack.size() < needle.size()) return -1;
        for(int i=0;i<haystack.size()-needle.size()+1;i++)
        {
            count = 0;
            if ( haystack[i] == needle[0])
            {
                for(int j=0;j<needle.size();j++)
                {
                    if(i+j > haystack.size()) break;
                    if(haystack[i+j] != needle[j]) break;
                    if(haystack[i+j] == needle[j])
                    {
                        count = count + 1;
                    }
                }
            }
        if(count == needle.size())
        {
            return i;
        }
        }
        return -1;
    }
};
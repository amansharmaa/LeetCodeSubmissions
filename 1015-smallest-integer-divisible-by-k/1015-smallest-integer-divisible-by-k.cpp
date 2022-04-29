class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0) return -1;
        unsigned long long int n=1U;
        int remainder=1;
        unsigned long long nn=18374686479671623680U;
        int digit=1;
        while(n<nn)
        {
            if(n%k!=0)
            {
                remainder = n%k;
                digit += 1;
                n=remainder*10+1;
            }
            else
            {
                return digit;
            }
        }
        return -1;
    }
};
class Solution {
public:
    int reverse(int x) {
        if (x == pow(-2 , 31)) return 0;
        int flag = 0;
        if ( x < 0)
        {
            x = -x;
            flag = 1;
        }
        long int r=0;
        while(x>0)
        {
            r = r*10 + x%10;
            x = x/10;
        }
        if (r < pow(-2 , 31) ||r > pow(2 , 31)-1 ) return 0;
        if(flag == 0) return r;
        return -r;
    }
};
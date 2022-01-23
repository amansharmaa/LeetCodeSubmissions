class Solution {
public:
    bool isPalindrome(int x) {
		int temp,t2;
        long long int r=0;
        t2=x;
		while(x>0)
		{
			r=r*10;
			temp=x%10;
			x=x/10;
			r=r+temp;
		}
		if (r==t2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

    };
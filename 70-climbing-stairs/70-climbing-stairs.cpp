class Solution {
public:
    int climbStairs(int n) {
       	int t1 , a1=1 , a2=2;
	t1 = n;
	for (int i = 2; i < t1 ; i++)
	{
		n = a1 + a2;
		a1 = a2;
		a2 = n;
	}
		return n;

    }
};
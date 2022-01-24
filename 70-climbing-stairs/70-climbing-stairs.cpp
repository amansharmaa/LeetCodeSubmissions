unordered_map<int , int> memo;
unordered_map<int,int>::iterator it;
int stair(int n)
{
	it = memo.find(n);
	if (it != memo.end())
	{
		return memo[n];
	}
	if(n<2){
		return 1;
	}
	memo[n] = stair(n-1) + stair(n-2);
	return memo[n];
}
class Solution {
public:
    int climbStairs(int n) {
       return stair(n);
    }
};
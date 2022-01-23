class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string t1 , t2 ;
	int xx=0,i,lee,flag=0;
	t1 = strs[0];
	t2 = strs[1];
    if(strs.size()==1)
    {
        return t1;
    }
	lee=t1.length();
	for(i=0;i<lee;i++)
	{
		if(t1[i]==t2[i])
		{
			xx=xx+1;
		}
	}
	for(auto x : strs)
	{
		A :
		if(x.substr(0,xx)==t1.substr(0,xx))
		{
			continue;

		}
		else
		{
			xx=xx-1;
			goto A;
		}
	}
	
		return t1.substr(0,xx);
    }
};
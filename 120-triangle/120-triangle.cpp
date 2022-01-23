class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
    int m,a=0,j;
    j = tri.size();
    for (int i = j-2; i >=0; i--) 
    {    
		m = tri[i].size();
		for (int k = 0 ; k < m; k++)
		{
			tri[i][k]= tri[i][k] + 	min(tri[i+1][k],tri[i+1][k+1]);	
		}
	}
          return tri[0][0];
}
};
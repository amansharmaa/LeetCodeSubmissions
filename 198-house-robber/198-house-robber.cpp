class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        else if(nums.size()==2)
        {
            return max(nums[0],nums[1]);
        }
        int i=nums[0];
        int j=max(nums[0],nums[1]);
        int rob=0;        
        for (int k=2;k<nums.size();k++)
        {
            rob = max( i + nums[k] , j );
            i = j;
            j = rob;
        }
        return rob;
        
    }
};
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> count;
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(count[nums[i]] == 1)
            {
                return nums[i];
            }
        }
        return 0;
    }
};
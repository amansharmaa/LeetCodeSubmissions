class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int count = 0;
    vector<int>::iterator new_end;
    new_end = remove(nums.begin(), nums.end(), val);
    for (std::vector<int>::iterator p = nums.begin(); p != new_end; ++p)
    {
        count++;
    }

        return count;;
    }
};
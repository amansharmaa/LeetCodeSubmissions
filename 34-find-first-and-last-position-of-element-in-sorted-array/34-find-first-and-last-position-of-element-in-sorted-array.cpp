class Solution {
public:
    vector<int> searchRange(vector<int>& arr2, int target) {
        vector<int> ans;
            if (binary_search(arr2.begin(), arr2.end(), target))
            {
        ans.push_back(lower_bound(arr2.begin(), arr2.end(), target)- arr2.begin());
        ans.push_back(upper_bound(arr2.begin(), arr2.end(), target)- arr2.begin()-1);
            }
        else {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};
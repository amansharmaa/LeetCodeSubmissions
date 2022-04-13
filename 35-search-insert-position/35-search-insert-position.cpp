class Solution {
public:
    int searchInsert(vector<int>& v, int tar) {
        std::vector<int>::iterator low1;
            low1 = std::lower_bound(v.begin(), v.end(), tar);
        return (low1 - v.begin());
    }
};
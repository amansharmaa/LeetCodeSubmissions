class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) 
    {
        map<int,vector<int>> mp; 
        for(auto i:pieces) 
            mp[i[0]] = i;
        vector<int> result;
        for(auto a:arr) 
        {
            if(mp.find(a)!=mp.end()) 
                result.insert(result.end(),mp[a].begin(),mp[a].end());
        }
        return result ==arr;
    }
};
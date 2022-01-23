
class Solution {
public:
    int majorityElement(vector<int>& nums) {

    unordered_map<int , int> maap;
    for (auto x:nums)
    {
        maap[x]++ ;
    }
    int k=0;
  int max=0;
    for (auto x : maap){

      if(x.second>k){
          k=x.second;
          max=x.first;
      }}
      return max;
}};

    
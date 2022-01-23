class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& a) {
        sort(a.begin(),a.end());
        int i,k=1,n=a.size();
        for(i=0;i<n;i++){
            if(a[i]>=k){
                a[i]=k;
                k++;
            }
        }
        return a[n-1];
    }
};
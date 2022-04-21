class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int diff;
        int point1=0;
        int point2=1;
        while(point2 < prices.size())
        {
            diff=prices[point2]-prices[point1];
            if(diff<0){
                point1 += 1;
                point2 = point1 + 1;
                continue;
            }
            else{
                if(diff>max){
                    max = diff;
                }
            }
                point2 += 1;

        }
        return max;
       
    }
};
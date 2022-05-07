class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> ans;
        int temp,temp2,temp3;
        int flag = 0 ;
        for(int i=left;i<right+1;i++)
        {
            flag = 0;
            temp2=i;
            temp3=i;
            while(temp3>0)
            {
                temp = temp3%10;
                temp3 = temp3/10;
                if(temp == 0) {
                    flag = 1;
                    break;
                }
                if(temp2%temp!=0)
                {
                    flag = 1;
                }
            }
            if(flag == 0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
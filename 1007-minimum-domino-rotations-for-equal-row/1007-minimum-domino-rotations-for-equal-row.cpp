class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int match = 0;
        int count=0;
        int countbot=0;
        for (int i=1;i<7;i++)
        {   
            int size=tops.size();
            for (int j=0;j<tops.size();j++)
            {
                if(tops[j] == i)
                {   
                    match += 1;
                    countbot++;
                }
                if(bottoms[j] == i)
                {
                    match += 1;
                    count++;
                }
                if(tops[j] == bottoms[j])
                {
                    match -= 1;
                    count--;
                    countbot--;
                }
                if(tops[j] != i && bottoms[j] != i)
                {
                    break;
                }
                if(match == size  )
                {
                    return min(count , countbot);
                }
            }
            countbot = 0;
            count = 0;
            match=0;
          
        }
        return -1;
    }
};
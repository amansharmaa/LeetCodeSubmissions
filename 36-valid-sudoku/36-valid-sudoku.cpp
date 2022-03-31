class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int flag = 0;
        char temp;
        for (int i=0;i<9;i++)
        {
            for (int j=0;j<9;j++)
            {
               if(board[i][j] != '.')
               {
                   temp=board[i][j];
                   for (int k=0;k<9;k++)
                   {
                     if(board[i][k] == temp && k!=j && board[i][k] != '.')
                     {
                         flag = 1;
                     }
                    if(board[k][j] == temp && k!=i && board[k][j] != '.')
                     {
                         flag = 1;
                     }   
                   }
                   int a=i/3;
                   int b=j/3;
                   vector<int> aa,bb;
                   if(a==0)
                   {
                       aa = {0,1,2};
                   }
                   else if(a==1)
                   {
                        aa = {3,4,5};
                   }    
                   else if(a==2)
                   {
                        aa = {6,7,8};
                   } 
                   if(b==0)
                   {
                        bb = {0,1,2};
                   }
                   else if(b==1)
                   {
                        bb = {3,4,5};
                   }    
                   else if(b==2)
                   {
                        bb = {6,7,8};
                   }                    
                   for(int ii=0;ii<3;ii++)
                   {
                   for(int jj=0;jj<3;jj++)
                   {
                       if(board[aa[ii]][bb[jj]] == temp && aa[ii] != i && bb[jj] != j)
                       {
                           flag = 1;
                       }
                   }    
                   }
               }
            }   
        }
    if(flag==0)
    {
        return true;
    }
        else{
        return false;
    }}
};
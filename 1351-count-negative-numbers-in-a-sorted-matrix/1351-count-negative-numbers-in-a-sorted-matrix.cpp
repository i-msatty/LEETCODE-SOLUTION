class Solution {
public:
    int countNegatives(vector<vector<int>>& grid)
    {int count=0,m,n=0;
     m=grid.size();
     n=grid[0].size();
     cout<<n;
     count=0;
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {   if(grid[i][j]<0)
                 count++;
     }
     }
     return count;   
    }
};
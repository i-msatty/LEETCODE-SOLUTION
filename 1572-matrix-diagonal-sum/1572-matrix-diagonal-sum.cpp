class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int j=mat[0].size()-1;
        set<int>s;
        for(int i=0;i<mat.size();i++)
        { sum+=mat[i][i];
         s.insert(mat[i][i]);
        }
         for(int i=0;i<mat.size();i++)
        {
            if(i==(j-i))
                continue;
            else
                sum+=mat[i][j-i];
        }
        return sum;
    }
};
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>num;
        if(numRows==0)
            return num;
        int count=1;
        while(count<=numRows)
        {        
        if(count==1)
            num.push_back({1});
        if(count==2)
            num.push_back({1,1});
        if(count>2)
        {
            vector<int> temp;
            temp.push_back(1);
            for(int i=1;i<num[count-2].size();i++)
            {
                int sum=num[count-2][i-1]+num[count-2][i];
                temp.push_back(sum);
            }
            temp.push_back(1);
            num.push_back(temp);
        }
            count++;
        }
        return num;
    }
};
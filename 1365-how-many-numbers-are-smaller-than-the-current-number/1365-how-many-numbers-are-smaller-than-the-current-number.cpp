class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector <int> count;
        for(int i=0;i<nums.size();i++)
        {int c=0;
            for(int j=0;j<nums.size();j++)
            {
                if(i==j)
                    continue;
                if(nums[j]<nums[i] && i!=j)
                    c++;
            }
         count.push_back(c);
        }
        return count;
    }
};
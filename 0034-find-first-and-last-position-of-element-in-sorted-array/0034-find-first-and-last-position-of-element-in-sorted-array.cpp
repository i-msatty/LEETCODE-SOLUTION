class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>a;
        int i;
        int b=0,c=-1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                if(b==0)
                {
                    a.push_back(i);
                    b=1;
                    c=i;
                }
                else
                {
                    c=i;
                }
            }
        }
        a.push_back(c);
        if(b==0)
        {
            a.push_back(-1);
        }
        return a;
    }
};
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) 
    {
        int max=nums[0],min=nums[0];
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
                max=nums[i];
            if(nums[i]<min)
                min=nums[i];
        }
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=max && nums[i]!=min)
            {
                return nums[i];
            }
        }
        return -1;
    }
};
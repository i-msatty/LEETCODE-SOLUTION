class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        long majority=nums[0];
        long votes=1;
        for(long i=1;i<nums.size();i++)
        {
            if(nums[i]==majority)
            {
                votes++;
            }
            else if( nums[i]!=majority && votes!=0)
            {
                votes--;
            }
            else
            {
                majority=nums[i];
                votes=1;
            }
        }
        return majority;
    }
};
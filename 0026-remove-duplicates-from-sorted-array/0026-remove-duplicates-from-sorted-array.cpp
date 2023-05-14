class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int newindex=0;
        if(nums.size()==1|| nums.size()==0)
        {
            return nums.size();
        }
        nums[newindex]=nums[0];
        for(int iterating_index=1;iterating_index<nums.size();iterating_index++)
        {
            if(nums[newindex]!=nums[iterating_index])
            {
                newindex++;
                nums[newindex]=nums[iterating_index];
            }
        }
        return newindex+1;
    }
};
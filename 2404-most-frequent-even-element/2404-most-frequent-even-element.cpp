class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,max=-1,x,index=-1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                x=count(nums.begin(),nums.end(),nums[i]);
                if(max<x)
                {
                    max=x;
                    index=i;
                }
            }
        }
        if(index!=-1)
        {
            return nums[index];
        }
        else
        {
            return -1;
        }
    }
};
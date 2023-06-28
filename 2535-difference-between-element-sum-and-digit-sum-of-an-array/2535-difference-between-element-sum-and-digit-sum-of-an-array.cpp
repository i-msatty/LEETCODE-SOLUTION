class Solution {
public:
    int differenceOfSum(vector<int>& nums) 
    {
        int es=0;
        int ds=0;
        int i=0,last=0;
        for(i=0;i<nums.size();i++)
        {
            es=es+nums[i];
            while(nums[i]!=0)
         {
             last=nums[i]%10;
             ds=ds+last;
             nums[i]/=10;
         }
        }  
        return abs(es-ds);
    }
};
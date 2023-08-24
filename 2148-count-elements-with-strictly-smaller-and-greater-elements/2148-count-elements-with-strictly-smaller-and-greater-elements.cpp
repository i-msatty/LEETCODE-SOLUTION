class Solution {
public:
    int countElements(vector<int>& nums) 
    {
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(greater(i+1,nums[i],nums) && smaller(i-1,nums[i],nums))
                sum++;
        }
        return sum;       
    }
     bool greater(int i,int val,vector<int> nums)
               {
                   while(i<nums.size())
                   {
                       if(nums[i]>val)
                           return 1;
                       else
                           i+=1;
                   }
                 return 0;
               }
               bool smaller(int i,int val,vector<int> nums)
               {
                   while(i>=0)
                   {
                       if(nums[i]<val)
                           return 1;
                       else
                           i-=1;
                   }
                   return 0;
               }
};
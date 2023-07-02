class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
     int i;
        int j;
        int temp;
        int size=nums.size()-1;
        for(i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==0 && i!=size)
            {
                temp=nums[i];
                for(j=i;j<size;j++)
                {
                    nums[j]=nums[j+1];
                }
                nums[j]=temp;
                size--;
            }
        }
    }
};
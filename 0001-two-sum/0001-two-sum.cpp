class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
     vector<int> a;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i==j)
                    continue;
                if(nums[i]+nums[j]==target)
                {
                    a.push_back(i);
                    a.push_back(j);
                    return a;
                }
            }
        }
        return a;
    }
};

/*int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i,j;
    returnSize=(int*)malloc(sizeof(int)*2);
    for(i=0;i<numsSize;i++)
    { 
        for(j=0;j<numsSize;j++)
        {
            if(i==j)
                continue;
            if(nums[i]+nums[j]==target)
            {
               returnSize[0]=i;
               returnSize[1]=j;
            }
        }
    }
return returnSize;
}*/
class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int ll=0,ul=nums.size()-1;
        int mid;
        while(ll<=ul)
        {mid=(ul+ll)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
            {
                ul=mid-1;
            }
            else
            {
                ll=mid+1;
            }
        }
        return -1;
        
    }
};
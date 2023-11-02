class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> x;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int left =i+1;
            int right=nums.size()-1;
            while(left<right)
            {
                int sum=nums[i]+ nums[left] + nums[right];
                if(sum==0)
                { 
                    x.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(sum<0)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        vector<vector<int>> yes (x.begin(),x.end());
        return yes;
    }
};
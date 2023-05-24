class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     long int max_value = 1;
        set<int> map;
        for(int i =0; i<nums.size();i++)
        {
            map.insert(nums[i]);
            if(nums[i]>max_value)
            {
                max_value = nums[i];
            }
        }
        
        for(int i =1; i<=max_value+1; i++)
        {
            if(map.find(i)==map.end())
            {
                return i;
            }
        }
        
    return 0;
    }
};
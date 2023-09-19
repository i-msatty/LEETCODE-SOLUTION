bool arr[100000][1];
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int i;
       set<int> s;
        for(i=0;i<nums.size();i++)
        {
            if(s.count(nums[i])!=0)
                return nums[i];
            else
            {
                s.insert(nums[i]);
            }
        }
        return -1;
    }
};
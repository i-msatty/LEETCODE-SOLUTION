class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(count(nums.begin(),nums.end(),target))
            return true;
        else
            return false;
    }
};
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        unordered_map<int,int>mp;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]=-1;
        }
        mp[nums[0]]=0;
        for(i=1;i<nums.size();i++)
        {
            if(mp[nums[i]]>=0 && abs(mp[nums[i]]-i)<=k)
                return true;
            else
            {
                mp[nums[i]]=i;
            }
        }
        return false;
    }
};
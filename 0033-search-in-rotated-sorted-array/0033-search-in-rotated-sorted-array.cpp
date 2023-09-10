class Solution {
public:
    int search(vector<int>& nums, int target) {
            int index=(find(nums.begin(),nums.end(),target)-nums.begin());
            if(index<nums.size())
                return index;
            else
                    return -1;}
   
};
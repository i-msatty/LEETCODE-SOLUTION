class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size=floor(nums.size()/3);
        int size2= nums.size();
        int i;
        vector<int>ans;
        for(i=0;i<size2;i++){
            if(count(ans.begin(),ans.end(),nums[i])!=0)
                continue;
            if(count(nums.begin(),nums.end(),nums[i])>size){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
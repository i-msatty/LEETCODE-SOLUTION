class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        int tot;
        for(int i=0;i<n;i++)
        {
            nums.push_back(start+2*i);
        }
        tot=nums[0];
        for(int i=1;i<n;i++)
        {
            tot^=nums[i];
        }
        return tot;
    }
};
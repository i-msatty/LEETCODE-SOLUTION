class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        short r = 0;
        for(int x: nums)
        {
            r ^= x;
        }
        return r;
    }
};
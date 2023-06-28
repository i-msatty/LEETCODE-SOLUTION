class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> a;
        vector<int> b;
        vector<int> c;
        int i;
        int c1=0,c2=0;;
        for(i=0;i<n;i++)
        {
            a.push_back(nums[i]);
        }
        for(i=n;i<nums.size();i++)
        {
            b.push_back(nums[i]);
        }
        for(i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                c.push_back(a[c1]);
                c1++;
            }
            else
            {
                c.push_back(b[c2]);
                c2++;
        }
        }
        return c;
    }
};
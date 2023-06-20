class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums)
    {
     int sum=0;
        vector<int> a;
        vector<int> b;
        vector<int> c;
        int i;
        a.push_back(0);
        for(i=1;i<nums.size();i++)
        {
            for(int j=i-1;j>=0;j--)
            {
             sum=sum+nums[j];   
            }
            a.push_back(sum);
            sum=0;
        }
        sum=0;
        for(i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                sum=sum+nums[j];
            }
            b.push_back(sum);
            sum=0;
        }
        for(i=0;i<a.size();i++)
        {
            c.push_back(abs(a[i]-b[i]));
        }
        return c;
    }
};
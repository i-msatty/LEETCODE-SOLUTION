class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> c;
        int i=0;
        for(i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int size=nums1.size();
        if(size%2!=0)
        {
            return nums1[size/2];
        }
        else
        {
            double median= nums1[size/2]+nums1[(size/2)-1];
            return median/2;
        }
    }
};
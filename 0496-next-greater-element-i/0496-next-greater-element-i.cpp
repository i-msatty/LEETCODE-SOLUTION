class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<pair<int,int>> st;
        map<int,int> m;
        vector<int> ans(nums2.size(),-1);
        for(int x=0; x<nums2.size(); x++)
        {
            m[nums2[x]]=x;
            while(!st.empty() && st.top().first<nums2[x])
            {
                ans[st.top().second]=nums2[x];
                st.pop();
            }
            st.push({nums2[x],x});
        }
        vector<int> a(nums1.size());
        for(int x=0; x<nums1.size(); x++)
        {
            a[x]=ans[m[nums1[x]]];
        }
        return a;
    }
};
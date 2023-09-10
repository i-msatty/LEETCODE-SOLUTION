class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer(2);
           // list<int> s1;
            //list<int> s2;
            for(int i:nums1)
            {
                    if(count(nums2.begin(),nums2.end(),i)==0 && count(answer[0].begin(),answer[0].end(),i)==0)
                            answer[0].push_back(i);
            }
            for(int i: nums2)
            {
                    if(count(nums1.begin(),nums1.end(),i)==0 && count(answer[1].begin(),answer[1].end(),i)==0)
                            answer[1].push_back(i);
            }
            return answer;
    }
};
int arr[1001][2];

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            vector<int> returning;
            int i;
            set<int> s;
            for(i=0;i<1001;i++)
            {
                    arr[i][0]=-1;
                    arr[i][1]=-2;
            }
            for(i=0;i<nums1.size();i++)
            {
                    arr[nums1[i]][0]=nums1[i];
            }
            for(i=0;i<nums2.size();i++)
            {
                    arr[nums2[i]][1]=nums2[i];
            }
            for(i=0;i<1001;i++)
            {
                    if(arr[i][0]==arr[i][1])
                       s.insert(arr[i][0]);     
            }
            for(int itr:s)
            {
                    //cout<<"Values in set "<<itr<<",";
                   returning.push_back(itr); 
            }
            return returning;
    }
};
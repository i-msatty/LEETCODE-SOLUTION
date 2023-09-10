int arr[1001][4];
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
            vector<int> returning;
            set<int> s;
            int i;
            for(i=0;i<1001;i++)
            {
                arr[i][0]=-1;
                arr[i][1]=-1;
                arr[i][2]=0;
                arr[i][3]=0;
            }
            for(i=0;i<nums1.size();i++)
            {
                    arr[nums1[i]][0]=nums1[i];
                    arr[nums1[i]][2]++;
            }
            for(i=0;i<nums2.size();i++)
            {
                    arr[nums2[i]][1]=nums2[i];
                    arr[nums2[i]][3]++;
            }
            for(i=0;i<1001;i++)
            {
                    if(arr[i][0]==arr[i][1])
                    {
                            for(int j=0;j<min(arr[i][2],arr[i][3]);j++)
                            {
                                    returning.push_back(arr[i][0]);
                            }
                    }
            }
            return returning;
    }
};
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
            vector<int> c;
            int total_no_array=nums.size();
            int arr[1001][2];
            for(int i=0;i<1001;i++)
            {
                    arr[i][0]=0;
            }
        for(int i=0;i<nums.size();i++)
        {
                for(int j=0;j<nums[i].size();j++)
                {
                        arr[nums[i][j]][0]++;  //count
                        arr[nums[i][j]][1]=nums[i][j]; //stores element
                }
        }
//cout<<"count "<<arr[3][0];
         for(int i=0;i<1001;i++)
         {
                 if(arr[i][0]==total_no_array)
                         c.push_back(arr[i][1]);
         }
            return c;
    }
};
class Solution {
public:
    int search(vector<int>& nums, int target) {
            int index=(find(nums.begin(),nums.end(),target)-nums.begin());
            if(index<nums.size())
                return index;
            else
                    return -1;}
    //     int max= 10000;
    //         int arr[max][2];
    //         int i;
    //         for(i=0;i<max;i++)
    //         {
    //                 arr[i][0]=-1;
    //                 arr[i][1]=-1;
    //         }
    //         for(i=0;i<nums.size();i++)
    //         {
    //                 if(nums[i]>=0)
    //                 {
    //                 arr[nums[i]][0]= i;
    //                 }
    //                 else
    //                 {
    //                         arr[abs(nums[i])][1]=i;
    //                 }
    //         }
    //         if(target>=0)
    //         {
    //                 if(arr[nums[target]][0]!=-1)
    //                         return arr[nums[target]][0];
    //                 else
    //                         return -1;
    //         }
    //         else
    //         {
    //                  if(arr[nums[target]][1]!=-1)
    //                         return arr[nums[target]][1];
    //                 else
    //                         return -1;
    //         }
    // }
};
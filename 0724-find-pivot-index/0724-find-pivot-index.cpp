class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0,rightsum=0;
        int i;
        int size=nums.size();
        for(i=0;i<size;i++)
        {
            rightsum+=nums[i];
        }       
        for(i=0;i<size;i++)
        {
            if(i==0){
                rightsum-=nums[i];
             if(leftsum==rightsum)
                 return i;
            }
            if(i!=0)
            {
                leftsum+=nums[i-1];
                rightsum-=nums[i];
                if(leftsum==rightsum)
                    return i;
            }
        }
        return -1;
    }
};
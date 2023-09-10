class Solution {
    int count=0;
public:
bool do_check(vector<int> nums) //checks whether vector became zero or not
{
    for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                return 1;
        }
        return 0;
}
        
    int minimumOperations(vector<int>& nums) {
            int i;
            int min=101;
        if(nums.size()==0)//if array is empty
                return 0;
        //if not empty then
        while(do_check(nums)!=0)
        {
                count++;
        // finds minimum non zero element
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0 && nums[i]<min)
                min=nums[i];
        }       
               // cout<<"minimum at "<<count<<"is "<<min<<endl;
          // performs the operation
          for(i=0;i<nums.size() ;i++)
        { 
                if(nums[i]==0)
                        continue;
            else if(nums[i]-min>=0)
                  nums[i]-=min;
            else
                nums[i]=0;
        }
                min=101;
        }
            return count; 
        }
};
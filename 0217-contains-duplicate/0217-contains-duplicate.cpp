class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int, int>umap;
        
        for(int i = 0; i<nums.size(); i++)
        {
            umap[nums[i]]++;
        }
       for (auto i:umap)
       {
           if(i.second >=2)
               return 1;
           
       }
        return 0;
        
    }
};
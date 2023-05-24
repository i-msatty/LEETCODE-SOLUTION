class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        priority_queue<pair<int, int>>pq;
        vector<int>v;
        
        for(int i = 0; i<nums.size(); i++)
        {
            umap[nums[i]]++;
        }
        
        for(auto it: umap)
        {
            pq.push({it.second, it.first});
        }
        
        for(int i =0; i<k; i++)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        
        
        return v;
    }
};
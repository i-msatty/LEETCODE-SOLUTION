bool cmp(pair<string, int> a, pair<string, int> b) {
    // Reverse Sort by 2nd, 1st Sorted
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mp;
        for(auto x: words) mp[x]++;
        vector<pair<string, int>> vec;
        for(auto x: mp) {
            vec.push_back({x.first, x.second});
        }
        sort(vec.begin(), vec.end(), cmp);
        vector<string> ans;
        for(int i=0; i<k; i++) {
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};
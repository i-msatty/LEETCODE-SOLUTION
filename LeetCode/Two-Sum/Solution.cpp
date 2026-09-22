1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        vector<pair<int,int>> arr;
5        for(int i=0;i<nums.size();i++){
6            arr.push_back({nums[i],i});
7        }
8        sort(arr.begin(),arr.end());
9        int first=0;
10        int last=arr.size()-1;
11        while(first<last){
12            int sum=arr[first].first+arr[last].first;
13            if(sum==target)
14            {
15                return {arr[first].second,arr[last].second};
16            }
17            else if(sum>target){
18                last=last-1;
19            }
20            else
21            {
22                first=first+1;
23            }
24        }
25        return {};
26    }
27};
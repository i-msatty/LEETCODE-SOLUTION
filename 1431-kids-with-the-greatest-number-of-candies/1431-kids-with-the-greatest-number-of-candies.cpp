class Solution {
    
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {int i;
     vector<bool> a;
     for(i=0;i<candies.size();i++)
     {
         if(candies[i]+extraCandies>=*max_element(candies.begin(),candies.end()))
             a.push_back(true);
         else
             a.push_back(false);
     }
     return a;
    }
};
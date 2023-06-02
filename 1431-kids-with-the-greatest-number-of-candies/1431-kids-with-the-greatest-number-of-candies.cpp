class Solution {
    
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {int i;
     vector<bool> a;
     int max=0;
     for(i=0;i<candies.size();i++)
     {
         if(max<candies[i])
             max=candies[i];
     }
     for(i=0;i<candies.size();i++)
     {
         if(candies[i]+extraCandies>=max)
             a.push_back(true);
         else
             a.push_back(false);
     }
     return a;
    }
};
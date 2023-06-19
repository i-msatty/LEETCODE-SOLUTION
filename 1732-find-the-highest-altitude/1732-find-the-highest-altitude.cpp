class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {int max=0;
     int i;
     vector<int> temp;
     temp.insert(temp.begin(),0);
     for(i=0;i<gain.size();i++)
     {
         temp.insert(temp.end(),temp[i]+gain[i]);
     }
        return *max_element(temp.begin(), temp.end());
    }
};
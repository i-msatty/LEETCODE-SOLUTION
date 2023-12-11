class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        long int twenty=0.25*arr.size();
        for(int i=0;i<arr.size();i++)
        {
            int countn=count(arr.begin(),arr.end(),arr[i]);
            if(countn>twenty)
                return arr[i];
        }
        return -1;
    }
};
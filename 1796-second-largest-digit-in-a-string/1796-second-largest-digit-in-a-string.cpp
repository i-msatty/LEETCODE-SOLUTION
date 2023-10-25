#include<string>
#include<stdlib.h>
using namespace std;
class Solution {
public:
    int secondHighest(string s) {
        vector<int>num;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=48 && s[i]<=57)
            { 
                if(count(num.begin(),num.end(),s[i])==0)
                    num.push_back(s[i]);
            }
        }
        sort(num.begin(),num.end());
        if(num.size()==1||num.size()==0)
            return -1;
        else
        {
            int temp=char(num[num.size()-2]);
            return temp-48;
        }
    }
};
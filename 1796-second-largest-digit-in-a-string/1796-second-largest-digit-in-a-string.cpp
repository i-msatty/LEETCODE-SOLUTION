#include<string>
#include<stdlib.h>
using namespace std;
class Solution {
public:
    int secondHighest(string s) {
        vector<int>num;
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            if(s[i]>=48 && s[i]<=57)
            { 
                if(count(num.begin(),num.end(),s[i])==0)
                    num.push_back(s[i]);
            }
        }
        sort(num.begin(),num.end());
        int size=num.size();
        if(size==1||size==0)
            return -1;
        else
        {
            return num[size-2]-48;
        }
    }
};
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end()); 
        int len=s.length();
        int i=0;
        for(;i<len;i++){
            if(s[i]!=t[i])
                return t[i];
        }
return t[len];

    }
};
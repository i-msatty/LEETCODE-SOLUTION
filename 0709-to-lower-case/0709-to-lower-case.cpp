class Solution {
public:
    string toLowerCase(string s) {
    int i;
        for(i=0;i<s.length();i++){
            if(s[i]>=65 && s[i]<=91){
                s[i]=tolower(s[i]);
            }
        }
        return s;
    }
};
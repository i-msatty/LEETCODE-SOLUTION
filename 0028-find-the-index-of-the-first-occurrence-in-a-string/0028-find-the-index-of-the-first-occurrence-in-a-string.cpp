class Solution {
public:
    int strStr(string haystack, string needle) {
        int len=needle.length();
        int i;
        string ch;
        for(i=0;i<haystack.length();i++){
            if(haystack[i]==needle[0])
            { 
                ch=haystack.substr(i,len);
                cout<<ch<<endl;
                if(ch==needle)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};
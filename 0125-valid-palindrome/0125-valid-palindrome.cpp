class Solution {
public:
    bool isPalindrome(string s) {
        
        string str = "";
        string rev_str = "";
        
          for(int i =0 ; i<s.length(); i++)
          {
              if(s[i]>=65 && s[i]<=90)
                  s[i] = s[i]+32;
          }
        for(int i =0; i<s.length(); i++)
        {
            if(s[i]>=97 && s[i]<=122 || s[i]>='0' && s[i]<='9')
            {
                str+=s[i];
            }
        }
        rev_str= str;
        cout<< rev_str;
        reverse(rev_str.begin(), rev_str.end());
        return (str==rev_str);
    }
};
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> check;
        stack<char> check2;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]== '#' && check.empty()!=1)
                check.pop();
             else if(s[i]=='#' && check.empty()==1)
                continue;
            else
                check.push(s[i]);
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#' && check2.empty()!=1)
                check2.pop();
            else if(t[i]=='#' && check2.empty()==1)
                continue;
            else
                check2.push(t[i]);
        }
        cout<<check.size();
        cout<<check2.size();
        if(check.size()!=check2.size())
            return false;
        while(!check.empty())
        {
            if(check2.empty()!=1 && check.top()==check2.top())
            {
                check.pop();
                check2.pop();
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
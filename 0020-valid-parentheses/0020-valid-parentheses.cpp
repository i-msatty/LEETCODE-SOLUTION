class Solution {
public:
    bool isValid(string s) {
        stack<char> sh;
        int i;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='(' ||s[i]=='{'||s[i]=='[')
               sh.push(s[i]);   
            else if(s[i]==')' || s[i]=='}'|| s[i]==']')
            {
                if(sh.empty())
                    return false;
                if(s[i]==']' && sh.top()=='[')
                    sh.pop();
                else if(s[i]==')' && sh.top()=='(')
                    sh.pop();
                else if(s[i]=='}' && sh.top()=='{')
                    sh.pop();
                else
                    return false;
            }
        }
        if(sh.empty())
            return true;
        else
            return false;
    }
};
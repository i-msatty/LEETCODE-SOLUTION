class Solution {
public:
    unordered_set<char> s={'q','w','e','r','t','y','u','i','o','p','Q','W','E','R','T','Y','U','I','O','P'};
    unordered_set<char> h={'a','s','d','f','g','h','j','k','l','A','S','D','F','G','H','J','K','L'};
    unordered_set<char> o={'z','x','c','v','b','n','m','Z','X','C','V','B','N','M'};
    int i;
    bool check1(string ch){
        for(i=0;i<ch.length();i++)
        {
            if(s.count(ch[i])==0)
                return 0;
        }
        return 1;
    }
    bool check2(string ch){
           for(i=0;i<ch.length();i++)
        {
            if(h.count(ch[i])==0)
                return 0;
        }
        return 1;
    }
    bool check3(string ch){
           for(i=0;i<ch.length();i++)
        {
            if(o.count(ch[i])==0)
                return 0;
        }
        return 1;
    }
    vector<string> findWords(vector<string>& words) {
        int i,j;
        string ch;
        vector<string> yes;
        for(i=0;i<words.size();i++)
        {
            ch=words[i];
            if(check1(ch))
                yes.push_back(ch);
            if(check2(ch))
                yes.push_back(ch);
            if(check3(ch))
                yes.push_back(ch);
        }
        return yes;
    }
};
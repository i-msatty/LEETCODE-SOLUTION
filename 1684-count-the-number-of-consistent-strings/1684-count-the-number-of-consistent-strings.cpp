class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int i,j,len;
        unordered_set<char> s;
        int count=0;
        for(i=0;i<allowed.length();i++)
        {
            s.insert(allowed[i]);
        }
        for(i=0;i<words.size();i++)
        {
            len=words[i].size();
            for(j=0;j<len;j++)
            {
                if(s.count(words[i][j])!=0)
                    continue;
                else
                    break;
            }
            if(j == len)
            {
                count++;
            }
        }
        return count;
    }
};
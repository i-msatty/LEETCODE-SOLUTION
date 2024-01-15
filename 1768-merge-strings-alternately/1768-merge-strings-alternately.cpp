class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1=word1.length();
        int l2=word2.length();
        int i=0;
        string result;
        while(i<l1 && i<l2)
        {
            result+=word1[i];
            result+=word2[i];
            i++;
        }
        if(i==l1 && i!=l2)
        {
            while(i!=l2)
            {
            result+=word2[i];
                i+=1;
            }
        }
        else if(i==l2 && i!=l1)
        {
            while(i!=l1)
            {
            result+=word1[i];
                i+=1;
            }
        }
        return result;
    }
};
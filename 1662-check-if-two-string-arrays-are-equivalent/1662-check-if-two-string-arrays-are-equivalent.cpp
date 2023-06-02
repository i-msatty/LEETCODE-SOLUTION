class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
    {
        string ch1="",ch2="";
        for(int i=0;i<word1.size();i++)
            ch1=ch1+word1[i];
        for(int i=0;i<word2.size();i++)
            ch2=ch2+word2[i];
        if(ch1==ch2)
            return true;
        else
            return false;
    }
};
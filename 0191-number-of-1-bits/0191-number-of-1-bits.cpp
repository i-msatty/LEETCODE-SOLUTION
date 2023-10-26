class Solution {
public:
    int hammingWeight(uint32_t n) {
        if(n==0)
            return 0;
         string s = bitset<32> (n).to_string();
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==49)
                count++;
        }
        return count;
    }
};
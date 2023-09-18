class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int i;
        int count=0;
        set<char> s;
        for(i=0;i<jewels.length();i++)
        {
            s.insert(jewels[i]);
        }
        for(i=0;i<stones.length();i++)
        {
            if(s.count(stones[i])!=0)
                count++;
        }
        return count;
    }
};
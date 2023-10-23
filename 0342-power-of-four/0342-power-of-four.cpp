class Solution {
public:
    bool isPowerOfFour(int n) {
        int i;
        if(n==1 || n==4)
            return true;
        else if(n<1 || n>1&& n<4)
            return false;
        else
        {
            for(i=2;;i++)
            {
                if(pow(4,i)==n)
                    return true;
                else if(pow(4,i)>n)
                    return false;
                else
                    continue;
            }
        }
    }
    };
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n==0)
            return false;
        long long int  x= n;
        x-=1;
        return (n && !(n & (x)));
    }
};
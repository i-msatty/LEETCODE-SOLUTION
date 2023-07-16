class Solution {
public:
    int sumBase(int n, int k) 
    {
        if(n==k)
            return 1;
    return sum(n,k);
    }
    int sum(int n,int k)
    {
        if(n<k)
            return n%k;
        else
            return ((n%k)+sum(n/k,k));
    }
};
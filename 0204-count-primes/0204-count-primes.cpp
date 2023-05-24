class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
     vector<bool> is_prime(n+1, 1);
        is_prime[0] = is_prime[1] = 0;
        
        
        for(int i =2; i<n; i++)
        {
            if(is_prime[i] ==1)
            {
                for(int j = 2*i; j<n; j+=i)
                {
                    is_prime[j] = 0;
                }
            }
        }
        
        for(int i =0; i<n; i++)
        {
            if(is_prime[i] ==1)
            {
             count++;
            }
        }
        return count;
        
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        long num1=x;
        long num2=0;
        if(x<0)
            return false;
        while(x!=0)
        {
            int last=x%10;
            num2=num2*10+last;
            x/=10;
        }
        if(num1==num2)
            return true;
        else
            return false;
    }
};
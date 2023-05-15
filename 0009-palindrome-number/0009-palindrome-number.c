bool isPalindrome(int x)
{   long rev=0;
    int temp=x;
    if(x<0)
       return false;
    while(x!=0)
    {
         int l=x%10;
        rev=rev*10+l;
        x=x/10;
    }
    if(rev==temp)
        return true;
    else
        return false;
}
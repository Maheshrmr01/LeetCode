class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        //used long long to handle overflow cases
        long long r = reverse(x);
        return (x==r)? true:false;
    }
    long long reverse(int x )
    {
        long long r = 0;
        while(x!=0)
        {
            r= r*10 + x%10;
            x/=10; 
        }
        return r;
    }
};

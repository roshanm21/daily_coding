class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        };
        long long int numsave = x;
        long long int rev = 0;
        while (numsave > 0)
        {
            long long int lastdig = numsave % 10;
            numsave /= 10;
            rev = rev * 10 + lastdig;
        };

        if (rev == x)
        {
            return true;
        }
        else
        {
            return false;
        };
    }
};


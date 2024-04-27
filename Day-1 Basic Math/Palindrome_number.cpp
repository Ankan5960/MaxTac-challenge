//problem link: https://leetcode.com/problems/palindrome-number/
#include<iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        long dup=0,rel=x;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
            dup=dup*10+(x%10);
            x/=10;
        }
        if(dup<INT_MIN || dup>INT_MAX)
            return false;

        if(dup==rel)
            return true;
         
        return false;
    }
};

int main()
{
    Solution sol;
    std::cout<<sol.isPalindrome(121);
}
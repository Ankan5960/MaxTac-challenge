//Problem link: https://leetcode.com/problems/reverse-integer/description/

#include<iostream>

class Solution {
public:
    int reverse(int x) {
        long ans=0;

        while(x!=0)
        {
            ans=ans*10+(x%10);
            x/=10;
        }

        if(ans<INT_MIN || ans>INT_MAX)
            return 0;
        
        return ans;
    }
};

int main()
{
    Solution sol;
    std::cout<<sol.reverse(123);
}
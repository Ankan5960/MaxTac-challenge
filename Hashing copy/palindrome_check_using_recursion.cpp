//Problem link:

#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left=0,right=s.length()-1;
        while(left<right){
             while(left<right && !isalnum(s[left]))
                ++left;
            while(left<right && !isalnum(s[right]))
                --right;
            if(tolower(s[left])!=tolower(s[right]))
                return false;

            ++left;
            --right;
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string str="a man, a plan a canal panama";
    string res=(sol.isPalindrome(str)) ? "true" : "False";
    cout<<res;  
}
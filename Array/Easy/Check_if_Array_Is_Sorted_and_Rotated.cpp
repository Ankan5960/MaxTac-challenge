

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>nums[(i+1)%nums.size()])
                count++;
        }
        return (count<=1);
    }
};

int main()
{
    Solution sol;
    vector<int>vec={2,1,3,4};
    string str=sol.check(vec) ? "true":"false";
    cout<<str;
}


#include<iostream>
#include<vector>
#include<string>
#include<map>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int IndexForIncrement=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]!=nums[i])
            {
                nums[IndexForIncrement]=nums[i];
                IndexForIncrement++;
            }
        }
        return IndexForIncrement;
    }
};

int main()
{
    Solution sol;
    vector<int>vec={1,1,2};
    cout<<sol.removeDuplicates(vec);
}
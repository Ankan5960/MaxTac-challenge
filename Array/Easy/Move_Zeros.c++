
#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0){
                swap(nums[i],nums[k]);
                k++;
            }
        }
    }
};


int main()
{
    Solution sol;
    std::vector<int>vec={1, 0,2,0, 3,0, 4, 5};
    sol.moveZeroes(vec);
    for(auto it:vec)
    {
        cout<<it<<" ";
    }
}

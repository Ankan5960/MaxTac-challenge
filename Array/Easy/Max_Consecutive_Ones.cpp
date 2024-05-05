#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,Max=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1){
                count++;
            }
            else{
                count=0;
            }
            Max=max(Max,count);
        }
        return Max;
    }
};

int main()
{
    vector<int>vec={1,1,0,1,1,1,1,1};
    Solution sol;
    cout<<sol.findMaxConsecutiveOnes(vec);
}
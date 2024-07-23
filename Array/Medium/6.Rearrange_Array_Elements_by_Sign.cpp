#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> rearrangeArray_bruteForce(vector<int>& nums) {
        vector<int>posativearr;
        vector<int>negativearr;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                posativearr.push_back(nums[i]);
            else
                negativearr.push_back(nums[i]);
        }
        for(int i=0;i<(nums.size()/2);i++)
        {
            nums[2*i]=posativearr[i];
            nums[2*i+1]=negativearr[i];
        }
        return nums;
    }
    vector<int> rearrangeArray_optimal(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,0);
        int posindex=0,negindex=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                res[posindex]=nums[i];
                posindex+=2;
            }
            else
            {
                res[negindex]=nums[i];
                negindex+=2;
            }
                
        }
        return res;
    }
};

int main()
{
    Solution sol;
    vector<int>arr={3,1,-2,-5,2,-4};
    vector<int>res=sol.rearrangeArray_optimal(arr);
    for(auto it:res)
    {
        cout<<it<<" ";
    }
}
#include<iostream>
#include<vector>
#include <algorithm>
#include<map>

using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int Max=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>Max){
                Max=nums[i];
            }
        }
        vector<int>arr(Max+1,0);
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        int res=0;
        for(int i=0;i<arr.size();i++){
           if(arr[nums[i]]==1)
            return nums[i];
        }
        return -1;
    }

    int singleNumber_better(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second==1)
                return it.first;
        }
        return -1;
    }

    int singleNumber_Optimal(vector<int>& nums) {
        int Xor1=0;
        for(int i=0;i<nums.size();i++){
            Xor1=Xor1^nums[i];
        }
        return Xor1;
    }
};

int main()
{
    vector<int>vec={1,2,2};
    Solution sol;
    cout<<sol.singleNumber_Optimal(vec);
}
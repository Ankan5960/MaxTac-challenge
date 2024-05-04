#include<iostream>
#include<vector>

using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> ans(n,0);
    for(int i=0;i<n;i++){
        if(nums[i]<=n)
            ans[nums[i]-1]++;
    }
    return ans;
}

int main()
{
    vector<int> nums={1,2,1,3,5,2,3,1,1};
    vector<int>res=countFrequency(nums.size(),4,nums);
    for(auto it:res)
    {
        cout<<it<<" ";
    }
}
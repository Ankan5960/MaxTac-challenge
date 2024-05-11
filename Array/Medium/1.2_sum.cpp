#include<iostream>
#include<vector>
#include<map>

using namespace std;
class Solution{
    public:
        vector<int> twoSum_Brute_Force(vector<int>& nums, int target) 
        {
            vector<int>vec;
            int n=nums.size();
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j)
                        continue;
                    if(nums[i]+nums[j]==target){
                        vec.push_back(i);
                        vec.push_back(j);
                        return vec;
                    }
                }
            }
            return vec;
        }
        vector<int> twoSum_Better(vector<int>& nums, int target) 
        {
            map<int,int>mpp;
        
            for(int i=0;i<nums.size();i++){
                int num=nums[i];
                int more=target-num;
                if(mpp.find(more)!=mpp.end()){
                    return {mpp[more],i};
                }
                mpp[num]=i;
            }
            return {-1,-1};
        }
};

int main()
{
    Solution sol;
    vector<int>nums={2,7,11,15};
    vector<int>vec=sol.twoSum_Better(nums,9);
    for(auto it:vec){
        cout<<it<<" ";
    }

}
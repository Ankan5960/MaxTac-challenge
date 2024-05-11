#include<iostream>
#include<map>
#include<vector>

using namespace std;
class Solution{
    public:
        void sortColors_Better(vector<int>& nums) {
            int zeros=0,ones=0,twos=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0) zeros++;
                else if(nums[i]==1) ones++;
                else if(nums[i]==2) twos++;
            }
            for(int i=0;i<zeros;i++)
                nums[i]=0;
            for(int i=zeros;i<ones+zeros;i++)
                nums[i]=1;
            for(int i=ones+zeros;i<ones+zeros+twos;i++)
                nums[i]=2;
        }

        void sortColors_Optimal(vector<int>& nums){
            int n=nums.size();
            int low=0,mid=0,high=n-1;
            while(mid<=high){
                if(nums[mid]==0){
                    swap(nums[mid],nums[low]);
                    mid++;
                    low++;
                }
                else if(nums[mid]==1)
                    mid++;
                else if(nums[mid]==2){
                    swap(nums[mid],nums[high]);
                    high--;
                }
            }
        }
};

int main()
{
    Solution sol;
    vector<int>vec={2,0,2,1,1,0};
    sol.sortColors_Optimal(vec);
    for(auto it:vec)
        cout<<it<<" ";
}
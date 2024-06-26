#include<iostream>
#include<vector>
#include<map>

using namespace std;
class Solution{
    public:
        int majorityElement_Better(vector<int>& nums) {
            map<int,int>mpp;
            int max=0;
            for(int i=0;i<nums.size();i++){
                mpp[nums[i]]++;
            }
            for(auto it:mpp){
                if(it.second>(nums.size()/2))
                    return it.first;
            }
            return 0;
        }

        int majorityElement_Optimal(vector<int>& nums) {
            int ele;
            int count=0;
            for(int i=0;i<nums.size();i++){
                if(count==0){
                    ele=nums[i];
                    count=1;
                }
                else if(nums[i]==ele){
                    count++;
                }
                else{
                    count--;
                }
            }
            int count1=0;
            for(int i=0;i<nums.size();i++){
                if(ele==nums[i])
                    count1++;
            }
            if(count1>(nums.size()/2))
                return ele;
            
            return -1;
        }
};
int main(){
    Solution sol;
    vector<int>vec={2,2,2,1,1,1,2};
    //cout<<sol.majorityElement_Better(vec);
    cout<<sol.majorityElement_Optimal(vec);

}
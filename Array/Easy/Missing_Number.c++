#include <iostream>
#include <vector>
#include<map>

using namespace std;
class Solution {
public:
    int missingNumber_Better(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<=nums.size();i++){
            if(mpp[i]==0)
                return i;
        }
        return -1;
    }

    int missingNumber_Optimal1(vector<int>& nums) {
        int n=nums.size(),arrSum=0;
        int totalSum=n*(n+1)/2;
        for(int i=1;i<n;i++){
            arrSum+=nums[i];
        }
        return (totalSum-arrSum);
    }

    int missingNumber_Optimal2(vector<int>& nums) {  //XOR apporach
        int xor1=0,xor2=0;
        for(int i=0;i<nums.size();i++){
            xor1=xor1^nums[i];
            xor2=xor2^(i+1);
        }
        return(xor1^xor2);
    }
};

int main()
{
    vector<int> a = {0,1};
   
    Solution sol;
    cout<<sol.missingNumber_Optimal2(a);
}

#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int i,j;
        for(i=n-k,j=n-1;i<j;i++,j--)
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        for(i=0,j=n-k-1;i<j;i++,j--)
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        for(i=0,j=n-1;i<j;i++,j--)
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
};

int main()
{
    Solution sol;
    std::vector<int>vec={1, 2, 3, 4, 5};
    sol.rotate(vec,3);
    for(auto it:vec)
    {
        cout<<it<<" ";
    }
}

#include<iostream>
#include<vector>
#include<map>

using namespace std;
class Solution{
    public:
    int longestSubarrayWithSumK_BruteForce(vector<int>& a, long long k) 
    {
        int n = a.size(); // size of the array.

        int len = 0;
        for (int i = 0; i < n; i++) { // starting index
            long long s = 0;
            for (int j = i; j < n; j++) {         
                s += a[j];
                if (s == k)
                    len = max(len, j - i + 1);
                if(s>k)
                    break;
            }
        }
        return len;
    }
    int lenOfLongSubarr_Better(vector<int>& a, int k) //if the array contained positive and negative number then it will be optimal solution.
    { 
        int n=a.size();
        int sum=0;
        int len=0;
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum==k){
                len=max(len,i+1);
            }
            int rem=sum-k;
            if(mpp.find(rem)!=mpp.end()){
                int templen=i-mpp[rem];
                len=max(templen,len);
            }
            if(mpp.find(sum)==mpp.end()){
                mpp[sum]=i;
            }
        }
        
        return len;
    } 
    int lenOfLongSubarr_Optimal(vector<int>& a, int k) //if the array contain zero and positive number then it is optimal.
    { 
        int maxLen=0;
        int left=0,right=0,sum=a[0];
        int n=a.size();
        while(right<n){
            while(left<=right && sum>k){
                sum-=a[left];
                left++;
            }
            if(sum==k){
                maxLen=max(maxLen,right-left+1);
            }
            
            if(right<n){
                right++;
                sum+=a[right];
            }
        }
        
        return maxLen;
    } 

};


int main()
{
    vector<int>vec={1,2,0,1};
    Solution sol;

    cout<<sol.longestSubarrayWithSumK_BruteForce(vec,3)<<endl;
    cout<<sol.lenOfLongSubarr_Better(vec,3)<<endl;
    cout<<sol.lenOfLongSubarr_Optimal(vec,3);
}
#include<iostream>
#include<vector>
#include<climits>

using namespace std;

class Solution {
public:
    int maxProfit_burte_force(vector<int>& prices) {
        int n=prices.size();
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                maxsum=max(maxsum,prices[j]-prices[i]);
            }
        }
        return maxsum;
    }
    int maxProfit_optimal(vector<int>& prices)
    {
        int maxsum=INT_MIN;
        int minele=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minele=min(minele,prices[i]);
            maxsum=max(maxsum,prices[i]-minele);
        }
        return maxsum;
    }
};

int main()
{
    Solution sol;
    vector<int> arr={7,1,5,3,6,4};
    cout<<sol.maxProfit_optimal(arr);
}
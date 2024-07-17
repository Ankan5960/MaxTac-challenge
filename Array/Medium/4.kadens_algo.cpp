#include <iostream>
#include <vector>
#include <climits>

using namespace std;
class Solution
{
public:
    int maxSum_better(vector<int> &nums)
    {
        int maxSum = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += nums[j];
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
    }

    int maxSum_optimal(vector<int> &nums)
    {
        long long maxsum = LONG_MIN;
        long long sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (sum > maxsum)
            {
                maxsum = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxsum;
    }

    int maxSum_optimal_with_subarray(vector<int> &nums)
    {
        long long maxsum = LONG_MIN;
        long long sum = 0;
        int start = 0;
        int ansStart = -1, ansEnd = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (sum == 0)
            {
                start = i;
            }
            if (sum > maxsum)
            {
                maxsum = sum;

                ansStart = start;
                ansEnd = i;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        cout << "The subarray is: [";
        for (int i = ansStart; i <= ansEnd; i++)
        {
            cout << nums[i] << " ";
        }
        cout << "]n";
        return maxsum;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << sol.maxSum_optimal(nums);
}
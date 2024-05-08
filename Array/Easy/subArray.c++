#include<iostream>
#include<vector>

using namespace std;
int longestSubarrayWithSumK(vector<int>& a, long long k) {
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

int main()
{
    vector<int>vec={1,2,1,1};
    cout<<longestSubarrayWithSumK(vec,3);
}
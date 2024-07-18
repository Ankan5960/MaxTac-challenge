#include<iostream>
#include<vector>
#include<map>

using namespace std;
void frequencyCount(vector<int>& arr,int N, int P)
{ 
        map<int,int> mpp;
        for(int i=0;i<N;i++)
        {
            mpp[arr[i]]++;
        }
        int j=0;
        for(int i=1;i<=N;i++)
        {
            arr[j]=mpp[i];
            j++;
        }
}

int main()
{
    vector<int> arr={2, 3, 2, 3, 5};
    frequencyCount((arr),5,5);
    for(auto it:arr)
    {
        cout<<it<<" ";
    }

}
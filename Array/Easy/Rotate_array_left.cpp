#include<iostream>
#include<vector>

using namespace std;
vector<int> rotateArray(vector<int>arr, int k) {
        int n=arr.size();
        k=k%n;
        vector<int> temp;
        for(int i=0;i<k;i++){
            temp.push_back(arr[i]);
        }
        for(int i=k;i<n;i++){
            arr[i-k]=arr[i];
        }
        for(int i=(n-k);i<n;i++){
            arr[i]=temp[i-(n-k)];
        }
        return arr;
}

int main()
{
    std::vector<int>vec={1, 2, 3, 4, 5};
    vector<int>res=rotateArray(vec,3);
    for(auto it:res)
    {
        cout<<it<<" ";
    }
}


#include<iostream>
#include<vector>

using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}

int main()
{
    std::vector<int>vec={1, 0,2,0, 3,0, 4, 5};
    cout<<linearSearch(vec.size(),3,vec);    
}

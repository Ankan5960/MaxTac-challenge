
#include<vector>
#include<iostream>

using namespace std;
vector<int> printNos(int x) {
    vector<int>vec;
    if (x>1) 
    {
        vec=printNos(x-1);
    }
    vec.emplace(vec.begin(),x);
    return vec;
}

void recursion(int x)
{
    
    
    
}

int main()
{
    vector<int> vec=printNos(5);
    for(int i: vec)
    {
        cout<<i<<" ";
    }

    //recursion(5);
}
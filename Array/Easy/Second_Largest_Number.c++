#include<iostream>
#include<vector>

using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> &a) {
    int largest=a[0];
    int smallest=a[0];
    int secondlargest=-1;
    int secondsmallest=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(largest<a[i])
            largest=a[i];
        if(smallest>a[i])
            smallest=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(secondlargest<a[i] && a[i]!=largest)
            secondlargest=a[i];
        if(secondsmallest>a[i] && a[i] !=smallest)
            secondsmallest=a[i];
    }
    return {secondlargest,secondsmallest};
}


int main()
{
    std::vector<int>vec={1, 2, 3, 4, 5};
    vector<int>res=getSecondOrderElements(vec.size(),vec);
    for(auto it:res)
    {
        cout<<it<<" ";
    }
}
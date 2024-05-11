#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;
int main()
{
    int arr[]={1,1,1,6,4,3};
    int n=sizeof(arr)/sizeof(int);
    std::map<int,int> OrderMap;
    std::unordered_map<int,int> UnorderMap;
    for(int i=0;i<n;i++)
    {
        OrderMap[arr[i]]++;
        UnorderMap[arr[i]]++;
    }
    std::cout<<"Map"<<std::endl;
    std::cout<<"Key\t"<<"Value\t"<<std::endl;
    for(auto it:OrderMap)
        std::cout<<it.first<<"\t"<<it.second<<"\t"<<std::endl;

    std::cout<<"unordered map"<<std::endl;
    std::cout<<"Key\t"<<"Value\t"<<std::endl;
    for(auto it:UnorderMap)
        std::cout<<it.first<<"\t"<<it.second<<"\t"<<std::endl;
}
#include<iostream>
//Hash table
using namespace std;
int main()
{
    int arr[]={1,2,1,3,3,4,5,6,1,1,1};
    int n=sizeof(arr)/sizeof(int);
    int hash[7]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    int quary;
    cin>>quary;
    while(quary)
    {
        int num;
        cin>>num;
        cout<<hash[num]<<" ";
        quary--;
    }
}
// #include<iostream>
// #include<string>
// //Hash table
// using namespace std;
// int main()
// {
//     string str="abaacdef";
//     int hash[26]={0};
//     for(int i=0;i<str.size();i++)
//     {
//         hash[str[i]-'a']++;
//     }
//     int quary;
//     cin>>quary;
//     while(quary)
//     {
//         char ch;
//         cin>>ch;
//         cout<<hash[ch-'a']<<" ";
//         quary--;
//     }
// }

//Problem Link: https://www.naukri.com/code360/problems/hcf-and-lcm_840448?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
#include<iostream>

int calcGCD(int n, int m){
    int GCD=1,len;
    if(m==n)
        return m;
    if(m>n)
        len=m; 
    else
        len=n;

    for(int i=1;i<len;i++)
    {
        if(n%i==0 && m%i==0)
        {
            GCD=i;
        }
    }
    return GCD;
}

int main()
{
    std::cout<<calcGCD(9,6);
}

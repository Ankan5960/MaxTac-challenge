//problem link: https://www.naukri.com/code360/problems/factorial-numbers-not-greater-than-n_8365435?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<iostream>
#include<vector>

using namespace std;
long long factorial(long long n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

vector<long long> factorialNumbers(long long n) {
    vector<long long>vec;
    for(long long i=1;i<=n;i++)
    {
        long long fact=factorial(i);
        if(fact<=n)
        {
            vec.push_back(fact);
        }
        else
            break;
    }
    return vec;
}

int main()
{
    
}
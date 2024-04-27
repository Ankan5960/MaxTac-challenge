//Problem Link: https://www.naukri.com/code360/problems/sum-of-all-divisors_8360720?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
#include<iostream>

int sumOfAllDivisors(int n){	
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans+=(n/i)*i;
	}
	return ans;
}

int main()
{
    std::cout<<sumOfAllDivisors(10);
}
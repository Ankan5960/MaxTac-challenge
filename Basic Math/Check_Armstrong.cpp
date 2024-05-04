//Problem Link: https://www.naukri.com/code360/problems/check-armstrong_589?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
#include<iostream>

int CountDigit(int n){
	int count=0;
	while(n)
	{
		n/=10;
		count++;
	}
	return count;
}

int Pow(int num,int power)
{
	int res=1;
	for(int i=0;i<power;i++)
	{
		res*=num;
	}
	return res;
}

bool checkArmstrong(int n){
	int rel=n,ans=0;
	int power=CountDigit(n);
	while(n)
	{
		int lastdigit=n%10;
		ans+=Pow(lastdigit,power);
		n/=10;
	}

	if(ans==rel)
		return true;

	return false;

}

int main()
{
    std::cout<<checkArmstrong(1634);
}
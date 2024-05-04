//Problem link: https://www.naukri.com/code360/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
#include<iostream>

int countDigits(int n){
	int count=0;
	int temp=n;
	while(temp!=0)
	{
		int lastDigit=temp%10;
		if(lastDigit>0 && n%lastDigit==0)
		{
			count++;
		}
		temp/=10;
	}
	return count;
}

int main()
{
    std::cout<<countDigits(35);
}
#include<iostream>
#include<cmath>

using namespace std;
void printR(int num)
{
    if(num==0)
    {
        return;
    }
    cout<<"GFG ";
    printR(num-1);
}

void printTillN(int N)
    {
        if(N==0)
            return;
            
        printTillN(N-1);
        cout<<N<<" ";
    }

// long long sumOfSeries(long long n,long long sum) {
//         if(n==0)
//          return sum;
//         sum+=pow(n,3);
//         sumOfSeries(n-1,sum);   
//     }
long long sumOfSeries(long long n) {
        if(n==1)
         return 1;
        return n*n*n +sumOfSeries(n-1);   
}

long long int factorial(int N){
        //code here
        if(N==1)
            return 1;
        
        return N*factorial(N-1);
    }
void printArray(int ans[], int n) {
    if(n==0)
        return;
    cout<<ans[n-1]<<" ";
    printArray(ans,n-1);
}

void reverseStr(string& s,int start,int end)
    {
        if(start>=end)
        {
            return;
        }
        swap(s[start],s[end]);
        reverseStr(s,start++,end--);
    }

int main()
{
    // int ans[]={1,2,3,4,5};
    // int n=sizeof(ans)/sizeof(int);
    // printArray(ans,n);

    string str="A man, a plan, a canal: Panama";
    reverseStr(str,0,str.length()-1);
    //cout<<str;

}
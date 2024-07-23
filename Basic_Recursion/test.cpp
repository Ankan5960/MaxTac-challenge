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
void printTill1ToN(int N)
    {
        if(N==0)
            return;

        cout<<N<<" "; 
        printTillN(N-1);
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

bool palindrome(int i, string& s){
    
    // Base Condition
    // If i exceeds half of the string means all the elements 
    // are compared, we return true.
    if(i>=s.length()/2) return true;
    
    // If the start is not equal to the end, not the palindrome.
    if(s[i]!=s[s.length()-i-1]) return false;
    
    // If both characters are the same, increment i and check start+1 and end-1.
    return palindrome(i+1,s);
}

int main()
{
    // int ans[]={1,2,3,4,5};
    // int n=sizeof(ans)/sizeof(int);
    // printArray(ans,n);

    string str="madam";
    bool res=palindrome(0,str);
    if(res)
        cout<<"palindrome string";
    else
        cout<<"Not palindrome";

}
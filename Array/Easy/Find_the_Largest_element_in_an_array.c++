#include<iostream>
#include<vector>

using namespace std;
int largestElement(vector<int> &arr, int n) {
   int largest=arr[0];
   for(int i=1;i<n;i++)
   {
       if(largest<arr[i])
       {
           largest=arr[i];
       }
   }
   return largest;
}

int main()
{
    std::vector<int>vec={1, 2, 3, 4, 5};
    int n=vec.size();
    std::cout<<largestElement(vec,n);
}